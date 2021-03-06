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
;;; Title: stream basics
;;;  Library: level-1
;;;  Authors: Julian Padget, Andreas Kind
;;;  Maintainer: Henry G. Weller
;;;-----------------------------------------------------------------------------

(defmodule stream2
  (syntax (_syntax-1)
   import (telos
           lock
           condition
           convert
           dynamic
           stream1
           string)
   export (<stream>
           stream-lock
           stream-read-action
           stream-write-action
           stream-source
           stream-sink
           stream-mode
           stream?
           from-stream
           to-stream
           <buffered-stream>
           buffered-stream?
           <string-stream>
           string-stream?
           string-stream-string-list
           <file-stream>
           file-stream?
           <stream-control-block>
           control-block-buffer
           control-block-buffer-size
           control-block-buffer-pos
           control-block-buffer-cnt
           control-block-stream-pos
           <file-control-block>
           control-block-file-name
           control-block-mode
           control-block-descriptor
           stream-control-block?
           file-control-block?
           stdin
           stdout
           stderr
           generic-print
           generic-write
           generic-read
           flush-buffer
           fill-buffer
           reconnect
           disconnect
           generic-connect
           open-file-streams
           *open-file-streams*
           *open-file-streams*-lock
           eos-default-value
           <stream-condition>
           <end-of-stream>
           end-of-stream))

;;;-----------------------------------------------------------------------------
;;; Control block classes
;;;-----------------------------------------------------------------------------
(defclass <stream-control-block> ()
  ((buffer accessor: control-block-buffer
           keyword: buffer:)
   (buffer-size accessor: control-block-buffer-size
                keyword: size:
                default: 1024)
   (buffer-pos accessor: control-block-buffer-pos
               default: 0)
   (buffer-cnt accessor: control-block-buffer-cnt
               default: 0)
   (stream-pos accessor: control-block-stream-pos
               default: 0))
  predicate: stream-control-block?)

(defclass <file-control-block> <stream-control-block>
  ((file-name accessor: control-block-file-name
              keyword: file-name:
              default: "")
   (mode accessor: control-block-mode
         keyword: mode:
         default: 'r)
   (descriptor accessor: control-block-descriptor
               keyword: descriptor:))
  predicate: file-control-block?)

(defmethod initialize ((fcb <file-control-block>) inits)
  (call-next-method)
  ((setter control-block-buffer) fcb
   (make <string> size: (control-block-buffer-size fcb)))
  fcb)

;;;-----------------------------------------------------------------------------
;;; Stream classes:  (make <file-stream> file-name: "foo" mode: 'w)
;;  "r" open for reading
;;  "w" open for writing
;;  "a" open for writing at end of file
;;  "r+" open for update (reading and writing)
;;  "w+" open for update (reading and writing)
;;  "a+" open for update (reading and writing) at end of file
;;;-----------------------------------------------------------------------------
(defclass <stream> ()
  ((sink keyword: sink:
         accessor: stream-sink)
   (source keyword: source:
           accessor: stream-source)
   (read-action keyword: read-action:
                accessor: stream-read-action
                default: default-read-action)
   (write-action keyword: write-action:
                 accessor: stream-write-action
                 default: default-write-action)
   (lock default: (make <lock>)
         reader: stream-lock)
   (mode reader: stream-mode keyword:
         mode: default: 'r))
  predicate: stream?
  constructor: (from-stream read-action:)
  constructor: (to-stream write-action:))

(defclass <buffered-stream> <stream>
  ()
  predicate: buffered-stream?)

(defclass <string-stream> <buffered-stream>
  ((string-list accessor: string-stream-string-list))
  keywords: (string:)
  predicate: string-stream?)

(defclass <file-stream> <buffered-stream>
  ()
  keywords: (file-name:)
  predicate: file-stream?)

;;;-----------------------------------------------------------------------------
;;; Stream initialization
;;;-----------------------------------------------------------------------------
(defmethod initialize ((s <stream>) inits)
  (call-next-method)
  (if (buffered-stream? s) ()
    (progn
      (if (stream-source s) ()
        ((setter stream-source) s (make <stream-control-block>)))
      (if (stream-sink s) ()
        ((setter stream-sink) s (make <stream-control-block>)))))
  s)

(deflocal stdin ())
(setq stdin
      (make <file-stream>
            source: (make <file-control-block>
                          file-name: "stdin"
                          mode: 'r
                          descriptor: 0)
            mode: 'r))

(deflocal stdout ())
(setq stdout
      (make <file-stream>
            sink: (make <file-control-block>
                        file-name: "stdout"
                        mode: 'w
                        descriptor: 1)
            mode: 'w))

(deflocal stderr ())
(setq stderr
      (make <file-stream>
            sink: (make <file-control-block>
                        file-name: "stderr"
                        mode: 'w
                        descriptor: 2)
            mode: 'w))

(defmethod initialize ((fs <file-stream>) inits)
  ;; This method must be after the definition of stdin, stdout and stderr
  (call-next-method)
  (if (eq (class-of fs) <file-stream>)
      (let* ((mode (stream-mode fs))
             (file-name (init-list-ref inits file-name: ""))
             (flag (init-list-ref mode-table mode O_RDONLY))
             (fd (eul_open file-name flag #o666)))
        (if (fpi-binary= fd -1)
            (error <stream-condition> (strerror) value: fs)
          (let ((fcb (make <file-control-block>
                           file-name: file-name
                           mode: mode
                           descriptor: fd)))
            (cond
              ((eq mode 'r)
               ((setter stream-source) fs fcb))
              ((eq mode 'w)
               ((setter stream-sink) fs fcb))
              ((eq mode 'a)
               ((setter stream-sink) fs fcb))
              (t
               ((setter stream-source) fs fcb)
               (let ((fcb2 (make <file-control-block>
                                 file-name: file-name
                                 mode: mode
                                 descriptor: fd)))
                 ((setter stream-sink) fs fcb2))))
            (with-lock *open-file-streams*-lock
                       (setq *open-file-streams*
                             (cons fs *open-file-streams*))))))
    ;; don't use this method for e.g. socket connections
    ())
  fs)

(defmethod initialize ((ss <string-stream>) inits)
  (call-next-method)
  (let ((str (init-list-ref inits string:)))
    ((setter stream-source) ss
     (make <stream-control-block> buffer: (or str "")))
    (let* ((scb (make <stream-control-block>))
           (n (control-block-buffer-size scb)))
      ((setter stream-sink) ss scb)
      ((setter control-block-buffer) scb (make <string> size: n))))
  ss)

;;;-----------------------------------------------------------------------------
;;; Generic prin/write/read
;;;-----------------------------------------------------------------------------
(defgeneric generic-print (x s))
(defgeneric generic-write (x s))
(defgeneric generic-read (stream eos-error? eos-value))
(defgeneric end-of-stream (s))
(defgeneric fill-buffer (s))
(defgeneric flush-buffer (s))
(defgeneric generic-connect (source sink options))
(defgeneric reconnect (stream1 stream2))
(defgeneric disconnect (stream))

;;;-----------------------------------------------------------------------------
;;; Defaults
;;;-----------------------------------------------------------------------------
(defun eos-default-value () '(*end-of-stream*))

(defun default-read-action (s eos-error? eos-value)
  (let ((source (stream-source s)))
    (if (and (null? (control-block-buffer source))
             (fpi-binary= (fill-buffer s) 0))
        (if eos-error? (end-of-stream s) eos-value)
      (let* ((buf (control-block-buffer source))
             (r (car buf)))
        ((setter control-block-buffer) source (cdr buf))
        r))))
(defun default-write-action (x s)
  (let ((sink (stream-sink s)))
    ((setter control-block-buffer) sink
     (cons x (control-block-buffer sink)))
    x))

;;;-----------------------------------------------------------------------------
;;; Error handling
;;;-----------------------------------------------------------------------------
(defcondition <stream-condition> ()
  ((value keyword: value:
          accessor: value)))

(defcondition <end-of-stream> <stream-condition> ())

;;;-----------------------------------------------------------------------------
;;; Open file streams
;;;-----------------------------------------------------------------------------
(deflocal *open-file-streams* ())
(defconstant *open-file-streams*-lock (make <lock>))
(defun open-file-streams () *open-file-streams*)

;;;-----------------------------------------------------------------------------
)  ;; End of module stream2
;;;-----------------------------------------------------------------------------
