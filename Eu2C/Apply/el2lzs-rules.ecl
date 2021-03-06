;;; Copyright 1994-2010 Fraunhofer ISST
;;; Copyright 2010 Henry G. Weller
;;;-----------------------------------------------------------------------------
;;  This file is part of
;;; ---                           EuLisp System 'Eu2C'
;;;-----------------------------------------------------------------------------
;;
;;  Eu2C is free software: you can redistribute it and/or modify it under the
;;  terms of the GNU General Public License version 2 as published by the Free
;;  Software Foundation.
;;
;;  Eu2C is distributed in the hope that it will be useful, but WITHOUT ANY
;;  WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
;;  FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more
;;  details.
;;
;;  You should have received a copy of the GNU General Public License along with
;;  this program.  If not, see <http://www.gnu.org/licenses/>.
;;
;;;-----------------------------------------------------------------------------
;;; Title: Rules for the EuLisp-to-LZS-Transformer
;;;  Documentation:
;;    Ingo Mohr: The mapping of EuLisp the Lisp-related intermediate language
;;    (APPLY Working Paper)
;;;  Notes:
;;    Up to now nearly no error-checking or error-handling takes places. This
;;    means, that the incoming EuLisp-module must be in correct syntax.  Dynamic
;;    variables, let/cc and unwind-protect are mapped to other forms. So they
;;    are not expressed in form of their LZS-counterparts.
;;;  Authors: Ingo Mohr
;;;  Maintainer: Henry G. Weller
;;;-----------------------------------------------------------------------------

#module el2lzs-rules
(import (level-1
         el2lzs-main
         el2lzs-error
         pair-ext
         list-ext
         option-lists
         tail-module
         (only (%object
                ~find-slot)
               lzs-mop)
         apply-funs
         quasiquote
         (only (call)
               lzs-eval)
         (only (reverse
                append
                not
                nconc
                mapcar
                mapc
                remove
                vector
                format
                list?
                list*
                string
                string-downcase
                prog1)
               common-lisp))
 syntax (level-1
         el2lzs-main
         (only (case)
               common-lisp))
 expose (el2lzs
         el2lzs-main
         lzs-modules)
 export (transsyn-progn
         complete-function
         trans-params
         trans-lambda
         lambda-specializers
         lambda-parameters
         fun-spec-name fun-spec-type
         compute-arg-descr)
 export (add-function
         add-class
         add-const
         add-var
         lzslit))

;;;-----------------------------------------------------------------------------
;;; TS (transsyn): expands and simplifies syntax
;;;-----------------------------------------------------------------------------
(defun transsyn-progn (forms)
  (transsyn-expanded-progn (transsyn-progn-forms forms)))

(defun transsyn-expanded-progn (forms)
  (cond ((null? forms) ())       ;; progn with 0 forms
        ((null? (rest forms)) (first forms))     ; progn with 1 form
        (t (cons ^progn forms))));; progn with more forms

(defun transsyn-progn-forms (forms)
  (cond ((null? forms) ())
        ((and (cons? (first forms))
              (eq (first (first forms)) ^progn))
         (transsyn-progn-forms (nconc (rest (first forms))
                                      (rest forms))))
        ;; expand the first form; if the result is an progn then put its forms
        ;; onto the current progn-level
        (t (let ((form (transsyn (first forms))))
             (if (and (cons? form) (eq (first form) ^progn))
                 (append (cdr form) (transsyn-progn-forms (rest forms)))
               (cons form
                     (transsyn-progn-forms (rest forms))))))))

(defun transsyn-let-forms (let-symbol vars body)
  (if (null? vars)
      (transsyn-progn body)
    (list let-symbol
          (transsyn-vars vars)
          (transsyn-progn body))))

(defun transsyn-vars (vars)
  (cond ((null? vars) ())
        ((symbol? (first vars))
         (setf (cdr vars) (transsyn-vars (rest vars)))
         vars)
        (t (setf (second (first vars)) (transsyn (second (first vars))))
           (setf (cdr vars) (transsyn-vars (rest vars)))
           vars)))

(defun transsyn-funs (funs)
  (if (null? funs) ()
    (let* ((fun (first funs))
           (ID (first fun))
           (PARAMS (second fun))
           (BODY (cddr fun)))
      (cons (list ID PARAMS (transsyn-progn BODY))
            (transsyn-funs (rest funs))))))

(defmethod transsyn (object) object)    ; the default case: nothing to expand

(deftranssyn (quote CONST)
  (whole-form))

(deftranssyn (setq ID EXPR)
  (progn (setf (third (whole-form)) (transsyn EXPR))
         (whole-form)))

(deftranssyn (dynamic-setq ID EXPR)
  (progn (setf (third (whole-form)) (transsyn EXPR))
         (whole-form)))

(deftranssyn (if ANT CONS ALT)
  ;; it is possible to handle this by the default case (expand all arguments)
  ;; but a separate rules provides early detection of syntax violations
  (list ^if
        (transsyn ANT)
        (transsyn CONS)
        (transsyn ALT)))

;; extra syntax expansion for OR isn't necessary because it can be handled like
;; the standard case, which expands simply all arguments

(deftranssyn (lambda PARAMS . BODY)
  (list ^lambda PARAMS (transsyn-progn BODY)))

(deftranssyn (let VARS . BODY)
  (transsyn-let-forms ^let VARS BODY))

(deftranssyn (let* VARS . BODY)
  (transsyn-let-forms ^let* VARS BODY))

(deftranssyn (dynamic-let VARS . BODY)
  (transsyn-let-forms ^dynamic-let VARS BODY))

(deftranssyn (labels FUNS . BODY)
  (if (null? FUNS)
      (transsyn-progn BODY)
    `(,^labels ,(transsyn-funs FUNS) ,(transsyn-progn BODY))))

(deftranssyn (letfuns FUNS . BODY)
  (if (null? FUNS)
      (transsyn-progn BODY)
    `(,^letfuns ,(transsyn-funs FUNS) ,(transsyn-progn BODY))))

(deftranssyn (let/cc ID . BODY)
  (progn (setf (cdr (cdr (whole-form)))
               (list (transsyn-progn BODY)))
         (whole-form)))

(deftranssyn (dynamic ID) (whole-form))

(defun transsyn* (exprs)
  (if (null? exprs)
      ()
    (progn (setf (car exprs) (transsyn (car exprs)))
           (transsyn* (cdr exprs))
           exprs)))

