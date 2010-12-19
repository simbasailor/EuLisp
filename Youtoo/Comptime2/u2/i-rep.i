;;; EuLisp system 'youtoo'
;;;   Interface file for module i-rep

(definterface i-rep
  (import (i-all i-args sx-obj sx-node i-compile cg-interf cg-dld ex-expr ex-import ex-syntax p-env cg-exec read)
   syntax (_syntax-1)
   full-import (i-error i-notify i-param i-level-1 boot1 boot symbol stream3 random handler read table table1 vector convert1 format list socket stream2 lock stream1 stream float character compare collect fpi number integer copy convert string callback let-cc dynamic thread event condition bit mop-alloc mop-access mop-prim mop-key mop-class mop-init mop-inspect mop-gf mop-meth mop-defcl telos level-1 aux-table i-all i-args sx-obj2 sx-obj1 sx-obj p-env i-ffi sx-node cg-exec cg-exec-word-length cg-link cg-asm cg-bycode cg-bycode1 cg-bycode2 op-peep op-peep-r cg-gen cg-state cg-stack an-side p-parse ex-expr cg-dld sx-write ex-direct ex-expose ex-syntax ex-import cg-interf ex-module ex-body p-read i-modify i-compile)
   export (
    ((name . show-help) (pos . 11) (origin i-rep . show-help))
    ((name . dynamic-binding-set1) (pos . 12) (origin cg-dld . dynamic-binding-set1) (class . ff) (arity . 3) (ff (3 0 8) 6 ("eul_dyn_binding_set" . "ff_stub_eul_dyn_binding_set5833")))
    ((name . expand-syntax) (pos . 24) (origin ex-expr . expand-syntax))
    ((name . show-module-bindings) (pos . 21) (origin i-rep . show-module-bindings))
    ((name . prompt-string) (pos . 13) (origin i-rep . prompt-string))
    ((name . module-loaded?) (pos . 6) (origin cg-dld . module-loaded?))
    ((name . ?) (pos . 17) (origin i-rep . ?))
    ((name . macroexpand) (pos . 11) (origin ex-expr . macroexpand))
    ((name . dynamic-load-module) (pos . 3) (origin cg-dld . dynamic-load-module))
    ((name . rep) (pos . 8) (origin i-rep . rep))
    ((name . eval/cm) (pos . 3) (origin i-rep . eval/cm))
    ((name . dynamic-binding-ref1) (pos . 11) (origin cg-dld . dynamic-binding-ref1) (class . ff) (arity . 2) (ff (3 0) 6 ("eul_dyn_binding_ref" . "ff_stub_eul_dyn_binding_ref5832")))
    ((name . as-C-module-name) (pos . 14) (origin cg-dld . as-C-module-name) (class . ff) (arity . 1) (ff (8) 3 ("eul_module_name_as_C_module_name_string" . "ff_stub_eul_module_name_as_C_module_name_string5835")))
    ((name . macroexpand-1) (pos . 6) (origin ex-expr . macroexpand-1))
    ((name . set-eval-module) (pos . 4) (origin i-rep . set-eval-module))
    ((name . expand-syntax-1) (pos . 23) (origin ex-expr . expand-syntax-1))
    ((name . as-dynamic-binding) (pos . 4) (origin cg-dld . as-dynamic-binding))
    ((name . show-class-hierarchy) (pos . 9) (origin i-rep . show-class-hierarchy))
    ((name . dynamic-load-module1) (pos . 13) (origin cg-dld . dynamic-load-module1) (class . ff) (arity . 2) (ff (3 3) 0 ("eul_dyn_load_module" . "ff_stub_eul_dyn_load_module5834")))
    ((name . dynamic-binding-ref) (pos . 7) (origin cg-dld . dynamic-binding-ref))
    ((name . eval) (pos . 10) (origin i-rep . eval))
    ((name . debug-eval/cm) (pos . 20) (origin i-rep . debug-eval/cm))
    ((name . dynamic-binding-set) (pos . 9) (origin cg-dld . dynamic-binding-set))
   )
   local-literals (
    (top-level . 156)
    (debug-rep . 155)
    (set-eval-module . 154)
    (show-imported-modules . 153)
    (check-module-envs . 152)
    (rep . 151)
    (show-class-hierarchy . 150)
    (eval . 149)
    (show-help . 148)
    (initialize-interpreter . 147)
    (prompt-string . 146)
    (load-file-exprs . 145)
    (debug-eval/cm . 144)
    (show-module-bindings . 143)
    (rep-aux . 142)
    ("-> ~s
" . 139)
    ("" . 138)
    ("~a> " . 137)
    (y . 133)
    ("Continue? (y/n) " . 132)
    (continue: . 129)
    (reset: . 128)
    (*clean-ups* . 126)
    ("No such file or directory ~a in ~a" . 125)
    (progn . 122)
    (read-action: . 119)
    (source: . 118)
    (r . 117)
    (mode: . 116)
    (file-name: . 115)
    (default-error-handler . 114)
    (cerror . 113)
    ("EuLisp System Youtoo - Version ~a
" . 112)
    (message: . 108)
    (dummy . 106)
    (execute . 105)
    ("exit:                      exit interpreter" . 102)
    ("[Ctrl-z]                   suspend interpreter" . 101)
    ("[Ctrl-c]                   interrupt computation" . 100)
    ("[Ctrl-d]                   exit interpreter or resume from previous error" . 99)
    ("resume:                    resume from previous error" . 98)
    ("reset:                     resume from all errors" . 97)
    ("continue:                  continue computation" . 96)
    ("values:                    show stack values" . 95)
    ("backtrace:                 show backtrace" . 94)
    ("untrace: <functon-name>    stop tracing function invocation" . 93)
    ("trace: <function-name>     trace function invocation" . 92)
    ("silent:                    run silent" . 91)
    ("verbose:                   run verbose" . 90)
    ("lexical-bindings:          show lexical environment" . 89)
    ("?                          previous value" . 88)
    ("load: <file-name>          evaluate file expressions" . 87)
    ("" . 84)
    ("~a~a<~a>
" . 82)
    (" " . 81)
    ("A" . 80)
    ("  " . 79)
    (help: . 72)
    ("~a" . 71)
    (-: . 70)
    (redefine: . 69)
    (hierarchy: . 68)
    (silent: . 67)
    (verbose: . 66)
    (import: . 65)
    (syntax-import: . 64)
    (lexical-import: . 63)
    (syntax-bindings: . 62)
    (lexical-bindings: . 61)
    (defined-syntax-bindings: . 60)
    (defined-lexical-bindings: . 59)
    (values: . 58)
    (backtrace: . 57)
    (untrace . 56)
    (untrace: . 55)
    (trace . 54)
    (trace: . 53)
    (exit: . 52)
    ("~a" . 51)
    (load: . 50)
    (user . 49)
    (:: . 48)
    (: . 47)
    (dynamic-binding-ref1 . 46)
    (dynamic-binding-ref . 45)
    (@ . 44)
    (eval/cm . 43)
    (quote . 42)
    (? . 41)
    (call/ep-lambda . 38)
    (anonymous . 37)
    ("-> ~s
" . 35)
    (resume: . 34)
    (*actual-module* . 33)
    ("[error~a] ~a> " . 32)
    (|(method binary<)| . 29)
    ("prompt> " . 28)
   )
   literals (
   )
))
