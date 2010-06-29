;;; EuLisp system 'youtoo'
;;;   Interface file for module thread

(definterface thread
  (import (telos event)
   syntax (_macros)
   full-import (mop-alloc mop-access mop-prim mop-key mop-class mop-init mop-inspect mop-gf mop-meth mop-defcl boot boot1 telos event)
   export (
    ((name . state-context-stack-size) (pos . 12) (origin thread . state-context-stack-size) (inline (G00178 (static-ref0) (binding-ref ? <state>) (primitive-relative-ref))) (setter (G00198 (stack-ref 1) (static-ref0) (stack-ref 2) (binding-ref ? <state>) (set-primitive-relative-ref) (nobble 2))))
    ((name . thread-continuation) (pos . 29) (origin thread . thread-continuation) (inline (G00176 (static-fpi-ref 3) (binding-ref ? <simple-thread>) (primitive-relative-ref))) (setter (G00196 (stack-ref 1) (static-fpi-ref 3) (stack-ref 2) (binding-ref ? <simple-thread>) (set-primitive-relative-ref) (nobble 2))))
    ((name . thread-return-value) (pos . 20) (origin thread . thread-return-value) (inline (G00170 (static-ref0) (binding-ref ? <simple-thread>) (primitive-relative-ref))) (setter (G00190 (stack-ref 1) (static-ref0) (stack-ref 2) (binding-ref ? <simple-thread>) (set-primitive-relative-ref) (nobble 2))))
    ((name . thread-dynamic-variables) (pos . 27) (origin thread . thread-dynamic-variables) (inline (G00166 (static-ref2) (binding-ref ? <thread>) (primitive-relative-ref))) (setter (G00186 (stack-ref 1) (static-ref2) (stack-ref 2) (binding-ref ? <thread>) (set-primitive-relative-ref) (nobble 2))))
    ((name . thread-unblock) (pos . 6) (origin thread . thread-unblock))
    ((name . fill-simple-state) (pos) (origin thread . fill-simple-state) (class . opencoding) (arity . 1) (opencoding (fill-state)))
    ((name . thread-start) (pos . 26) (origin thread . thread-start))
    ((name . <state>) (pos . 25) (origin thread . <state>) (class . constant))
    ((name . call1/cc) (pos . 18) (origin thread . call1/cc))
    ((name . restore-thread-state) (pos) (origin thread . restore-thread-state) (class . opencoding) (arity . 2) (opencoding (restore-thread-state)))
    ((name . thread-value) (pos . 5) (origin thread . thread-value))
    ((name . current-thread-queue) (pos . 24) (origin thread . current-thread-queue))
    ((name . thread-suspend) (pos . 4) (origin thread . thread-suspend))
    ((name . thread-state) (pos . 23) (origin thread . thread-state) (inline (G00174 (static-ref2) (binding-ref ? <simple-thread>) (primitive-relative-ref))) (setter (G00194 (stack-ref 1) (static-ref2) (stack-ref 2) (binding-ref ? <simple-thread>) (set-primitive-relative-ref) (nobble 2))))
    ((name . state-context-stack) (pos . 37) (origin thread . state-context-stack) (inline (G00180 (static-ref1) (binding-ref ? <state>) (primitive-relative-ref))) (setter (G00200 (stack-ref 1) (static-ref1) (stack-ref 2) (binding-ref ? <state>) (set-primitive-relative-ref) (nobble 2))))
    ((name . current-thread) (pos . 22) (origin thread . current-thread))
    ((name . thread-error-handlers) (pos . 16) (origin thread . thread-error-handlers) (inline (G00168 (static-fpi-ref 3) (binding-ref ? <thread>) (primitive-relative-ref))) (setter (G00188 (stack-ref 1) (static-fpi-ref 3) (stack-ref 2) (binding-ref ? <thread>) (set-primitive-relative-ref) (nobble 2))))
    ((name . state-value-stack) (pos . 14) (origin thread . state-value-stack) (inline (G00184 (static-fpi-ref 3) (binding-ref ? <state>) (primitive-relative-ref))) (setter (G00204 (stack-ref 1) (static-fpi-ref 3) (stack-ref 2) (binding-ref ? <state>) (set-primitive-relative-ref) (nobble 2))))
    ((name . restore-simple-state) (pos) (origin thread . restore-simple-state) (class . opencoding) (arity . 2) (opencoding (restore-state)))
    ((name . <current-thread>) (pos . 15) (origin thread . <current-thread>))
    ((name . thread-block) (pos . 2) (origin thread . thread-block))
    ((name . simple-thread?) (pos . 39) (origin thread . simple-thread?))
    ((name . fill-thread-state) (pos) (origin thread . fill-thread-state) (class . opencoding) (arity . 1) (opencoding (fill-thread-state)))
    ((name . thread?) (pos . 30) (origin thread . thread?))
    ((name . state-value-stack-size) (pos . 35) (origin thread . state-value-stack-size) (inline (G00182 (static-ref2) (binding-ref ? <state>) (primitive-relative-ref))) (setter (G00202 (stack-ref 1) (static-ref2) (stack-ref 2) (binding-ref ? <state>) (set-primitive-relative-ref) (nobble 2))))
    ((name . tconc) (pos . 28) (origin thread . tconc))
    ((name . <thread>) (pos . 8) (origin thread . <thread>) (class . constant))
    ((name . thread-returned?) (pos . 38) (origin thread . thread-returned?) (inline (G00172 (static-ref1) (binding-ref ? <simple-thread>) (primitive-relative-ref))) (setter (G00192 (stack-ref 1) (static-ref1) (stack-ref 2) (binding-ref ? <simple-thread>) (set-primitive-relative-ref) (nobble 2))))
    ((name . <simple-thread>) (pos . 34) (origin thread . <simple-thread>) (class . constant))
    ((name . thread-reschedule) (pos . 7) (origin thread . thread-reschedule))
   )
   local-literals (
    (top-level . 178)
    (thread-enable . 177)
    (^ . 176)
    (state-context-stack-size . 175)
    (thread-feed . 174)
    (state-value-stack . 173)
    (thread-error-handlers . 172)
    (thread-queue-remove . 171)
    (call1/cc . 170)
    (thread-return . 169)
    (thread-return-value . 168)
    (thread-run . 167)
    (thread-state . 166)
    (thread-dynamic-variables . 165)
    (tconc . 164)
    (thread-continuation . 163)
    (call1/cc-aux . 162)
    (thread-queue-remove-last . 161)
    (state-value-stack-size . 160)
    (thread-queue-append . 159)
    (state-context-stack . 158)
    (thread-returned? . 157)
    ("empty thread queue" . 151)
    ("empty thread queue" . 138)
    (|(method state?)| . 127)
    (|(setter state-value-stack)| . 126)
    (|(setter state-value-stack-size)| . 125)
    (|(setter state-context-stack)| . 124)
    (|(setter state-context-stack-size)| . 123)
    (|(method thread-unblock)| . 122)
    (|(method thread-block)| . 121)
    (|(method thread-value)| . 120)
    (|(method thread-start)| . 119)
    (|(method initialize)| . 118)
    (running . 117)
    (|(method simple-thread?)| . 116)
    (|(setter thread-continuation)| . 115)
    (|(setter thread-state)| . 114)
    (|(setter thread-returned?)| . 113)
    (|(setter thread-return-value)| . 112)
    (|(method thread?)| . 111)
    (|(setter thread-error-handlers)| . 110)
    (|(setter thread-dynamic-variables)| . 109)
    (state? . 108)
    (thread-unblock . 107)
    (thread-block . 106)
    (thread-value . 105)
    (thread-start . 104)
    (simple-thread? . 103)
    (thread? . 102)
    ((context-stack-size: context-stack: value-stack-size: value-stack:) . 101)
    (context-stack-size: . 100)
    (context-stack-size . 99)
    (context-stack: . 98)
    (context-stack . 97)
    (value-stack-size: . 96)
    (value-stack-size . 95)
    (value-stack: . 94)
    (value-stack . 93)
    (simple-thread . 92)
    (return-value . 91)
    (returned . 90)
    (state . 89)
    (continuation . 88)
    (abstract?: . 87)
    ((function: handlers:) . 86)
    (direct-keywords: . 85)
    (direct-slots: . 84)
    (direct-superclasses: . 83)
    (thread . 82)
    (dynamic-variables: . 81)
    (default: . 80)
    (dynamic-variables . 79)
    (handlers: . 78)
    (keyword: . 77)
    (error-handlers . 76)
    (name: . 75)
    (*clean-ups* . 73)
    (ready . 69)
    ("missing required keyword ~a" . 56)
    (function: . 55)
    (anonymous . 53)
    (limbo . 51)
    (blocked . 47)
   )
   literals (
   )
))