(defun transsyn-listop (expr)
  (if (symbol? (first expr))
      (transsyn expr)
    (progn (setf (cdr expr) (transsyn* (cdr expr)))
           expr)))

(deftranssyn ((operator) . EXPRS)
  (cond ((and (symbol? operator)
              (find-in-mac-env operator))
         (transsyn (call (find-in-mac-env operator)
                         EXPRS)))
        ((atom? operator)
         ;; this is for identifiers and function objects in operator position
         (cons operator (transsyn* EXPRS)))
        (t (transsyn-listop (cons (transsyn operator)
                                  EXPRS)))))

(deftranssyn (progn . EXPRS)
  (transsyn-progn EXPRS))

(deftranssyn (defconstant ID VALUE)
  ;; after syntax transformation no special handling of the default to recognize
  ;; function definitions using defconstant are necessary
  (with-defining-form
   (setq VALUE (transsyn VALUE))
   (cond ((null? (cons? VALUE))
          (setf (third (whole-form)) VALUE)
          (whole-form))
         ((eq (car VALUE) ^lambda)
          `(,^defun ,@(cdr (car VALUE))))
         (t
          (setf (third (whole-form)) VALUE)
          (whole-form)))))

(deftranssyn (defglobal ID VALUE)
  (with-defining-form
   (setf (third (whole-form)) (transsyn VALUE))
   (whole-form)))

(deftranssyn (deflocal ID VALUE)
  (with-defining-form
   (setf (third (whole-form)) (transsyn VALUE))
   (whole-form)))

(deftranssyn (defun FUN-SPEC PARAMS . BODY)
  (with-defining-form
   (setf (cdr (cdr (cdr (whole-form))))
         (list (transsyn-progn BODY)))
   (whole-form)))

(deftranssyn (defmacro ID PARAMS . BODY)
  (with-defining-form
   `(,^progn
     (,^defun ,ID ,PARAMS ,(transsyn-progn BODY))
     (,^export-syntax ,ID))))

;; --- exports

(deftranssyn (export . IDS) (whole-form))       ; don't expand anything

(deftranssyn (export-syntax . IDS) (whole-form)); don't expand anything

(deftranssyn (expose . XSPECS) (whole-form))    ; don't expand anything

(deftranssyn (quasiquote EXPRS)
  (transsyn (unquote-constructor EXPRS)))       ; the expanded form may be a
;; macro call

;;;-----------------------------------------------------------------------------
;;; TM (transmod): definitions into LZS without body expansion
;;  collection of objects into environments
;;;-----------------------------------------------------------------------------
;; some auxillary functions to extend the lists of defined objects in a
;; lzs-module

(defun add-function (fun)
  (push fun (?fun-list (dynamic *current-module*)))
  (set-module fun)
  fun)

(defun add-class (class)
  (push class (?class-def-list (dynamic *current-module*)))
  (set-module class)
  class)

(defun add-const (const)
  (push const (?named-const-list (dynamic *current-module*)))
  (set-module const)
  const)

(defun add-var (var)
  (push var (?var-list (dynamic *current-module*)))
  (set-module var)
  var)

(defun set-module (obj)
  (setf (?module obj) (dynamic *current-module*)))

(defun compute-arg-descr (params)
  (if (?rest params)
      (* -1 (+ 1 (length (?var-list params))))
    (length (?var-list params))))

(defglobal *function-id* ())

(defun trans-lambda (BODY funobj params)
  (dynamic-let ((*function-id* (?identifier funobj)))
               (setf (?params funobj) params)
               (setf (?body funobj)
                     (in-lex-env
                      (env-plus (?rest params)
                                (append (?var-list params) lex-env))
                      (trans BODY)))
               (setf (?arg-num funobj) (compute-arg-descr params))
               funobj))

;;;-----------------------------------------------------------------------------
(defun trans-params (params req)
  (cond ((null? params)
         (make-instance <params>
           :var-list (reverse req)
           :rest ()))
        ((symbol? params)  ;; error if (neq rst ())
         (make-instance <params>
           :var-list (reverse req)
           :rest (make-instance <local-static>
                   :identifier params)))
        (t
         (trans-params (rest params)
                       (cons (make-instance <local-static>
                               :identifier (first params))
                             req)))))

(defmethod transmod ((id <symbol>))
  ())

(deftransmod ((operator) . args)
  ;; no top-level binding is defined
  ())

(deftransmod (defconstant id init)
  (add-const
   (make-instance <defined-named-const>
     :identifier id)))

(deftransmod (deflocal id init)
  (add-var
   (make-instance <global-static>
     :identifier id)))

(deftransmod (defun fun-spec parameters body)
  ;;the body was transformed to a single form by transsyn
  (cond ((symbol? fun-spec)
         ;; a (function) binding is defined
         (add-function
          (make-instance <global-fun>
            :identifier fun-spec)))
        ;; otherwise no binding is defined
        (t ())))

;; (deftransmod (defcondition name superclass . init-options) ...)

(deftransmod (defmacro ID PARAMETERS . BODY)
  ;; This rule is only activated for local macro definitions in the syntax
  ;; section. Macro definitions in the module body are mapped to
  ;; defun-forms during the syntax expansion.
  ;;
  ;; The body must be syntax-expanded here. Therefore, the caller of transmod
  ;; for local macros should set (dynamic mac-env) and (dynamic lex-env) right.
  ;; transmod can transform also the body of the local macro because only
  ;; references to imported bindings can appear.
  (with-defining-form
   (let ((lzs-fun (make-instance <global-fun> :identifier id)))
     (trans-lambda (transsyn-progn BODY)
                   lzs-fun
                   (trans-params PARAMETERS ()))
     lzs-fun)))

;;;-----------------------------------------------------------------------------
;;; TD (transdef): expands bodies of definitions
;;;-----------------------------------------------------------------------------
(defun constant-setq (obj init)
  (make-instance <setq-form> ;trans for setq to a constant
    ;;isn't possible !
    :location obj
    :form init))

(deftransdef (defconstant ID INIT)
  (with-defining-form
   (let ((const (find-in-lex-env ID))
         (form (trans INIT)))
     (setf (?type const) %object)
     (if (literal? form)
         (progn
           (setf (?value const) form)
           ())
       (list (constant-setq const form))))))

(defgeneric literal? (x))
(defmethod literal? (x) t)
(defmethod literal? ((x <sym>)) t)
(defmethod literal? ((x <structured-literal>)) t)
(defmethod literal? ((x <literal-instance>)) t)
(defmethod literal? ((x <class-def>)) t)
(defmethod literal? ((x <fun>)) t)
(defmethod literal? ((x <lzs-object>))
  ;;all other lzs-objects are not literals
  ())

(deftransdef (deflocal ID EXPR)
  (with-defining-form
   (list (trans (list ^setq ID EXPR)))))

;; (deftransdef (defglobal ID EXPR)
;;              (list (trans (list ^dynamic-setq ID EXPR))))

(deftransdef (defglobal ID EXPR)
  (with-defining-form
   (list
    (make-instance <app>
      :function %initialize-global-dynamic
      :arg-list (list (make-defined-sym ID)
                      (trans EXPR))))))

(defun fun-spec-name (fun-spec)
  (if (symbol? fun-spec)
      fun-spec
    (car (cdr fun-spec))))

(defun fun-spec-type (fun-spec)
  (if (symbol? fun-spec)
      ()
    (car fun-spec)))

(deftransdef (defun fun-spec parameters body)
  ;;the body was transformed to a single form by transsyn
  (with-defining-form
   (let* ((name (fun-spec-name fun-spec))
          (type (fun-spec-type fun-spec))
          (fun (find-in-lex-env name)))
     (cond ((eq type ^setter)
            (setq fun
                  (setf (?setter fun)
                        (add-function
                         (make-instance <global-fun>
                           :identifier fun-spec)))))
           )
     (trans-lambda ;sets params and body in function object
      body
      fun
      (trans-params parameters ()))
     ())))

(deftransdef (export . IDS)
  (progn
    (setf (?exports (dynamic *current-module*))
          (append (remove () ; () appears if no lexical binding was found
                          (mapcar (lambda (id) (find-lexical-binding id))
                                  IDS))
                  (?exports (dynamic *current-module*))))
    ()))

(deftransdef (export-syntax . IDS)
  ;; ATTENTION: is only right for defined objects, it goes wrong for
  ;; syntax-imported things
  (progn (setf (?syntax-exports (dynamic *current-module*))
               (append (remove () ; () appears if no lexical binding was found
                               (mapcar (lambda (id) (find-lexical-binding id))
                                       IDS))
                       (?syntax-exports (dynamic *current-module*))))
         ()))

(deftransdef (expose . XSPECS)
  (progn (el2lzs-main::trans-expose XSPECS)
         ()))

;; the following are the default cases for transdef

(deftransdef ((operator) . args)
  (list (trans (cons operator args))))

(defmethod transdef (non-list)          ; identifiers and literals on top level
  ());; are ignored

;;;-----------------------------------------------------------------------------
;;; TE (trans): transformation of expressions
;;; constants,literals and variables
;;;-----------------------------------------------------------------------------
(defmethod trans ((empty-list <null>))
  ())

(defmethod trans ((LIT <string>))
  (make-instance <structured-literal> :value LIT))

(defmethod trans ((LIT <vector>))
  (make-instance <structured-literal> :value (lzslit LIT)))

(defmethod trans ((LIT <object>)) LIT)

(deftrans (quote LIT)
  (cond ((symbol? LIT)
         (make-defined-sym LIT))
        ((cons? LIT)
         (make-instance <structured-literal> :value (lzslit LIT)))
        (t (trans LIT))))

(defgeneric lzslit (LIT))

(defmethod lzslit ((LIT <collection>))
  (map #'lzslit LIT))

(defmethod lzslit ((LIT <object>))
  LIT)

(defmethod lzslit ((LIT <null>))
  ;; this method is needed because () is also a symbol in CL
  LIT)

(defmethod lzslit ((LIT <symbol>))
  (make-defined-sym LIT))

(defun lzslit-list (list)
  (cond ((atom? list)
         (lzslit list))
        ((eq (car list) ^%literal)
         (trans list))
        (t
         (cons (lzslit-list (car list))
               (lzslit-list (cdr list))))))

(defmethod lzslit ((LIT <pair>))
  (lzslit-list LIT))

;;;-----------------------------------------------------------------------------
;;; variables and assignments
;;;-----------------------------------------------------------------------------
(defmethod trans ((ID <symbol>))
  (let ((VAR (find-in-lex-env ID)))
    (cond ((instance-of? VAR <static>)
           (make-instance <var-ref> :var VAR))
          (t (constant-value VAR)))))

(deftrans (setq ID EXPR)
  (let ((location (trans ID)))
    (if (var-ref? location)
        (make-instance <setq-form>
          :location location
          :form (trans EXPR))
      (progn
        (error-invalid-assignment ID)
        ()))))

(defgeneric constant-value (object))
(defmethod constant-value (object) object)
(defmethod constant-value ((object <defined-named-const>))
  (if (eq (?value object) ^unknown)
      object
    (constant-value (?value object))))

;;;-----------------------------------------------------------------------------
;;; control flow
;;;-----------------------------------------------------------------------------
(deftrans (if ANT CONS ALT)
  (make-instance <if-form>
    :pred (trans ANT) :then (trans CONS) :else (trans ALT)))

(deftrans (or . FORMS)
  (cond ((null? FORMS) ())
        ((null? (cdr FORMS)) (trans (car FORMS)))
        (t (make-or-expansion (trans (car FORMS))
                              (trans (cons ^or (cdr FORMS)))))))

(defgeneric make-or-expansion (first-form else-part))
(defmethod make-or-expansion (first-form else-part)
  (let ((var (make-instance <local-static>)))
    (make-instance <let*-form>
      :var-list (list var)
      :init-list (list first-form)
      :body (make-instance <if-form>
              :pred (make-instance <var-ref> :var var)
              :then (make-instance <var-ref> :var var)
              :else else-part))))
(defmethod make-or-expansion ((first-form <var-ref>) else-part)
  (make-instance <if-form>
    :pred first-form
    :then first-form
    :else else-part))

(defun trans-exprs (exprs)
  (if (null? exprs) ()
    (cons (trans (first exprs)) (trans-exprs (rest exprs)))))

(deftrans (progn . EXPRS)
  (make-instance <progn-form> :form-list (trans-exprs EXPRS)))

;;;-----------------------------------------------------------------------------
;;; variable bindings: lambda expressions
;;;-----------------------------------------------------------------------------
;; --- completion of partially created function objects

(defun complete-function (lzs-fun arguments body environment)
  (dynamic-let ((lex-env environment))
               (trans-lambda body lzs-fun (trans-params arguments ()))))

(defun make-local-fun-identifier (local-id)
  (let ((function-id
         (if (list? (dynamic *function-id*))
             (dynamic *function-id*)
           (list (dynamic *function-id*)))))
    (cond ((and (null? local-id)
                (null? function-id))
           (list ^unnamed))
          (local-id
           `(,^local ,@function-id ,local-id))
          (t
           `(,^local ,@function-id)))))

(deftrans (lambda PARAMETERS BODY)
  (trans-lambda BODY
                (add-function
                 (make-instance <local-fun>
                   :identifier (make-local-fun-identifier ())
                   :module (dynamic *current-module*)))
                (trans-params PARAMETERS ())))

;;;-----------------------------------------------------------------------------
;;;  variable bindings: let and let*
;;;-----------------------------------------------------------------------------
(defun cenv (context local) context)
(defun xenv (context local) (append local context))

(defun vars (pair) (car pair))
(defun inits (pair) (cdr pair))

(defun trans-let (BODY v)
  (make-instance <let*-form>
    :var-list (vars v)
    :init-list (inits v)
    :body (in-lex-env (append (vars v) lex-env)
                      (trans BODY))))

(defun trans-vars (varlist vars inits ecomb)
  (cond ((null? varlist) (cons (reverse vars) (reverse inits)))
        ((symbol? (first varlist))
         (trans-vars (rest varlist)
                     (cons (make-instance <local-static>
                             :identifier (first varlist))
                           vars)
                     (cons () inits)
                     ecomb))
        (t (trans-vars (rest varlist)
                       (cons (make-instance <local-static>
                               :identifier (first (first varlist)))
                             vars)
                       (cons (in-lex-env (funcall ecomb lex-env vars)
                                         (trans (second (first varlist))))
                             inits)
                       ecomb))))

(deftrans (let VARS BODY)
  (trans-let BODY (trans-vars VARS () () #'cenv)))

(deftrans (let* VARS BODY)
  (trans-let BODY (trans-vars VARS () () #'xenv)))

;;;-----------------------------------------------------------------------------
;;;  variable bindings: labels
;;;-----------------------------------------------------------------------------
;; The following is deactivated because labels-form is not handled right by the
;; following compiler passes. Therefore labels is mapped to a let*-form.

;; (deftrans (labels FUNS BODY)
;;           (trans-labels BODY (trans-funs FUNS)))

;; (defun trans-labels (BODY funs)
;;   (prog1
;;    (make-instance <labels-form>
;;                   :fun-list funs
;;                   :body (in-lex-env (append funs lex-env)
;;                                     (trans BODY)))
;;    (mapc #'rename-local-fun funs)))

;; (defun rename-local-fun (fun)
;;   ;; to give the local functions better names
;;   (setf (?identifier fun)
;;         (make-local-fun-identifier (?identifier fun))))

;; (defun trans-funs (FUNS)
;;   (let ((labels-env (make-labels-env FUNS)))
;;     (in-lex-env (append labels-env lex-env)
;;                 (mapcar #'trans-label-fun FUNS labels-env))
;;     labels-env))

;; (defun make-labels-env (FUNS)
;;   (if (null? FUNS) ()
;;     (let ((ID (first (first FUNS))))
;;       (cons (add-function
;;              (make-instance <local-fun>
;;                             :identifier ID))
;;             (make-labels-env (cdr FUNS))))))

;; (defun trans-label-fun (FUN fun-obj)
;;   (let ((ID (first FUN))
;;         (PARAMETERS (second FUN))
;;         (BODY (third FUN)))
;;     (setf (?params fun-obj) (trans-params PARAMETERS () ))
;;     (setf (?body fun-obj) (in-lex-env (env-plus (?rest (?params fun-obj))
;;                                         (append (?var-list (?params fun-obj))
;;                                                         lex-env))
;;                                       (trans BODY)))
;;     fun))

;;; the following replaces the original mapping of labels, see the comment
;;; above

(defun make-app (fun . args)
  (make-instance <app>
    :function fun
    :arg-list args))

(defun make-var-ref (var)
  (make-instance <var-ref> :var var))

(defun make-local-static (id type)
  (make-instance <local-static>
    :identifier id
    :type type))

(defun make-setq (var val)
  (make-instance <setq-form>
    :location (make-var-ref var)
    :form val))

(defun make-progn forms
  (make-instance <progn-form>
    :form-list (el2lzs-main::splice-lists forms)))

(defun trans-labels (BODY FUNCTIONS)
  (let* ((vars (mapcar (lambda (fun)
                         (make-local-static (car fun) <function>-class))
                       FUNCTIONS))
         (funs (in-lex-env (append vars lex-env)
                           (mapcar #'trans-label-fun FUNCTIONS)))
         (unsigned-0 (make-instance <literal-instance>
                       :class %unsigned-word-integer
                       :value-list '(0))))
    (make-instance <let*-form>
      :var-list vars
      :init-list (mapcar
                  (lambda (fun)
                    (make-app %cast <function>-class unsigned-0))
                  funs)
      :type-list (mapcar (lambda (fun) <function>-class)
                         funs)
      :body
      (apply #'make-progn
             (append
              (mapcar (lambda (var fun)
                        (make-setq var fun))
                      vars funs)
              (list (in-lex-env (append vars lex-env)
                                (trans BODY))))))))

(defun trans-label-fun (FUN)
  (let* ((ID (first FUN))
         (PARAMETERS (second FUN))
         (BODY (third FUN))
         (fun-obj (add-function
                   (make-instance <local-fun>
                     :identifier (make-local-fun-identifier ID)))))
    (setf (?params fun-obj) (trans-params PARAMETERS () ))
    (setf (?body fun-obj) (in-lex-env (env-plus
                                       (?rest (?params fun-obj))
                                       (append (?var-list (?params fun-obj))
                                               lex-env))
                                      (trans BODY)))
    fun-obj))

(deftrans (labels FUNS BODY)
  (trans-labels BODY FUNS))

(deftrans (letfuns FUNS BODY)
  (trans-labels BODY FUNS))

;;;-----------------------------------------------------------------------------
;;;  variable bindings: let/cc
;;;-----------------------------------------------------------------------------

;;  --- let/cc -> <let/cc-form> ---
;; (defun trans-let/cc (BODY cont)
;;   (make-instance <let/cc-form>
;;                  :cont cont
;;                  :body (in-lex-env (cons cont lex-env)
;;                                    (trans BODY))))

(defun trans-let/cc (BODY cont)
  (let* ((v-buffer (make-instance <local-static>
                     :identifier ^jmp-buffer
                     :type %jmpbuf))
         (v-buffer-closure-var (make-instance <local-static>
                                 :identifier ^jmp-buffer-closure-var))
         (v-current-unwind (make-instance <local-static>
                             :identifier ^current-unwind))
         (v-current-dynamic (make-instance <local-static>
                              :identifier ^current-dynamic))
         (cont-closure
          (add-function
           (complete-function
            (make-instance <local-fun>
              :identifier (make-local-fun-identifier (?identifier cont)))
            ^(result)
            ^(progn
               (%setf letcc-result result)
               (%setf stop-unwind-before (%cast %pjmpbuf current-unwind))
               (%setf continue-at ;(%pointer-of
                      (%cast %pjmpbuf
                             jmp-buffer-closure-var))
;;;)
               (unwind-continue unwind))
            (list* v-current-unwind v-buffer-closure-var
                   apply-environment)))))
    (setf (?range-and-domain cont-closure)
          (vector %void %object %object)) ; !!! cons/object is a hack
                                          ; (constructed, local
    ;; !!! closure-function)
    (make-instance <let*-form>
      :var-list (list v-current-unwind
                      v-current-dynamic
                      ;;cont
                      v-buffer
                      )
      :init-list (list
                  (make-instance <app>
                    :function %cast
                    :arg-list (list %object
                                    (make-instance <var-ref> :var %unwind)))
                  (make-instance <var-ref> :var %top-dynamic)
                  ;;cont-closure
                  ^unknown
                  ;; (make-instance <var-ref> :var v-buffer) ; trick
                  )
      :type-list (list %object ;%pjmpbuf
                       %dynamic
                       ;;%object
                       %jmpbuf
                       )
      :body
      ;;  (make-instance <let*-form> :var-list (list v-buffer)
      ;;       :type-list (list %jmpbuf) :body
      (make-instance <if-form>
        :pred (in-lex-env (cons v-buffer apply-environment)
                          (trans ^(%eq (%setjmp jmp-buffer)
                                       (%literal %signed-word-integer 0))))
        :then (make-instance <let*-form>
                :var-list (list v-buffer-closure-var cont)
                :init-list (list (in-lex-env
                                  (cons v-buffer apply-environment)
                                  (trans ^(%cast <object>
                                                 (%pointer-of jmp-buffer))))
                                 cont-closure)
                :type-list (list %object %object)
                :body (in-lex-env (list* cont v-buffer-closure-var lex-env)
                                  (trans BODY)))
        ;;(in-lex-env (cons cont lex-env)
        ;;                  (trans BODY))
        :else (in-lex-env (list* ;v-buffer
                           v-current-dynamic apply-environment)
                          (trans ^(progn
                                    (%setf top-dynamic current-dynamic)
                                    letcc-result)))))))

(deftrans (let/cc ID BODY)
  (trans-let/cc BODY (make-instance <cont> :identifier ID)))

;;;-----------------------------------------------------------------------------
;;; function calls and application
;;;-----------------------------------------------------------------------------
(defun trans-appl (expr var)
  (make-instance <let*-form>
    :var-list (list var)
    :init-list (list (trans (first expr)))
    :body (make-instance <app>
            :function (make-instance <var-ref> :var var)
            :arg-list (trans-exprs (rest expr)))))

(defun trans-function (fun)
  ;; avoids () in functional position for non-existing function-objects during
  ;; testing
  (or (trans fun)
      (make-undefined-function fun)))

(deftrans ((operator) . ARGS)
  (cond ((atom? operator)
         ;; this is for identifiers and function objects in operator position
         (make-instance <app>
           :function (trans-function operator)
           :arg-list (trans-exprs ARGS)))
        ((or (eq (car operator) ^dynamic)
             (eq (car operator) ^lambda))
         (make-instance <app>
           :function (trans operator)
           :arg-list (trans-exprs ARGS)))
        (t (trans-appl (cons operator ARGS)
                       (make-instance <local-static> :identifier ())))))

;;(deftrans (apply FUN . ARGS)
;;  (make-instance <apply-app> :function (trans FUN) :arg-list (trans ARGS)))

;;;-----------------------------------------------------------------------------
;;; unwind-protect
;;;-----------------------------------------------------------------------------
(defun make-uwp (protected-forms cleanup-forms)
  (let* ((v-buffer (make-local-static ^jmp-buffer %jmpbuf))
         (v-current-unwind (make-local-static ^current-unwind %pjmpbuf))
         (v-current-dynamic (make-local-static ^current-dynamic %object))
         (v-current-letcc-result
          (make-local-static ^current-letcc-result %object))
         (v-result (make-local-static ^result %object))
         )
    (make-instance <let*-form>
      :var-list (list v-buffer
                      v-current-unwind
                      v-current-dynamic)
      :type-list (list %object
                       %dynamic
                       %jmpbuf)
      :init-list (list ^unknown
                       (make-var-ref %unwind)
                       (make-var-ref %top-dynamic))
      :body
      (make-instance <if-form>
        :pred
        (in-lex-env (cons v-buffer apply-environment)
                    (trans ^(%eq (%setjmp jmp-buffer)
                                 (%literal %signed-word-integer 0))))
        :then
        (make-instance <let*-form>
          :var-list (list v-result)
          :type-list (list %object)
          :init-list (list (make-progn
                            (make-setq %unwind
                                       (make-app %pointer-of-variable
                                                 (make-var-ref v-buffer)))
                            protected-forms))
          :body
          (make-progn (make-setq %unwind (make-var-ref v-current-unwind))
                      cleanup-forms
                      (make-var-ref v-result)))
        :else
        (make-instance <let*-form>
          :var-list (list v-current-letcc-result)
          :type-list (list %object)
          :init-list (list (make-var-ref %letcc-result))
          :body
          (make-progn
           (make-setq %top-dynamic (make-var-ref v-current-dynamic))
           cleanup-forms
           (make-setq %letcc-result (make-var-ref v-current-letcc-result))
           (make-app %unwind-continue
                     (make-var-ref v-current-unwind))))))))

(deftrans (unwind-protect protected-forms . cleanup-forms)
  (make-uwp (trans protected-forms)
            (mapcar #'trans cleanup-forms)))

;;;-----------------------------------------------------------------------------
;;; method combination
;;;-----------------------------------------------------------------------------
;;call-next-method
;;next-method?

;;;-----------------------------------------------------------------------------
;;; condition handling
;;;-----------------------------------------------------------------------------
;;with-handler

;;;-----------------------------------------------------------------------------
;;; dynamic bindings
;;;-----------------------------------------------------------------------------
;; (defglobal ...) -> <dynamic>

;; (defun trans-dvar (ID)
;;   (let ((VAR (find-in-dynamic-env ID)))
;;     (unless VAR
;;             (setq VAR (make-instance <dynamic>
;;                                      :sym (make-defined-sym ID)
;;                                      :identifier ID))
;;             (add-to-dynamic-env VAR))
;;     VAR))

;; (deftrans (dynamic ID)
;;           (make-instance <var-ref> :var (trans-dvar ID)))

;; (deftrans (dynamic-setq ID FORM)
;;           (make-instance <setq-form>
;;                          :location (make-instance <var-ref>
;;                          :var (trans-dvar ID))
;;                          :form (trans FORM)))

;; (deftrans (dynamic-let VARS BODY)
;;           (trans-dlet BODY (trans-dvars VARS () () )))

;; (defun trans-dlet (BODY params)
;;   (make-instance <let*-form>
;;                  :var-list (vars params)
;;                  :init-list (inits params)
;;                  :body (trans BODY)))

;; (defun trans-dvars (VARLIST vars inits)
;;   (if (null? VARLIST)
;;       (cons (reverse vars) (reverse inits))
;;     (let ((ID (first VARLIST))
;;           (EXPR ())
;;           (MORE (rest VARLIST)))
;;       (when (cons? ID)
;;             (setq EXPR (second ID))
;;             (setq ID (first ID)))
;;       (trans-dvars MORE
;;                    (cons (trans-dvar ID) vars)
;;                    (cons (if (null? EXPR) ()
;;                            (trans EXPR))
;;                          inits)))))


(deftrans (dynamic ID)
  (make-instance <app>
    :function %get-dynamic
    :arg-list (list (make-defined-sym ID))))

(deftrans (dynamic-setq ID FORM)
  (make-instance <app>
    :function %set-dynamic
    :arg-list (list (make-defined-sym ID)
                    (trans FORM))))

(defun trans-dlet (BODY vars)
  (let ((v-current-dynamic (make-instance <local-static>
                             :identifier ^current-dynamic))
        (v-temp (make-instance <local-static>
                  :identifier ^tmp-dlet)))
    (make-instance <let*-form>
      :var-list (list v-current-dynamic v-temp)
      :init-list (list (make-instance <var-ref> :var %top-dynamic)
                       ())
      :type-list (list %dynamic %object)
      :body
      (make-instance <progn-form>
        :form-list
        (append vars
                (list (make-instance <setq-form>
                        :location (make-instance <var-ref> :var v-temp)
                        :form (trans BODY))
                      (make-instance <setq-form>
                        :location (make-instance <var-ref> :var %top-dynamic)
                        :form (make-instance <var-ref> :var v-current-dynamic)
                        )
                      (make-instance <var-ref> :var v-temp)))))))

(defun trans-dvars (VARLIST)
  (if (null? VARLIST)
      ()
    (let ((ID (first VARLIST))
          (EXPR ())
          (MORE (rest VARLIST)))
      (when (cons? ID)
            (setq EXPR (second ID))
            (setq ID (first ID)))
      (cons
       (make-instance <setq-form>
         :location (make-instance <var-ref> :var %top-dynamic)
         :form (make-instance <app>
                 :function %make-dynamic
                 :arg-list (list (make-defined-sym ID)
                                 (trans EXPR)
                                 (make-instance <var-ref> :var %top-dynamic))))
       (trans-dvars MORE)))))

(deftrans (dynamic-let VARS BODY)
  (trans-dlet BODY (trans-dvars VARS)))

;;;-----------------------------------------------------------------------------
;;; TAIL: %define-variable, %define-constant
;;;-----------------------------------------------------------------------------
(deftranssyn (%define-variable ID TYPE . INIT)
  (with-defining-form
   (when INIT (setf (cdr (cddr (whole-form)))
                    (list (transsyn (car INIT)))))
   (whole-form)))

(deftransmod (%define-variable ID TYPE . INIT)
  (add-var
   (make-instance <global-static>
     :identifier id)))

(deftransdef (%define-variable ID TYPE . INIT)
  (with-defining-form
   (let ((var (find-in-lex-env ID)))
     (setf (?type var) (trans TYPE))
     (setf (?initial-value var)
           (if INIT (trans (car INIT))
             ^unknown))
     ())))

(deftranssyn (%define-constant ID VALUE)
  (with-defining-form
   (setf (third (whole-form)) (transsyn (third (whole-form))))
   (whole-form)))

(deftransmod (%define-constant ID VALUE)
  (add-const
   (make-instance <defined-named-const>
     :identifier id)))

(deftransdef (%define-constant ID VALUE)
  (with-defining-form
   (let ((init-value (trans VALUE))
         (const (find-in-lex-env ID)))
     (setf (?value const)
           init-value) ; this must be a literal, which means that if value is
     ;; a constant then its initial value must be
     ;; already computed and known at compile time
     (when (literal-instance? init-value)
           (setf (?type const)
                 (?class init-value)))
     ())))

;;;-----------------------------------------------------------------------------
;;; TAIL: %declare-external-variable/constant
;;;-----------------------------------------------------------------------------
;; the following function depends on the used compiler and should be placed in a
;; machine-dependent module
(defun make-external-name (name language)
  name)
;;  (if (eq language ^C)
;;    (format () "_~A" name)
;;    name)

(deftranssyn (%declare-external-variable NAME TYPE . OPTIONS)
  (with-defining-form
   (check-options () ^(external-name language initial-value) ()
                  OPTIONS)
   (whole-form)))

(deftranssyn (%declare-external-constant NAME TYPE . OPTIONS)
  (with-defining-form
   (check-options () ^(external-name language value) ()
                  OPTIONS)
   (whole-form)))

(deftransmod (%declare-external-variable NAME TYPE . OPTIONS)
  (add-var
   (make-instance <imported-static>
     :identifier NAME)))

(deftransmod (%declare-external-constant NAME TYPE . OPTIONS)
  (add-const
   (make-instance <imported-named-const>
     :identifier NAME)))

(deftransdef (%declare-external-variable NAME TYPE . OPTIONS)
  (with-defining-form
   (let ((var (find-in-lex-env NAME))
         (external-name (get-option ^external-name OPTIONS ()))
         (language (get-option ^language OPTIONS ()))
         (initial-value (get-option ^initial-value OPTIONS ^unknown)))
     (setf (?initial-value var) initial-value)
     (setf (?type var) (trans TYPE))
     (setf (?code-identifier var)
           (make-external-name (or external-name NAME) language))
     ())))

(deftransdef (%declare-external-constant NAME TYPE . OPTIONS)
  (with-defining-form
   (let ((const (find-in-lex-env NAME))
         (external-name (get-option ^external-name OPTIONS ()))
         (language (get-option ^language OPTIONS ()))
         (value (get-option ^value OPTIONS ^unknown)))
     (setf (?value const)
           (if (eq value ^unknown) value (trans value)))
     (setf (?type const) (trans TYPE))
     (setf (?code-identifier const)
           (make-external-name (or external-name NAME) language))
     ())))

;;;-----------------------------------------------------------------------------
;;; TAIL: %declare-external-function
;;;-----------------------------------------------------------------------------
(defun lambda-specializers (lambda-list)
  ;; extracts a list of classes from a specialized lambda-list
  ;; in case of a rest parameter the list is extended
  ;; by an additional class: %list
  (cond ((null? lambda-list) ())
        ((symbol? lambda-list)          ; rest parameter
         (list %list))
        ((symbol? (car lambda-list))    ; unspecialized parameter
         (cons %object
               (lambda-specializers (cdr lambda-list))))
        (t;;; specialized parameter
         (cons (trans (cadr (car lambda-list)))
               (lambda-specializers (cdr lambda-list))))))

(defun lambda-parameters (lambda-list)
  ;; extracts the parameter-names from specialized lambda-list
  ;; returns a true list or if a rest parameter occurs a dotted list of symbols
  (cond ((null? lambda-list) ())
        ((symbol? lambda-list)          ; rest parameter
         lambda-list)
        ((symbol? (car lambda-list))    ; unspecialized parameter
         (cons (car lambda-list)
               (lambda-parameters (cdr lambda-list))))
        (t;;; specialized parameter
         (cons (car (car lambda-list))
               (lambda-parameters (cdr lambda-list))))))

(deftranssyn (%declare-external-function fun-spec params . options)
  (with-defining-form
   (check-options () ^(external-name language) () options)
   (whole-form)))

(deftranssyn (declare-c-function name result-type args)
  (let ((name (if (cons? name) (car name) name))
        (external-name (if (cons? name) (cadr name) name)))
    `(,^%declare-external-function (,name ,result-type) ,args
                                   ,^language ^c
                                   ,^external-name
                                   ,(string-downcase (string external-name)))))

(deftransmod (%declare-external-function fun-spec params . options)
  (let ((ID (first fun-spec)))
    (add-function (make-instance <imported-fun> :identifier ID))))

(deftransdef (%declare-external-function fun-spec PARAMETERS . OPTIONS)
  (with-defining-form
   (let* ((ID (first fun-spec))
          (TYPE (second fun-spec))
          (fun (find-in-lex-env ID))
          (external-name (get-option ^external-name OPTIONS ()))
          (language (get-option ^language OPTIONS ^lisp)))
     (setf (?params fun)
           (trans-params (lambda-parameters PARAMETERS) ()))
     (setf (?range-and-domain fun)
           (apply #'vector (trans TYPE)
                  (lambda-specializers PARAMETERS)))
     (setf (?code-identifier fun)
           (make-external-name (or external-name ID) language))
     (setf (?language fun) language)
     ())))

;;;-----------------------------------------------------------------------------
;;; definterface
;;;-----------------------------------------------------------------------------
(defun definterface-arg-names (arg-specs)
  (lambda-parameters arg-specs))

(defun definterface-arg-types (arg-specs)
  (lambda-specializers arg-specs))

(defun definterface-arg-conversions (arg-specs)
  ;; returns syntax only, i.e. expressions in list representation without any
  ;; transformation
  (if (null? arg-specs) ()
    (cons (list (third (car arg-specs))  ;the converter function
                (first (car arg-specs))) ;the argument name
          (definterface-arg-conversions (cdr arg-specs)))))

(deftranssyn (definterface-clc cfun lfun result args)
  (whole-form))

(deftranssyn (definterface-lcl lfun cfun result args)
  (whole-form))

(deftransmod (definterface-clc cfun lfun result args)
  (add-function (make-instance <global-fun> :identifier cfun)))

(deftransmod (definterface-lcl lfun cfun result args)
  (list
   (add-function (make-instance <global-fun> :identifier lfun))
   (add-function (make-instance <imported-fun> :identifier cfun))))

(deftransdef (definterface-clc cfun lfun result args)
  (with-defining-form
   (let ((cfun-obj (find-in-lex-env cfun))
         (rtype (first result))
         (rconv (second result))
         (external-name (string-downcase (string cfun))))
     (complete-function cfun-obj
                        (definterface-arg-names args)
                        `(,rconv
                          (,lfun ,@(definterface-arg-conversions args)))
                        (dynamic lex-env))
     (setf (?range-and-domain cfun-obj)
           (apply #'vector (trans rtype)
                  (definterface-arg-types args)))
     (setf (?code-identifier cfun-obj) external-name))
   ()))

(deftransdef (definterface-lcl lfun cfun result args)
  (with-defining-form
   (let ((lfun-obj (find-in-lex-env lfun))
         (cfun-obj (find-in-lex-env cfun))
         (rtype (first result))
         (rconv (second result))
         (external-name (string-downcase (string cfun))))
     (complete-function lfun-obj
                        (definterface-arg-names args)
                        `(,rconv
                          (,cfun ,@(definterface-arg-conversions args)))
                        (dynamic lex-env))
     (setf (?params cfun-obj)
           (trans-params (definterface-arg-names args) ()))
     (setf (?range-and-domain cfun-obj)
           (apply #'vector (trans rtype)
                  (definterface-arg-types args)))
     (setf (?code-identifier cfun-obj) external-name))
   ()))

;;;-----------------------------------------------------------------------------
;;; TAIL: %define-function
;;;-----------------------------------------------------------------------------

;;Syntax expansion
;;================

(deftranssyn (%define-function fun-spec parameters . body)
  (with-defining-form
   (setf (cdddr (whole-form)) (list (transsyn-progn body)))
   (whole-form)))

;;module top-level handling
;;=========================

(deftransmod (%define-function fun-spec PARAMETERS BODY)
  (let ((ID (first fun-spec)))
    (add-function (make-instance <global-fun> :identifier ID))))

;;transformation of defining forms
;;================================

(deftransdef (%define-function fun-spec PARAMETERS BODY)
  (with-defining-form
   (let* ((ID (first fun-spec))
          (TYPE (second fun-spec))
          (fun (find-in-lex-env ID)))
     (trans-lambda ;sets params and body in fun
      BODY
      fun
      (trans-params (lambda-parameters PARAMETERS) ()))
     (setf (?range-and-domain fun)
           (apply #'vector (trans TYPE)
                  (lambda-specializers PARAMETERS)))
     ())))

;;;-----------------------------------------------------------------------------
;;;  TAIL: %let and %let*
;;;-----------------------------------------------------------------------------

;;Syntax expansion
;;================

(defun transsyn-%let-forms (let-symbol vars body)
  (if (null? vars)
      (transsyn-progn body)
    (list let-symbol
          (transsyn-%vars vars)
          (transsyn-progn body))))

(defun transsyn-%vars (vars)
  (cond ((null? vars) ())
        (t (setf (third (first vars)) (transsyn (third (first vars))))
           (setf (cdr vars) (transsyn-%vars (rest vars)))
           vars)))

(deftranssyn (%let VARS . BODY)
  (transsyn-%let-forms ^%let VARS BODY))

(deftranssyn (%let* VARS . BODY)
  (transsyn-%let-forms ^%let* VARS BODY))


;;expression transformation
;;=========================

(defun trans-%let (BODY v)
  (make-instance <let*-form>
    :var-list (%vars v)
    :init-list (%inits v)
    :type-list (%types v)
    :body (in-lex-env (append (%vars v) lex-env)
                      (trans BODY))))

(defun trans-%vars (varlist vars inits types ecomb)
  (cond ((null? varlist) (list (reverse vars) (reverse inits) (reverse types)))
        (t (trans-%vars (rest varlist)
                        (cons (make-instance <local-static>
                                :identifier (first (first varlist)))
                              vars)
                        (cons (in-lex-env (funcall ecomb lex-env vars)
                                          (trans (third (first varlist))))
                              inits)
                        (cons (in-lex-env (trans (second (first varlist))))
                              types)
                        ecomb))))

(defun %vars (vars-inits-types) (first vars-inits-types))
(defun %inits (vars-inits-types) (second vars-inits-types))
(defun %types (vars-inits-types) (third vars-inits-types))

(deftrans (%let VARS BODY)
  (trans-%let BODY (trans-%vars VARS () () () #'cenv)))

(deftrans (%let* VARS BODY)
  (trans-%let BODY (trans-%vars VARS () () () #'xenv)))

;;;-----------------------------------------------------------------------------
;;; TAIL: %select
;;;-----------------------------------------------------------------------------

(deftranssyn (%select structure class slot-id)
  (progn
    (setf (second (whole-form)) (transsyn structure))
    (whole-form)))

(deftrans (%select structure class slot-id)
  ;; class should be a binding or a class-object
  (make-instance <get-slot-value>
    :instance (trans structure)
    :slot (or (~find-slot (trans class) slot-id)
              (error-invalid-slot-name class slot-id))
    ))

;;;-----------------------------------------------------------------------------
;;; TAIL: %setf and %pointer-of
;;;-----------------------------------------------------------------------------

(deftrans (%pointer-of entity)
  (trans-%pointer-of (trans entity)))

(defgeneric trans-%pointer-of (transformed-entity))

(defmethod trans-%pointer-of ((transformed-entity <var-ref>))
  (make-instance <app>
    :function %pointer-of-variable
    :arg-list (list transformed-entity)))

(defmethod trans-%pointer-of ((transformed-entity <fun>))
  (make-instance <app>
    :function %pointer-of-function
    :arg-list (list transformed-entity)))

(defmethod trans-%pointer-of ((transformed-entity <app>))
  (let ((operator (?function transformed-entity)))
    (setf (?function transformed-entity)
          (cond ((eq operator %extract) %pointer-of-extract)
                ((eq operator %select) %pointer-of-select)))
    transformed-entity))

;; a syntax-transformation-rule for %setf isn't necessary because the
;; destination may be also a macro call expanding to one of the allowed
;; destination specifications

(deftrans (%setf destination source)
  (or
   (trans-%setf (trans destination) (trans source))
   (progn (error-invalid-assignment destination)
          ())))

(defgeneric trans-%setf (transformed-destination source))

(defmethod trans-%setf ((transformed-destination <var-ref>) source)
  (make-instance <setq-form>
    :location transformed-destination
    :form source))

(defmethod trans-%setf ((transformed-destination <get-slot-value>) source)
  (make-instance <set-slot-value>
    :instance (?instance transformed-destination)
    :slot (?slot transformed-destination)
    :value source
    ))

(defmethod trans-%setf ((transformed-destination <app>) source)
  (let ((reader-fun (?function transformed-destination)))
    (setf (?function transformed-destination)
          (cond ((eq reader-fun %ref)     %setf-ref)
                ((eq reader-fun %extract) %setf-extract)
                ;; ((eq reader-fun %view)    %setf-view)
                ((eq reader-fun %cast)    %setf-cast)
                (t ()))) ; all other cases are an error
    (setf (?arg-list transformed-destination)
          (nconc (?arg-list transformed-destination)
                 (list source)))
    (and (?function transformed-destination) ; has cond above detected an error?
         transformed-destination)))

(defmethod trans-%setf (transformed-destination source)
  ;; all other cases for destinations are an error
  ())

;;;-----------------------------------------------------------------------------
;;; %declare-external-symbol
;;;-----------------------------------------------------------------------------
(deftranssyn (%declare-external-symbol id xid) (whole-form))

(deftransdef (%declare-external-symbol id xid)
  (let ((sym (make-instance <imported-sym>
               :identifier id
               :code-identifier xid)))
    (add-to-symbol-env sym)
    ()))

;; (deftranssyn (%class-name cl)
;;   (progn
;;     (setf (second (whole-form)) (transsyn cl))
;;     (whole-form)))

;; (deftrans (%class-name cl)
;;   (make-instance <defined-sym>
;;     :name (string (symbol-name (?class (?var (trans cl)))))
;;     :package "eulisp"
;;     ;:identifier id
;;     ))

;;;-----------------------------------------------------------------------------
#module-end
;;;-----------------------------------------------------------------------------
