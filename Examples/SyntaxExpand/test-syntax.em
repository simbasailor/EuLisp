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
;;; Title: Simple syntax-expand example
;;;  Authors: Henry G. Weller
;;;  Maintainer: Henry G. Weller
;;;  Compilation
;;    youtoo test-expand-syntax -l level-0
;;;-----------------------------------------------------------------------------

(defmodule test-syntax
  (syntax (syntax-0)
   import (level-0))

(defsyntax test (x) `(print 1 2 3 ,x))

;;;-----------------------------------------------------------------------------
)  ;; End of module test-syntax
;;;-----------------------------------------------------------------------------
