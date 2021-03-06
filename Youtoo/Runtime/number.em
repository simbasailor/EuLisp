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
;;; Title: numbers
;;;  Library: level-1
;;;  Authors: Andreas Kind, Julian Padget
;;;  Maintainer: Henry G. Weller
;;;-----------------------------------------------------------------------------

(defmodule number
  (syntax (_telos0)
   import (telos
           callback
           compare
           copy)
   export (<number>
           number?
           +
           -
           *
           /
           %
           gcd
           lcm
           mod
           abs
           zero?
           negate
           signum
           positive?
           negative?
           binary+
           binary-
           binary*
           binary/
           binary%
           binary-mod
           binary-gcd
           binary-lcm))

;;;-----------------------------------------------------------------------------
;;; Class <number>
;;;-----------------------------------------------------------------------------
(defclass <number> <object> ()
  abstract?: t
  predicate: number?)

;;;-----------------------------------------------------------------------------
;;; Rest argument arithmetic
;;;-----------------------------------------------------------------------------
(defun + args
  (labels
   ((loop (l res)
          (if (null? l) res
            (loop (cdr l) (binary+ (car l) res)))))
   (loop args 0)))

(defun - (arg . args)
  (if (null? args)
      (binary- 0 arg)
    (labels
     ((loop (l res)
            (if (null? l) res
              (loop (cdr l) (binary- res (car l))))))
     (loop args arg))))

(defun * args
  (labels
   ((loop (l res)
          (if (null? l) res
            (loop (cdr l) (binary* (car l) res)))))
   (loop args 1)))

(defun / (arg . args)
  (labels
   ((loop (l res)
          (if (null? l) res
            (loop (cdr l) (binary/ res (car l))))))
   (loop args arg)))

(defun % (arg . args)
  (labels
   ((loop (l res)
          (if (null? l) res
            (loop (cdr l) (binary% res (car l))))))
   (loop args arg)))

(defun mod (arg . args)
  (labels
   ((loop (l res)
          (if (null? l) res
            (loop (cdr l) (binary-mod res (car l))))))
   (loop args arg)))

;;;-----------------------------------------------------------------------------
;;; Gcd, lcm
;;;-----------------------------------------------------------------------------
(defun gcd (arg . args)
  (labels
   ((loop (l res)
          (if (null? l) res
            (loop (cdr l) (binary-gcd res (car l))))))
   (loop args arg)))

(defun lcm (arg . args)
  (labels
   ((loop (l res)
          (if (null? l) res
            (loop (cdr l) (binary-lcm res (car l))))))
   (loop args arg)))

;;;-----------------------------------------------------------------------------
;;; Around zero ...
;;;-----------------------------------------------------------------------------
;; fpi-arithmetic traps to generic call if necessary
(defun abs (x) (if (fpi-binary< x 0) (fpi-binary- 0 x) x))
(declare-inline abs)

(defun signum (x) (or (fpi-binary= x 0) (fpi-binary/ x (abs x))))
(declare-inline signum)

(defun positive? (x) (fpi-binary< 0 x))
(declare-inline positive?)

(defun negative? (x) (fpi-binary< x 0))
(declare-inline negative?)

(defgeneric zero? ((x <object>)))

(defgeneric negate ((x <object>)))
(defmethod negate ((x <number>)) (fpi-binary- 0 x))

;;;-----------------------------------------------------------------------------
;;; Generic arithmetic (also for collections ...)

;;;-----------------------------------------------------------------------------
(defgeneric binary+ ((x <object>) (y <object>)))
(defgeneric binary- ((x <object>) (y <object>)))
(defgeneric binary* ((x <object>) (y <object>)))
(defgeneric binary/ ((x <object>) (y <object>)))
(defgeneric binary% ((x <object>) (y <object>)))
(defgeneric binary-mod ((x <number>) (y <number>)))
(defgeneric binary-gcd ((x <number>) (y <number>)))
(defgeneric binary-lcm ((x <number>) (y <number>)))

;;;-----------------------------------------------------------------------------
;;; Install callback traps
;;;-----------------------------------------------------------------------------
(install-callback (fpi-binary+ first-arithmetic-cb 0) binary+)
(install-callback (fpi-binary+ first-arithmetic-cb 1) binary-)
(install-callback (fpi-binary+ first-arithmetic-cb 2) binary*)
(install-callback (fpi-binary+ first-arithmetic-cb 3) binary/)
(install-callback (fpi-binary+ first-arithmetic-cb 4) binary%)

;;;-----------------------------------------------------------------------------
;;; Copying
;;;-----------------------------------------------------------------------------
(defmethod shallow-copy ((x <number>)) x)
(defmethod deep-copy ((x <number>)) x)

;;;-----------------------------------------------------------------------------
)  ;; End of module number
;;;-----------------------------------------------------------------------------
