;;; EuLisp system 'youtoo'
;;;   Interface file for module i-rep

(definterface i-rep
  (import (i-all i-args sx-obj sx-node i-compile cg-interf cg-dld ex-expr ex-import ex-syntax p-env cg-exec read)
   syntax (_macros)
   full-import (i-error i-notify i-param i-level1 boot1 boot symbol stream3 random handler read table table1 vector convert1 format list socket stream2 lock stream1 stream float character compare collect fpi number integer copy convert string callback let-cc dynamic thread event condition bit mop-alloc mop-access mop-prim mop-key mop-class mop-init mop-inspect mop-gf mop-meth mop-defcl telos level1 aux-table i-all i-args sx-obj2 sx-obj1 sx-obj p-env i-ffi sx-node cg-exec cg-exec-word-length cg-link cg-asm cg-bycode cg-bycode1 cg-bycode2 op-peep op-peep-r cg-gen cg-state cg-stack an-side p-parse ex-expr cg-dld ex-direct ex-expose ex-syntax ex-import cg-interf ex-module ex-body sx-write p-read i-modify i-compile)
   export (
    ((name . show-help) (pos . 9) (origin i-rep . show-help))
    ((name . dynamic-binding-set1) (pos . 12) (origin cg-dld . dynamic-binding-set1) (class . ff) (arity . 3) (ff (3 0 8) 6 (eul_dyn_binding_set . ff_stub_eul_dyn_binding_set5738)))
    ((name . show-module-bindings) (pos . 18) (origin i-rep . show-module-bindings))
    ((name . prompt-string) (pos . 11) (origin i-rep . prompt-string))
    ((name . module-loaded?) (pos . 6) (origin cg-dld . module-loaded?))
    ((name . ?) (pos . 15) (origin i-rep . ?))
    ((name . dynamic-load-module) (pos . 3) (origin cg-dld . dynamic-load-module))
    ((name . debug-eval) (pos . 20) (origin i-rep . debug-eval))
    ((name . rep) (pos . 6) (origin i-rep . rep))
    ((name . dynamic-binding-ref1) (pos . 11) (origin cg-dld . dynamic-binding-ref1) (class . ff) (arity . 2) (ff (3 0) 6 (eul_dyn_binding_ref . ff_stub_eul_dyn_binding_ref5737)))
    ((name . as-C-module-name) (pos . 14) (origin cg-dld . as-C-module-name) (class . ff) (arity . 1) (ff (8) 3 (eul_module_name_as_C_module_name_string . ff_stub_eul_module_name_as_C_module_name_string5740)))
    ((name . as-dynamic-binding) (pos . 4) (origin cg-dld . as-dynamic-binding))
    ((name . dynamic-load-module1) (pos . 13) (origin cg-dld . dynamic-load-module1) (class . ff) (arity . 2) (ff (3 3) 0 (eul_dyn_load_module . ff_stub_eul_dyn_load_module5739)))
    ((name . show-class-hierarchy) (pos . 7) (origin i-rep . show-class-hierarchy))
    ((name . dynamic-binding-ref) (pos . 7) (origin cg-dld . dynamic-binding-ref))
    ((name . eval) (pos . 8) (origin i-rep . eval))
    ((name . dynamic-binding-set) (pos . 9) (origin cg-dld . dynamic-binding-set))
   )
   local-literals (
    (top-level . 150)
    (debug-rep . 149)
    (show-imported-modules . 148)
    (check-module-envs . 147)
    (rep . 146)
    (show-class-hierarchy . 145)
    (show-help . 144)
    (initialize-interpreter . 143)
    (prompt-string . 142)
    (load-file-exprs . 141)
    (show-module-bindings . 140)
    (rep-aux . 139)
    (debug-eval . 138)
    (continue: . 136)
    (reset: . 135)
    ("-> ~s
" . 132)
    ("" . 131)
    ("~a> " . 130)
    (y . 126)
    ("Continue? (y/n) " . 125)
    (*clean-ups* . 122)
    ("No such file or directory ~a in ~a" . 121)
    (progn . 118)
    (read-action: . 115)
    (source: . 114)
    (r . 113)
    (mode: . 112)
    (file-name: . 111)
    (default-error-handler . 110)
    (cerror . 109)
    ("EuLisp System Youtoo - Version ~a
" . 108)
    (message: . 104)
    (dummy . 102)
    (execute . 101)
    ("exit:                      exit interpreter" . 98)
    ("[Ctrl-z]                   suspend interpreter" . 97)
    ("[Ctrl-c]                   interrupt computation" . 96)
    ("[Ctrl-d]                   exit interpreter or resume from previous error" . 95)
    ("resume:                    resume from previous error" . 94)
    ("reset:                     resume from all errors" . 93)
    ("continue:                  continue computation" . 92)
    ("values:                    show stack values" . 91)
    ("backtrace:                 show backtrace" . 90)
    ("untrace: <functon-name>    stop tracing function invocation" . 89)
    ("trace: <function-name>     trace function invocation" . 88)
    ("silent:                    run silent" . 87)
    ("verbose:                   run verbose" . 86)
    ("lexical-bindings:          show lexical environment" . 85)
    ("?                          previous value" . 84)
    ("load: <file-name>          evaluate file expressions" . 83)
    (help: . 81)
    ("~a" . 80)
    (-: . 79)
    (redefine: . 78)
    (hierarchy: . 77)
    (silent: . 76)
    (verbose: . 75)
    (import: . 74)
    (syntax-import: . 73)
    (lexical-import: . 72)
    (syntax-bindings: . 71)
    (lexical-bindings: . 70)
    (defined-syntax-bindings: . 69)
    (defined-lexical-bindings: . 68)
    (values: . 67)
    (backtrace: . 66)
    (untrace . 65)
    (untrace: . 64)
    (trace . 63)
    (trace: . 62)
    (exit: . 61)
    ("~a" . 60)
    (load: . 59)
    (user . 58)
    (:: . 57)
    (: . 56)
    (dynamic-binding-ref1 . 55)
    (dynamic-binding-ref . 54)
    (@ . 53)
    (eval . 52)
    (quote . 51)
    (? . 50)
    ("" . 47)
    ("~a~a<~a>
" . 45)
    (" " . 44)
    ("A" . 43)
    ("  " . 42)
    (call/ep-lambda . 36)
    (anonymous . 35)
    ("-> ~s
" . 33)
    (resume: . 32)
    (*actual-module* . 31)
    ("[error~a] ~a> " . 30)
    (|(method binary<)| . 27)
    ("prompt> " . 26)
   )
   literals (
   )
))
