;;; Copyright 1995 Russell Bradford
;;; Copyright 2010 Henry G. Weller
;;;-----------------------------------------------------------------------------
;;  This file is part of
;;; ---                           EuLisp System 'EuXLisp'
;;;-----------------------------------------------------------------------------
;;
;;  EuXLisp is free software: you can redistribute it and/or modify it under the
;;  terms of the GNU General Public License version 2 as published by the Free
;;  Software Foundation.
;;
;;  EuXLisp is distributed in the hope that it will be useful, but WITHOUT ANY
;;  WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
;;  FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more
;;  details.
;;
;;  You should have received a copy of the GNU General Public License along with
;;  this program.  If not, see <http://www.gnu.org/licenses/>.
;;
;;;-----------------------------------------------------------------------------
;;; Title: A tiny paralation lisp, basic classes and syntax operators.
;;;  Authors: Russell Bradford
;;;  Maintainer: Henry G. Weller
;;;  Description:
;;    Probably originally written by Simon Merrall.
;;    EuSchemed by RJB, Sept 95.
;;;-----------------------------------------------------------------------------

(defmodule tpl-base
  (import (level-0)
   export (<paralation-internal>
           p-size
           index-internal
           shape-internal
           attr
           make-paralation-internal
           <field>
           value
           paralation
           make-field
           copy-field
           <mapping>
           from-key
           to-key
           make-mapping
           elwise))

;;;-----------------------------------------------------------------------------
;;; Classes
;;;-----------------------------------------------------------------------------
(defclass <paralation-internal> ()
  ((size
    keyword: size:
    reader: p-size)
   (index
    keyword: index:
    accessor: index-internal)
   (shape
    keyword: shape:
    accessor: shape-internal)
   (attributes
    keyword: attributes:
    accessor: attr))
  constructor: make-paralation-internal)

(defmethod generic-print ((p <paralation-internal>) str)
  (sformat str "#<paralation-internal size ~a shape ~s attributes ~s>"
           (p-size p) (shape-internal p) (attr p))
  p)

(defmethod generic-write ((p <paralation-internal>) str)
  (generic-print p str))

(defclass <field> ()
  ((value
    keyword: value:
    accessor: value)
   (paralation
    keyword: paralation:
    accessor: paralation))
  constructor: make-field)

(defmethod generic-print ((o <field>) str)
  (sformat str "#F~a" (convert (value o) <cons>))
  o)

(defmethod generic-write ((o <field>) str)
  (sformat str "#F~s" (convert (value o) <cons>))
  o)

(defun copy-field (field)
  (make-field
   paralation: (paralation field)
   value: (shallow-copy (value field))))

(defclass <mapping> ()
  ((from-key
    keyword: from-key:
    accessor: from-key)
   (to-key
    keyword: to-key:
    accessor: to-key))
  constructor: make-mapping)

(defmethod generic-print ((m <mapping>) str)
  (sformat str "#<mapping from ~a to ~a>"
           (from-key m) (to-key m)))

(defmethod generic-write ((m <mapping>) str)
  (sformat str "#<mapping ~s -> ~s>"
           (from-key m) (to-key m)))

;;;-----------------------------------------------------------------------------
;;; Macros
;;;-----------------------------------------------------------------------------
(defun do-side-effects (nl i)
  (if (null? nl) nil
    (cons `((setter vector-ref)
            (value (vector-ref *field-vec* ,i))
            *elwise-index*
            ,(car nl))
          (do-side-effects (cdr nl) (+ i 1)))))

(defsyntax elwise (fields . body)
  `(let ((*field-vec* (vector ,@fields)))
     (make-field
      paralation: (paralation ,(car fields))
      value: (apply map
                    (list
                     (lambda (*elwise-index* ,@fields)
                       (let ((*elt-result* (progn ,@body)))
                         ,@(do-side-effects fields 0)
                         *elt-result*))
                     (value (index-internal (paralation ,(car fields))))
                     ,@(map (lambda (name) `(value ,name)) fields))))))

;;;-----------------------------------------------------------------------------
)  ;; End of module tpl-base
;;;-----------------------------------------------------------------------------
