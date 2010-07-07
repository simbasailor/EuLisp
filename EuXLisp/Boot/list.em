;;;-----------------------------------------------------------------------------
;;; ---                         EuLisp System 'EuXLisp'
;;;-----------------------------------------------------------------------------
;;;  File: list.em
;;;  Library: level0
;;;  Description: list processing
;;;-----------------------------------------------------------------------------

(defmodule list
    (syntax (macros)
     import (root setter))

  (defun (setter car) (l x)
    (set-car! l x))
  (defun (setter cdr) (l x)
    (set-cdr! l x))

  (defun (setter caar) (l x)
    ((setter car) (car l) x))
  (defun (setter cadr) (l x)
    ((setter car) (cdr l) x))
  (defun (setter cdar) (l x)
    ((setter cdr) (car l) x))
  (defun (setter cddr) (l x)
    ((setter cdr) (cdr l) x))
  (defun (setter caddr) (l x)
    ((setter car) (cddr l) x))
  (defun (setter cdadr) (l x)
    ((setter cdr) (cadr l) x))
  (defun (setter cddar) (l x)
    ((setter cdr) (cdar l) x))
  (defun (setter caadr) (l x)
    ((setter car) (cadr l) x))
  (defun (setter cdaar) (l x)
    ((setter cdr) (caar l) x))
  (defun (setter cadar) (l x)
    ((setter car) (cdar l) x))
  (defun (setter caaar) (l x)
    ((setter car) (caar l) x))
  (defun (setter cdddr) (l x)
    ((setter cdr) (cddr l) x))
  (defun (setter caaaar) (l x)
    ((setter car) (caaar l) x))
  (defun (setter caaadr) (l x)
    ((setter car) (caadr l) x))
  (defun (setter caadar) (l x)
    ((setter car) (cadar l) x))
  (defun (setter caaddr) (l x)
    ((setter car) (caddr l) x))
  (defun (setter cadaar) (l x)
    ((setter car) (cdaar l) x))
  (defun (setter cadadr) (l x)
    ((setter car) (cdadr l) x))
  (defun (setter caddar) (l x)
    ((setter car) (cddar l) x))
  (defun (setter cadddr) (l x)
    ((setter car) (cdddr l) x))
  (defun (setter cdaaar) (l x)
    ((setter cdr) (caaar l) x))
  (defun (setter cdaadr) (l x)
    ((setter cdr) (caadr l) x))
  (defun (setter cdadar) (l x)
    ((setter cdr) (cadar l) x))
  (defun (setter cdaddr) (l x)
    ((setter cdr) (caddr l) x))
  (defun (setter cddaar) (l x)
    ((setter cdr) (cdaar l) x))
  (defun (setter cddadr) (l x)
    ((setter cdr) (cdadr l) x))
  (defun (setter cdddar) (l x)
    ((setter cdr) (cddar l) x))
  (defun (setter cddddr) (l x)
    ((setter cdr) (cdddr l) x))

  (defun (setter list-ref) (l n x)
    (set-car! (list-tail l n) x))

;;;-----------------------------------------------------------------------------
  )  ;; end of module
;;;-----------------------------------------------------------------------------
