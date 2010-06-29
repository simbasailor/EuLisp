;;; EuLisp system 'youtoo'
;;;   Interface file for module list

(definterface list
  (import (telos convert compare collect copy number fpi)
   syntax (_telos0)
   full-import (mop-alloc mop-access mop-prim mop-key mop-class mop-init mop-inspect mop-gf mop-meth mop-defcl boot boot1 telos condition event thread dynamic let-cc convert callback compare collect copy number integer fpi)
   export (
    ((name . do2-list) (pos . 13) (origin list . do2-list))
    ((name . car) (pos . 30) (origin boot1 . car) (inline (G0082 (car))) (setter (G0096 (set-car))))
    ((name . cadddr) (pos . 11) (origin list . cadddr) (inline (G003551 (cadddr))))
    ((name . caar) (pos . 27) (origin list . caar) (inline (G003520 (caar))))
    ((name . cdadr) (pos . 21) (origin list . cdadr) (inline (G003530 (cadr) (cdr))))
    ((name . as-proper-list) (pos . 9) (origin list . as-proper-list))
    ((name . accumulate-list) (pos . 17) (origin list . accumulate-list))
    ((name . list) (pos . 25) (origin boot1 . list))
    ((name . caaar) (pos . 24) (origin list . caaar) (inline (G003545 (caar) (car))))
    ((name . cadar) (pos . 19) (origin list . cadar) (inline (G003542 (cdar) (car))))
    ((name . cdaar) (pos . 23) (origin list . cdaar) (inline (G003539 (caar) (cdr))))
    ((name . member1-list) (pos . 30) (origin boot . member1-list) (inline (G00140 (static-ref-nil) (memq))))
    ((name . init-list-ref) (pos . 29) (origin boot . init-list-ref))
    ((name . cadr) (pos . 20) (origin list . cadr) (inline (G003522 (cadr))))
    ((name . anyp1-list) (pos . 28) (origin boot . anyp1-list))
    ((name . cdddr) (pos . 29) (origin list . cdddr) (inline (G003548 (cddr) (cdr))))
    ((name . cons?) (pos . 44) (origin boot1 . cons?) (inline (G0047 (consp))))
    ((name . do1-list-last-special) (pos . 8) (origin list . do1-list-last-special))
    ((name . cddar) (pos . 5) (origin list . cddar) (inline (G003533 (cdar) (cdr))))
    ((name . find1-list) (pos . 4) (origin list . find1-list))
    ((name . reverse-list!) (pos . 7) (origin list . reverse-list!))
    ((name . list-size) (pos . 18) (origin boot . list-size))
    ((name . reverse-list) (pos . 25) (origin boot . reverse-list))
    ((name . map1-list-last-special) (pos . 18) (origin list . map1-list-last-special))
    ((name . atom?) (pos . 37) (origin boot1 . atom?) (inline (G0057 (consp) (null))))
    ((name . <cons>) (pos . 71) (origin mop-class . <cons>) (class . constant))
    ((name . cdr) (pos . 36) (origin boot1 . cdr) (inline (G0084 (cdr))) (setter (G0098 (set-cdr))))
    ((name . list-ref) (pos . 23) (origin boot . list-ref))
    ((name . cdar) (pos . 3) (origin list . cdar) (inline (G003524 (cdar))))
    ((name . member-list) (pos . 24) (origin boot . member-list))
    ((name . select-list) (pos . 25) (origin list . select-list))
    ((name . proper-list?) (pos . 16) (origin list . proper-list?))
    ((name . list-drop) (pos . 2) (origin list . list-drop))
    ((name . slice-list) (pos . 28) (origin list . slice-list))
    ((name . accumulate1-list) (pos . 15) (origin list . accumulate1-list))
    ((name . null?) (pos . 10) (origin boot1 . null?) (inline (G0039 (null))))
    ((name . map2-list) (pos . 10) (origin list . map2-list))
    ((name . <null>) (pos . 25) (origin mop-class . <null>) (class . constant))
    ((name . assoc-list-ref) (pos . 20) (origin boot . assoc-list-ref))
    ((name . <list>) (pos . 63) (origin mop-class . <list>) (class . constant))
    ((name . cddr) (pos . 12) (origin list . cddr) (inline (G003526 (cddr))))
    ((name . do1-list) (pos . 16) (origin boot . do1-list))
    ((name . list?) (pos . 5) (origin boot1 . list?) (inline (G0055 (listp))))
    ((name . caddr) (pos . 22) (origin list . caddr) (inline (G003528 (caddr))))
    ((name . caadr) (pos . 14) (origin list . caadr) (inline (G003536 (cadr) (car))))
    ((name . map1-list) (pos . 10) (origin boot . map1-list))
    ((name . cons) (pos . 2) (origin boot1 . cons) (inline (G0086 (cons))))
   )
   local-literals (
    (top-level . 163)
    (list-drop . 162)
    (cdar . 161)
    (find1-list . 160)
    (cddar . 159)
    (all?2-list . 158)
    (reverse-list! . 157)
    (do1-list-last-special . 156)
    (as-proper-list . 155)
    (map2-list . 154)
    (cadddr . 153)
    (cddr . 152)
    (do2-list . 151)
    (caadr . 150)
    (accumulate1-list . 149)
    (proper-list? . 148)
    (accumulate-list . 147)
    (map1-list-last-special . 146)
    (cadar . 145)
    (cadr . 144)
    (cdadr . 143)
    (caddr . 142)
    (cdaar . 141)
    (caaar . 140)
    (select-list . 139)
    (all?1-list . 138)
    (caar . 137)
    (slice-list . 136)
    (cdddr . 135)
    (|(method binary/)| . 95)
    (|(method binary-)| . 94)
    (|(method binary+)| . 93)
    (|(method deep-copy)| . 92)
    (|(method shallow-copy)| . 91)
    ((converter <list>) . 90)
    ((converter <list>) . 89)
    (<list> . 88)
    (converter . 87)
    (|(method accumulate1)| . 86)
    (|(method accumulate)| . 85)
    (|(method slice)| . 84)
    (|(method concatenate)| . 83)
    (|(method remove)| . 82)
    (|(method sort)| . 81)
    (|(method reverse!)| . 80)
    (|(method reverse)| . 79)
    (|(method select)| . 78)
    (|(method all?)| . 77)
    (|(method any?)| . 76)
    (|(method find)| . 75)
    (|(method member)| . 74)
    (|(method size)| . 73)
    (|(method (setter element))| . 72)
    (|(method element)| . 71)
    (|(method map)| . 70)
    (|(method do)| . 69)
    (|(method binary=)| . 68)
    (anonymous . 32)
   )
   literals (
   )
))
