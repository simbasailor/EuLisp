;;; Copyright 1997 A. Kind & University of Bath
;;; Copyright 2010 Henry G. Weller
;;;-----------------------------------------------------------------------------
;;  This file is part of
;;; ---                         EuLisp System 'Youtoo'
;;;-----------------------------------------------------------------------------
;;
;;  Youtoo is free software: you can redistribute it and/or modify it under the
;;  terms of the GNU General Public License version 2 as published by the Free
;;  Software Foundation.
;;
;;  Youtoo is distributed in the hope that it will be useful, but WITHOUT ANY
;;  WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
;;  FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more
;;  details.
;;
;;  You should have received a copy of the GNU General Public License along with
;;  this program.  If not, see <http://www.gnu.org/licenses/>.
;;
;;;-----------------------------------------------------------------------------
;;; Title: expanding import/export dirctives into syntax nodes
;;;  Library: comp (EuLisp to Bytecode Compiler -- EuLysses))
;;;  Authors: Andreas Kind, Keith Playford
;;;  Maintainer: Henry G. Weller
;;;-----------------------------------------------------------------------------

(defmodule ex-direct
  (syntax (_syntax-1
           _i-aux0)
   import (i-all
           p-env
           sx-obj
           sx-node
           ex-import
           ex-syntax
           ex-expose)
   export (expand-directive
           expand-export))

;;;-----------------------------------------------------------------------------
;;; Module directive expander
;;;-----------------------------------------------------------------------------
(defconstant get-directive-expander (make-access-table))

(defun install-directive-expander (key fun)
  (let ((x (get-directive-expander key)))
    (and x
         (ct-warning () "redefinition of expander ~a"  key))
    ((setter get-directive-expander) key fun)))

(defun directive-expander (x e)
  (let ((expander
         (cond
           ((null? (cons? x)) (lambda (x e) x))
           ((symbol? (car x))
            (let ((directive-expander (get-directive-expander (car x))))
              (if directive-expander
                  directive-expander
                (error <condition>
                        (fmt "no directive expander ~a available" x)))))
           (t
            (error <condition>
                    (fmt "no directive expander ~a available" x))))))
    (expander x e)))

(defun expand-directive (x)
  (with-ct-handler "bad directive syntax" x
                   (directive-expander x directive-expander)))

;;;-----------------------------------------------------------------------------
;;; Install IMPORT expander
;;;-----------------------------------------------------------------------------
(install-directive-expander 'import
                            (lambda (x e)
                              (map1-list expand-import (cadr x))
                              (e (cdr (cdr x)) e)))

;;;-----------------------------------------------------------------------------
;;; Install EXPORT expander
;;;-----------------------------------------------------------------------------
(install-directive-expander 'export
                            (lambda (x e)
                              (map1-list (lambda (name)
                                           ((setter (module-external-env? (dynamic *actual-module*)))
                                            name name))
                                         (cadr x))
                              (e (cdr (cdr x)) e)))

;;;-----------------------------------------------------------------------------
;;; Some bindings (which are not exposed) have to be set in the external
;;; environment. Only the keys (names) do exist yet.
;;;-----------------------------------------------------------------------------
(defun expand-export (module)
  (access-table-do
   (lambda (name binding)
     ;; Attention -- name is ptr to C string!
     (if (binding? binding)
         ()  ; exposed binding -- nothing to do
       (let ((new-binding (get-lexical-binding binding)))
         (if new-binding
             (let ((obj (binding-obj? new-binding)))
               (set-external-binding new-binding)
               (if (fun? obj)
                   (fun-has-unknown-appls! obj t)
                 ()))
           (ct-serious-warning () "exported lexical binding ~a not available"
                               binding)))))
   (module-external-env? module)))

;;;-----------------------------------------------------------------------------
;;; Install EXPOSE expander
;;;-----------------------------------------------------------------------------
(install-directive-expander 'expose
                            (lambda (x e)
                              (map1-list expand-expose (cadr x))
                              (e (cdr (cdr x)) e)))

;;;-----------------------------------------------------------------------------
;;; Install SYNTAX expander
;;;-----------------------------------------------------------------------------
(install-directive-expander 'syntax
                            (lambda (x e)
                              (map1-list expand-syntax-import (cadr x))
                              (e (cdr (cdr x)) e)))

;;;-----------------------------------------------------------------------------
)  ;; End of module ex-direct
;;;-----------------------------------------------------------------------------
