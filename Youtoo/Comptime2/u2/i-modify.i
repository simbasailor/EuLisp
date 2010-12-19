;;; EuLisp system 'youtoo'
;;;   Interface file for module i-modify

(definterface i-modify
  (import (i-all)
   syntax (_syntax-1 _i-aux0)
   full-import (i-error i-notify i-param i-level-1 boot1 boot symbol stream3 random handler read table table1 vector convert1 format list socket stream2 lock stream1 stream float character compare collect fpi number integer copy convert string callback let-cc dynamic thread event condition bit mop-alloc mop-access mop-prim mop-key mop-class mop-init mop-inspect mop-gf mop-meth mop-defcl telos level-1 aux-table i-all)
   export (
    ((name . external-file-exist?) (pos . 5) (origin i-modify . external-file-exist?))
    ((name . absolute-file-name) (pos . 3) (origin i-modify . absolute-file-name))
    ((name . module-modified?) (pos . 4) (origin i-modify . module-modified?))
    ((name . library-newer?) (pos . 2) (origin i-modify . library-newer?))
    ((name . file-exist?) (pos . 7) (origin i-modify . file-exist?))
    ((name . C-module-modified?) (pos . 6) (origin i-modify . C-module-modified?))
    ((name . file-newer?) (pos . 8) (origin i-modify . file-newer?))
   )
   local-literals (
    (library-newer? . 35)
    (absolute-file-name . 34)
    (module-modified? . 33)
    (external-file-exist? . 32)
    (C-module-modified? . 31)
    (file-exist? . 30)
    (file-newer? . 29)
    ("no such file ~a" . 27)
    (".o" . 24)
    (".o" . 23)
    (".c" . 22)
    (".c" . 19)
    (".em" . 18)
    (".h" . 17)
    (".em" . 16)
    (".i" . 15)
    (".em" . 14)
    ("file ~a does not exist" . 12)
    ("" . 11)
   )
   literals (
   )
))
