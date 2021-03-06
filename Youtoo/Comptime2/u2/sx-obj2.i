;;; EuLisp system 'youtoo'
;;;   Interface file for module sx-obj2

(definterface sx-obj2
  (import (i-level-1 sx-obj1)
   syntax (_syntax-1 _sx-obj0)
   full-import (aux-table level-1 telos mop-defcl mop-meth mop-gf mop-inspect mop-init mop-class mop-key mop-prim mop-access mop-alloc bit condition event thread dynamic let-cc callback string convert copy integer number fpi collect compare character float stream stream1 lock stream2 socket list format convert1 vector table1 table read handler random stream3 symbol boot boot1 i-level-1 sx-obj1)
   export (
    ((name . var-binding?) (pos . 37) (origin sx-obj2 . var-binding?) (inline (G001461 (static-ref2) (binding-ref ? <var>) (primitive-relative-ref))))
    ((name . const-value!) (pos . 27) (origin sx-obj2 . const-value!) (inline (G001487 (stack-ref 1) (static-ref0) (stack-ref 2) (binding-ref ? <const>) (set-primitive-relative-ref) (nobble 2))))
    ((name . local-static-var-captured?) (pos . 23) (origin sx-obj2 . local-static-var-captured?) (inline (G001469 (static-ref0) (binding-ref ? <local-static-var>) (primitive-relative-ref))))
    ((name . var-used!) (pos . 26) (origin sx-obj2 . var-used!) (inline (G001455 (stack-ref 1) (static-ref0) (stack-ref 2) (binding-ref ? <var>) (set-primitive-relative-ref) (nobble 2))))
    ((name . local-static-var?) (pos . 18) (origin sx-obj2 . local-static-var?))
    ((name . literal-const?) (pos . 14) (origin sx-obj2 . literal-const?))
    ((name . setq-obj!) (pos . 20) (origin sx-obj2 . setq-obj!) (inline (G001479 (stack-ref 1) (static-ref0) (stack-ref 2) (binding-ref ? <setq>) (set-primitive-relative-ref) (nobble 2))))
    ((name . const?) (pos . 17) (origin sx-obj2 . const?))
    ((name . var-name?) (pos . 10) (origin sx-obj2 . var-name?) (inline (G001465 (static-fpi-byte-ref 3) (binding-ref ? <var>) (primitive-relative-ref))))
    ((name . setq-binding?) (pos . 35) (origin sx-obj2 . setq-binding?) (inline (G001481 (static-ref1) (binding-ref ? <setq>) (primitive-relative-ref))))
    ((name . local-var?) (pos . 40) (origin sx-obj2 . local-var?))
    ((name . <global-var>) (pos . 7) (origin sx-obj2 . <global-var>) (class . constant))
    ((name . <var>) (pos . 11) (origin sx-obj2 . <var>) (class . constant))
    ((name . <const>) (pos . 29) (origin sx-obj2 . <const>) (class . constant))
    ((name . <named-const>) (pos . 22) (origin sx-obj2 . <named-const>) (class . constant))
    ((name . named-const-binding!) (pos . 41) (origin sx-obj2 . named-const-binding!) (inline (G001491 (stack-ref 1) (static-ref0) (stack-ref 2) (binding-ref ? <named-const>) (set-primitive-relative-ref) (nobble 2))))
    ((name . setq-obj?) (pos . 6) (origin sx-obj2 . setq-obj?) (inline (G001477 (static-ref0) (binding-ref ? <setq>) (primitive-relative-ref))))
    ((name . const-value?) (pos . 19) (origin sx-obj2 . const-value?) (inline (G001485 (static-ref0) (binding-ref ? <const>) (primitive-relative-ref))))
    ((name . local-static-var-lambda?) (pos . 39) (origin sx-obj2 . local-static-var-lambda?) (inline (G001473 (static-ref1) (binding-ref ? <local-static-var>) (primitive-relative-ref))))
    ((name . named-const-name!) (pos . 16) (origin sx-obj2 . named-const-name!) (inline (G001495 (stack-ref 1) (static-ref1) (stack-ref 2) (binding-ref ? <named-const>) (set-primitive-relative-ref) (nobble 2))))
    ((name . var-name!) (pos . 30) (origin sx-obj2 . var-name!) (inline (G001467 (stack-ref 1) (static-fpi-byte-ref 3) (stack-ref 2) (binding-ref ? <var>) (set-primitive-relative-ref) (nobble 2))))
    ((name . var-value!) (pos . 5) (origin sx-obj2 . var-value!) (inline (G001459 (stack-ref 1) (static-ref1) (stack-ref 2) (binding-ref ? <var>) (set-primitive-relative-ref) (nobble 2))))
    ((name . named-const-name?) (pos . 13) (origin sx-obj2 . named-const-name?) (inline (G001493 (static-ref1) (binding-ref ? <named-const>) (primitive-relative-ref))))
    ((name . named-const-binding?) (pos . 38) (origin sx-obj2 . named-const-binding?) (inline (G001489 (static-ref0) (binding-ref ? <named-const>) (primitive-relative-ref))))
    ((name . global-var?) (pos . 3) (origin sx-obj2 . global-var?))
    ((name . <global-static-var>) (pos . 28) (origin sx-obj2 . <global-static-var>) (class . constant))
    ((name . setq-binding!) (pos . 2) (origin sx-obj2 . setq-binding!) (inline (G001483 (stack-ref 1) (static-ref1) (stack-ref 2) (binding-ref ? <setq>) (set-primitive-relative-ref) (nobble 2))))
    ((name . var-used?) (pos . 15) (origin sx-obj2 . var-used?) (inline (G001453 (static-ref0) (binding-ref ? <var>) (primitive-relative-ref))))
    ((name . <local-static-var>) (pos . 9) (origin sx-obj2 . <local-static-var>) (class . constant))
    ((name . var-value?) (pos . 34) (origin sx-obj2 . var-value?) (inline (G001457 (static-ref1) (binding-ref ? <var>) (primitive-relative-ref))))
    ((name . <setq>) (pos . 25) (origin sx-obj2 . <setq>) (class . constant))
    ((name . var?) (pos . 33) (origin sx-obj2 . var?))
    ((name . setq?) (pos . 4) (origin sx-obj2 . setq?))
    ((name . local-static-var-lambda!) (pos . 8) (origin sx-obj2 . local-static-var-lambda!) (inline (G001475 (stack-ref 1) (static-ref1) (stack-ref 2) (binding-ref ? <local-static-var>) (set-primitive-relative-ref) (nobble 2))))
    ((name . <local-var>) (pos . 24) (origin sx-obj2 . <local-var>) (class . constant))
    ((name . <literal-const>) (pos . 32) (origin sx-obj2 . <literal-const>) (class . constant))
    ((name . named-const?) (pos . 12) (origin sx-obj2 . named-const?))
    ((name . var-binding!) (pos . 21) (origin sx-obj2 . var-binding!) (inline (G001463 (stack-ref 1) (static-ref2) (stack-ref 2) (binding-ref ? <var>) (set-primitive-relative-ref) (nobble 2))))
    ((name . global-static-var?) (pos . 31) (origin sx-obj2 . global-static-var?))
    ((name . local-static-var-captured!) (pos . 36) (origin sx-obj2 . local-static-var-captured!) (inline (G001471 (stack-ref 1) (static-ref0) (stack-ref 2) (binding-ref ? <local-static-var>) (set-primitive-relative-ref) (nobble 2))))
   )
   local-literals (
    (top-level . 168)
    (setq-binding! . 167)
    (var-value! . 166)
    (setq-obj? . 165)
    (local-static-var-lambda! . 164)
    (var-name? . 163)
    (named-const-name? . 162)
    (var-used? . 161)
    (named-const-name! . 160)
    (const-value? . 159)
    (setq-obj! . 158)
    (var-binding! . 157)
    (local-static-var-captured? . 156)
    (var-used! . 155)
    (const-value! . 154)
    (var-name! . 153)
    (var-value? . 152)
    (setq-binding? . 151)
    (local-static-var-captured! . 150)
    (var-binding? . 149)
    (named-const-binding? . 148)
    (local-static-var-lambda? . 147)
    (named-const-binding! . 146)
    (|(method literal-const?)| . 122)
    (|(method named-const?)| . 121)
    (|(method const?)| . 120)
    (|(method setq?)| . 119)
    (|(method global-static-var?)| . 118)
    (|(method global-var?)| . 117)
    (|(method local-static-var?)| . 116)
    (|(method local-var?)| . 115)
    (|(method var?)| . 114)
    (literal-const? . 113)
    (named-const? . 112)
    (const? . 111)
    (setq? . 110)
    (global-static-var? . 109)
    (global-var? . 108)
    (local-static-var? . 107)
    (local-var? . 106)
    (var? . 105)
    (literal-const . 104)
    ((binding: name:) . 103)
    (named-const . 102)
    ((value:) . 101)
    (const . 100)
    ((obj: binding:) . 99)
    (setq . 98)
    (obj: . 97)
    (obj . 96)
    (global-static-var . 95)
    (global-var . 94)
    ((captured: lambda:) . 93)
    (local-static-var . 92)
    (captured: . 91)
    (captured . 90)
    (lambda: . 89)
    (lambda . 88)
    (local-var . 87)
    ((used: value: binding: name:) . 86)
    (direct-keywords: . 85)
    (direct-slots: . 84)
    (direct-superclasses: . 83)
    (var . 82)
    (used: . 81)
    (used . 80)
    (value: . 79)
    (value . 78)
    (binding: . 77)
    (binding . 76)
    (keyword: . 75)
    (anonymous . 74)
    (default: . 73)
    (name . 72)
    (name: . 71)
   )
   literals (
   )
))
