;;; EuLisp system 'youtoo'
;;;   Interface file for module cg-bycode1

(definterface cg-bycode1
  (import (i-level-1 cg-bycode)
   syntax (_syntax-1 _cg-bycode0 _sx-obj0)
   full-import (aux-table level-1 telos mop-defcl mop-meth mop-gf mop-inspect mop-init mop-class mop-key mop-prim mop-access mop-alloc bit condition event thread dynamic let-cc callback string convert copy integer number fpi collect compare character float stream stream1 lock stream2 socket list format convert1 vector table1 table read handler random stream3 symbol boot boot1 i-level-1 cg-bycode)
   export (
    ((name . bytecode-args!) (pos . 2) (origin cg-bycode . bytecode-args!) (inline (G004299 (stack-ref 1) (static-fpi-byte-ref 4) (stack-ref 2) (binding-ref ? <bytecode>) (set-primitive-relative-ref) (nobble 2))))
    ((name . bytecode-size!) (pos . 4) (origin cg-bycode . bytecode-size!) (inline (G004287 (stack-ref 1) (static-ref1) (stack-ref 2) (binding-ref ? <bytecode>) (set-primitive-relative-ref) (nobble 2))))
    ((name . bytecode-name!) (pos . 17) (origin cg-bycode . bytecode-name!) (inline (G004303 (stack-ref 1) (static-fpi-byte-ref 5) (stack-ref 2) (binding-ref ? <bytecode>) (set-primitive-relative-ref) (nobble 2))))
    ((name . bytecode-code?) (pos . 13) (origin cg-bycode . bytecode-code?) (inline (G004293 (static-fpi-byte-ref 3) (binding-ref ? <bytecode>) (primitive-relative-ref))))
    ((name . bytecode-modus!) (pos . 9) (origin cg-bycode . bytecode-modus!) (inline (G004283 (stack-ref 1) (static-ref0) (stack-ref 2) (binding-ref ? <bytecode>) (set-primitive-relative-ref) (nobble 2))))
    ((name . bytecode-args?) (pos . 7) (origin cg-bycode . bytecode-args?) (inline (G004297 (static-fpi-byte-ref 4) (binding-ref ? <bytecode>) (primitive-relative-ref))))
    ((name . bytecode-code!) (pos . 14) (origin cg-bycode . bytecode-code!) (inline (G004295 (stack-ref 1) (static-fpi-byte-ref 3) (stack-ref 2) (binding-ref ? <bytecode>) (set-primitive-relative-ref) (nobble 2))))
    ((name . bytecode-properties!) (pos . 10) (origin cg-bycode . bytecode-properties!) (inline (G004291 (stack-ref 1) (static-ref2) (stack-ref 2) (binding-ref ? <bytecode>) (set-primitive-relative-ref) (nobble 2))))
    ((name . bytecode-name?) (pos . 11) (origin cg-bycode . bytecode-name?) (inline (G004301 (static-fpi-byte-ref 5) (binding-ref ? <bytecode>) (primitive-relative-ref))))
    ((name . get-bytecode) (pos . 18) (origin cg-bycode . get-bytecode) (class . constant))
    ((name . get-stream-primitive) (pos . 8) (origin cg-bycode . get-stream-primitive) (class . constant))
    ((name . bytecode-size?) (pos . 12) (origin cg-bycode . bytecode-size?) (inline (G004285 (static-ref1) (binding-ref ? <bytecode>) (primitive-relative-ref))))
    ((name . <bytecode>) (pos . 5) (origin cg-bycode . <bytecode>) (class . constant))
    ((name . bytecode?) (pos . 16) (origin cg-bycode . bytecode?))
    ((name . bytecode-modus?) (pos . 15) (origin cg-bycode . bytecode-modus?) (inline (G004281 (static-ref0) (binding-ref ? <bytecode>) (primitive-relative-ref))))
    ((name . bytecode-properties?) (pos . 3) (origin cg-bycode . bytecode-properties?) (inline (G004289 (static-ref2) (binding-ref ? <bytecode>) (primitive-relative-ref))))
    ((name . get-register) (pos . 6) (origin cg-bycode . get-register) (class . constant))
   )
   local-literals (
    (top-level . 177)
    (((in obj obj) (out obj)) . 175)
    (value-stack-ref . 174)
    (((in obj) (out obj)) . 173)
    (context-stack-ref . 172)
    (((in obj)) . 171)
    ((reg) . 170)
    (set-register-ref . 169)
    (((out obj)) . 168)
    ((reg) . 167)
    (reg . 166)
    (register-ref . 165)
    (((out obj)) . 164)
    ((byte) . 163)
    (static-character-ref . 162)
    (((out obj)) . 161)
    ((byte) . 160)
    (static-fpi-byte-ref . 159)
    (((out obj)) . 158)
    ((int) . 157)
    (static-fpi-ref . 156)
    (((in obj) (out obj)) . 155)
    ((int) . 154)
    (set-and-get-binding-ref . 153)
    (((in obj)) . 152)
    ((int) . 151)
    (set-binding-ref . 150)
    (((out obj)) . 149)
    ((int) . 148)
    (binding-ref . 147)
    (((out obj)) . 146)
    ((static) . 145)
    (static . 144)
    (static-ref . 143)
    (((out obj)) . 142)
    (static-ref-t . 141)
    (((out obj)) . 140)
    (static-ref-nil . 139)
    (((out obj)) . 138)
    (static-ref-1 . 137)
    (((out obj)) . 136)
    (static-ref2 . 135)
    (((out obj)) . 134)
    (static-ref1 . 133)
    (((out obj)) . 132)
    (static-ref0 . 131)
    ((byte) . 130)
    (nobble . 129)
    (((in parameter)) . 128)
    (pop1 . 127)
    (((in parameter)) . 126)
    (parameter . 125)
    ((byte) . 124)
    (pop . 123)
    (((in obj)) . 122)
    ((byte) . 121)
    (set-stack-ref . 120)
    (((out obj)) . 119)
    ((byte) . 118)
    (stack-ref . 117)
    (swap . 116)
    (((out obj)) . 115)
    (stack-ref2 . 114)
    (((out obj)) . 113)
    (stack-ref1 . 112)
    (((out obj)) . 111)
    (stack-ref0 . 110)
    (((in int) (out obj)) . 109)
    (fpi-zerop . 108)
    (((in int) (out int)) . 107)
    (fpi-dec . 106)
    (((in int) (out int)) . 105)
    (fpi-inc . 104)
    (((in int int) (out obj)) . 103)
    (fpi-lt . 102)
    (((in int int) (out obj)) . 101)
    (fpi-equal . 100)
    (((in int int) (out int)) . 99)
    (fpi-remainder . 98)
    (((in int int) (out int)) . 97)
    (fpi-quotient . 96)
    (((in int int) (out int)) . 95)
    (fpi-product . 94)
    (((in int int) (out int)) . 93)
    (fpi-difference . 92)
    (((in int int) (out int)) . 91)
    (fpi-sum . 90)
    (((in obj obj) (out obj)) . 89)
    (set-setter . 88)
    (((in obj) (out obj)) . 87)
    (setter . 86)
    (((in obj) (out obj)) . 85)
    (characterp . 84)
    (((in obj) (out obj)) . 83)
    (gfp . 82)
    (((in obj) (out obj)) . 81)
    (lambdap . 80)
    (((in obj) (out obj)) . 79)
    (fpip . 78)
    (((in obj) (out obj)) . 77)
    (stringp . 76)
    (((in obj) (out obj)) . 75)
    (symbolp . 74)
    (((in obj) (out obj)) . 73)
    (listp . 72)
    (((in obj) (out obj)) . 71)
    (consp . 70)
    (((in obj) (out obj)) . 69)
    (null . 68)
    (((in int) (out cons)) . 67)
    ((byte) . 66)
    (byte . 65)
    (listify . 64)
    (((in cons obj) (out obj)) . 63)
    (set-cdr . 62)
    (((in cons obj) (out obj)) . 61)
    (set-car . 60)
    (((in cons) (out obj)) . 59)
    (cadddr . 58)
    (((in cons) (out obj)) . 57)
    (caddr . 56)
    (((in cons) (out obj)) . 55)
    (cddr . 54)
    (((in cons) (out obj)) . 53)
    (cdar . 52)
    (((in cons) (out obj)) . 51)
    (cadr . 50)
    (((in cons) (out obj)) . 49)
    (caar . 48)
    (((in cons) (out obj)) . 47)
    (CDR . 46)
    (((in cons) (out obj)) . 45)
    (CAR . 44)
    (((in cons) (out obj)) . 43)
    (cdr . 42)
    (((in cons) (out obj)) . 41)
    (car . 40)
    (((in obj obj) (out cons)) . 39)
    (cons . 38)
    (((in str int char) (out char)) . 37)
    (set-string-ref . 36)
    (((in str int) (out char)) . 35)
    (char . 34)
    (str . 33)
    (string-ref . 32)
    (((in obj) (out int)) . 31)
    (primitive-size . 30)
    (((in obj class)) . 29)
    (set-primitive-class-of . 28)
    (((in obj) (out class)) . 27)
    (primitive-class-of . 26)
    (((in obj1 int1 obj2 class) (out obj2)) . 25)
    (int1 . 24)
    (set-primitive-relative-ref . 23)
    (((in obj1 int val)) . 22)
    (val . 21)
    (set-primitive-ref . 20)
    (((in obj1 int class) (out obj2)) . 19)
    (primitive-relative-ref . 18)
    (((in obj1 int) (out obj2)) . 17)
    (obj2 . 16)
    (obj1 . 15)
    (primitive-ref . 14)
    (((in class int) (out obj)) . 13)
    (obj . 12)
    (out . 11)
    (int . 10)
    (class . 9)
    (in . 8)
    (primitive-allocate . 7)
    (properties: . 6)
    (code: . 5)
    (args: . 4)
    (noop . 3)
    (name: . 2)
   )
   literals (
   )
))
