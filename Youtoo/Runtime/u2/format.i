;;; EuLisp system 'youtoo'
;;;   Interface file for module format

(definterface format
  (import (telos collect fpi list string character stream condition let-cc socket lock convert dynamic)
   syntax (_syntax-1)
   full-import ()
   export (
    ((name . sformat) (pos . 4) (origin format . sformat))
    ((name . cerror) (pos . 3) (origin format . cerror))
    ((name . fmt) (pos . 2) (origin format . fmt))
    ((name . format) (pos . 5) (origin format . format))
   )
   local-literals (
    (top-level . 43)
    (fmt . 42)
    (cerror . 41)
    (sformat . 40)
    (format . 39)
    ("%" . 35)
    ("bad format string ~s" . 34)
    ("bad format string ~s" . 33)
    ("bad format string ~s" . 32)
    ("%s" . 31)
    (call/ep-lambda . 29)
    ("" . 26)
    (|(method initialize)| . 23)
    (error . 22)
    (message: . 20)
    (anonymous . 18)
    (*clean-ups* . 17)
    (w . 16)
    (descriptor: . 15)
    (r . 14)
    (mode: . 13)
    (file-name: . 12)
    ("~a:~a" . 11)
    (value: . 10)
    ("tcp" . 9)
    (socket: . 8)
   )
   literals (
   )
))
