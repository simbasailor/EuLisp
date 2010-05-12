;;; EuLisp system 'youtoo'
;;;   Interface file for module cg-bycode

(definterface cg-bycode
  (import (i-level1)
   syntax (_macros _cg-bycode0 _sx-obj0)
   full-import (aux-table level1 telos mop-defcl mop-meth mop-gf mop-inspect mop-init mop-class mop-key mop-prim mop-access mop-alloc bit condition event thread dynamic let-cc callback string convert copy integer number fpi collect compare character float stream stream1 lock stream2 socket list format convert1 vector table1 table read handler random stream3 symbol boot boot1 i-level1)
   export (
    ((name . bytecode-args!) (pos . 2) (origin cg-bycode . bytecode-args!) (inline (G004261 (stack-ref 1) (static-fpi-ref 4) (stack-ref 2) (binding-ref ? <bytecode>) (set-primitive-relative-ref) (nobble 2))))
    ((name . bytecode-size!) (pos . 4) (origin cg-bycode . bytecode-size!) (inline (G004249 (stack-ref 1) (static-ref1) (stack-ref 2) (binding-ref ? <bytecode>) (set-primitive-relative-ref) (nobble 2))))
    ((name . bytecode-name!) (pos . 17) (origin cg-bycode . bytecode-name!) (inline (G004265 (stack-ref 1) (static-fpi-ref 5) (stack-ref 2) (binding-ref ? <bytecode>) (set-primitive-relative-ref) (nobble 2))))
    ((name . bytecode-code?) (pos . 14) (origin cg-bycode . bytecode-code?) (inline (G004255 (static-fpi-ref 3) (binding-ref ? <bytecode>) (primitive-relative-ref))))
    ((name . bytecode-modus!) (pos . 10) (origin cg-bycode . bytecode-modus!) (inline (G004245 (stack-ref 1) (static-ref0) (stack-ref 2) (binding-ref ? <bytecode>) (set-primitive-relative-ref) (nobble 2))))
    ((name . bytecode-args?) (pos . 8) (origin cg-bycode . bytecode-args?) (inline (G004259 (static-fpi-ref 4) (binding-ref ? <bytecode>) (primitive-relative-ref))))
    ((name . bytecodep) (pos . 3) (origin cg-bycode . bytecodep))
    ((name . bytecode-code!) (pos . 15) (origin cg-bycode . bytecode-code!) (inline (G004257 (stack-ref 1) (static-fpi-ref 3) (stack-ref 2) (binding-ref ? <bytecode>) (set-primitive-relative-ref) (nobble 2))))
    ((name . bytecode-properties!) (pos . 11) (origin cg-bycode . bytecode-properties!) (inline (G004253 (stack-ref 1) (static-ref2) (stack-ref 2) (binding-ref ? <bytecode>) (set-primitive-relative-ref) (nobble 2))))
    ((name . bytecode-name?) (pos . 12) (origin cg-bycode . bytecode-name?) (inline (G004263 (static-fpi-ref 5) (binding-ref ? <bytecode>) (primitive-relative-ref))))
    ((name . get-bytecode) (pos . 18) (origin cg-bycode . get-bytecode) (class . constant))
    ((name . get-stream-primitive) (pos . 9) (origin cg-bycode . get-stream-primitive) (class . constant))
    ((name . bytecode-size?) (pos . 13) (origin cg-bycode . bytecode-size?) (inline (G004247 (static-ref1) (binding-ref ? <bytecode>) (primitive-relative-ref))))
    ((name . <bytecode>) (pos . 6) (origin cg-bycode . <bytecode>) (class . constant))
    ((name . bytecode-modus?) (pos . 16) (origin cg-bycode . bytecode-modus?) (inline (G004243 (static-ref0) (binding-ref ? <bytecode>) (primitive-relative-ref))))
    ((name . bytecode-properties?) (pos . 5) (origin cg-bycode . bytecode-properties?) (inline (G004251 (static-ref2) (binding-ref ? <bytecode>) (primitive-relative-ref))))
    ((name . get-register) (pos . 7) (origin cg-bycode . get-register) (class . constant))
   )
   local-literals (
    (top-level . 74)
    (bytecode-args! . 73)
    (bytecode-size! . 72)
    (bytecode-properties? . 71)
    (bytecode-args? . 70)
    (bytecode-modus! . 69)
    (bytecode-properties! . 68)
    (bytecode-name? . 67)
    (bytecode-size? . 66)
    (bytecode-code? . 65)
    (bytecode-code! . 64)
    (bytecode-modus? . 63)
    (bytecode-name! . 62)
    (|(method bytecodep)| . 48)
    (bytecodep . 47)
    ((modus: size: properties: code: args: name:) . 46)
    (direct-keywords: . 45)
    (direct-slots: . 44)
    (direct-superclasses: . 43)
    (bytecode . 42)
    (modus: . 41)
    (modus . 40)
    (size: . 39)
    (size . 38)
    (properties: . 37)
    (properties . 36)
    (code: . 35)
    (code . 34)
    (args: . 33)
    (args . 32)
    (keyword: . 31)
    (anonymous . 30)
    (default: . 29)
    (name . 28)
    (name: . 27)
   )
   literals (
   )
))
