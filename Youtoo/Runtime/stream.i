;;; EuLisp system 'youtoo'
;;;   Interface file for module stream

(definterface stream
  (import (telos stream1 stream2 socket dynamic condition lock convert collect list string fpi)
   syntax (_macros)
   full-import (mop-alloc mop-access mop-prim mop-key mop-class mop-init mop-inspect mop-gf mop-meth mop-defcl boot boot1 telos stream1 string copy compare callback collect integer number fpi convert condition dynamic let-cc lock event thread stream2 socket list)
   export (
    ((name . <stream-control-block>) (pos . 23) (origin stream2 . <stream-control-block>) (class . constant))
    ((name . file-stream?) (pos . 49) (origin stream2 . file-stream?))
    ((name . sprin-one-char) (pos . 25) (origin stream . sprin-one-char))
    ((name . string-stream-string-list) (pos . 48) (origin stream2 . string-stream-string-list) (inline (G002879 (static-ref0) (binding-ref ? <string-stream>) (primitive-relative-ref))) (setter (G002905 (stack-ref 1) (static-ref0) (stack-ref 2) (binding-ref ? <string-stream>) (set-primitive-relative-ref) (nobble 2))))
    ((name . prin) (pos . 20) (origin stream . prin))
    ((name . control-block-buffer-cnt) (pos . 47) (origin stream2 . control-block-buffer-cnt) (inline (G002853 (static-ref0) (binding-ref ? <stream-control-block>) (primitive-relative-ref))) (setter (G002883 (stack-ref 1) (static-ref0) (stack-ref 2) (binding-ref ? <stream-control-block>) (set-primitive-relative-ref) (nobble 2))))
    ((name . <string-stream>) (pos . 45) (origin stream2 . <string-stream>) (class . constant))
    ((name . prin-address) (pos . 12) (origin stream . prin-address))
    ((name . sprin-char) (pos . 18) (origin stream . sprin-char))
    ((name . make-space) (pos . 24) (origin stream . make-space))
    ((name . stream-source) (pos . 22) (origin stream2 . stream-source) (inline (G002875 (static-fpi-ref 4) (binding-ref ? <stream>) (primitive-relative-ref))) (setter (G002901 (stack-ref 1) (static-fpi-ref 4) (stack-ref 2) (binding-ref ? <stream>) (set-primitive-relative-ref) (nobble 2))))
    ((name . eul_socket_strerror) (pos . 24) (origin stream1 . eul_socket_strerror) (class . ff) (arity . 1) (ff (0) 3 (eul_socket_strerror . ff_stub_eul_socket_strerror4803)))
    ((name . O_TRUNC) (pos . 13) (origin stream1 . O_TRUNC) (class . constant))
    ((name . eul_sprintf_string) (pos . 20) (origin stream1 . eul_sprintf_string) (class . ff) (arity . 6) (ff (3 0 0 0 3 3) 0 (eul_sprintf_string . ff_stub_eul_sprintf_string4799)))
    ((name . from-stream) (pos . 46) (origin stream2 . from-stream))
    ((name . generic-connect) (pos . 44) (origin stream2 . generic-connect))
    ((name . O_EXCL) (pos . 12) (origin stream1 . O_EXCL) (class . constant))
    ((name . O_WRONLY) (pos . 11) (origin stream1 . O_WRONLY) (class . constant))
    ((name . generic-read) (pos . 43) (origin stream2 . generic-read))
    ((name . control-block-descriptor) (pos . 41) (origin stream2 . control-block-descriptor) (inline (G002861 (static-ref0) (binding-ref ? <file-control-block>) (primitive-relative-ref))) (setter (G002891 (stack-ref 1) (static-ref0) (stack-ref 2) (binding-ref ? <file-control-block>) (set-primitive-relative-ref) (nobble 2))))
    ((name . file-lookup) (pos . 17) (origin stream . file-lookup))
    ((name . socket-host) (pos . 11) (origin socket . socket-host) (inline (G003412 (static-ref2) (binding-ref ? <socket>) (primitive-relative-ref))) (setter (G003424 (stack-ref 1) (static-ref2) (stack-ref 2) (binding-ref ? <socket>) (set-primitive-relative-ref) (nobble 2))))
    ((name . eul_make_socket) (pos . 21) (origin stream1 . eul_make_socket) (class . ff) (arity . 3) (ff (3 3 0) 0 (eul_make_socket . ff_stub_eul_make_socket4800)))
    ((name . sprint) (pos . 7) (origin stream . sprint))
    ((name . eul_socket_accept) (pos . 22) (origin stream1 . eul_socket_accept) (class . ff) (arity . 1) (ff (0) 0 (eul_socket_accept . ff_stub_eul_socket_accept4801)))
    ((name . output-list-contents) (pos . 16) (origin stream . output-list-contents))
    ((name . stream?) (pos . 40) (origin stream2 . stream?))
    ((name . sprin) (pos . 23) (origin stream . sprin))
    ((name . <stream>) (pos . 21) (origin stream2 . <stream>) (class . constant))
    ((name . <buffered-stream>) (pos . 20) (origin stream2 . <buffered-stream>) (class . constant))
    ((name . disconnect) (pos . 39) (origin stream2 . disconnect))
    ((name . end-of-stream) (pos . 19) (origin stream2 . end-of-stream))
    ((name . <socket>) (pos . 8) (origin socket . <socket>) (class . constant))
    ((name . snewline) (pos . 6) (origin stream . snewline))
    ((name . <stream-condition>) (pos . 38) (origin stream2 . <stream-condition>) (class . constant))
    ((name . *open-file-streams*) (pos . 37) (origin stream2 . *open-file-streams*))
    ((name . stream-sink) (pos . 36) (origin stream2 . stream-sink) (inline (G002877 (static-fpi-ref 5) (binding-ref ? <stream>) (primitive-relative-ref))) (setter (G002903 (stack-ref 1) (static-fpi-ref 5) (stack-ref 2) (binding-ref ? <stream>) (set-primitive-relative-ref) (nobble 2))))
    ((name . reconnect) (pos . 18) (origin stream2 . reconnect))
    ((name . read-into-buffer) (pos . 27) (origin stream1 . read-into-buffer) (class . ff) (arity . 3) (ff (0 3 0) 0 (read_into_buffer . ff_stub_read_into_buffer4806)))
    ((name . stream-mode) (pos . 17) (origin stream2 . stream-mode) (inline (G002867 (static-ref0) (binding-ref ? <stream>) (primitive-relative-ref))))
    ((name . sprintf) (pos . 5) (origin stream . sprintf))
    ((name . O_NONBLOCK) (pos . 10) (origin stream1 . O_NONBLOCK) (class . constant))
    ((name . ntok) (pos . 26) (origin stream1 . ntok) (class . ff) (arity . 2) (ff (8 8) 6 (ntok . ff_stub_ntok4805)))
    ((name . strerror) (pos . 6) (origin stream1 . strerror))
    ((name . print) (pos . 11) (origin stream . print))
    ((name . eul_write) (pos . 18) (origin stream1 . eul_write) (class . ff) (arity . 3) (ff (0 3 0) 0 (write . ff_stub_write4797)))
    ((name . stdout) (pos . 34) (origin stream2 . stdout))
    ((name . prin-string) (pos . 4) (origin stream . prin-string))
    ((name . connection-port) (pos . 7) (origin socket . connection-port) (inline (G003416 (static-ref0) (binding-ref ? <connection>) (primitive-relative-ref))) (setter (G003428 (stack-ref 1) (static-ref0) (stack-ref 2) (binding-ref ? <connection>) (set-primitive-relative-ref) (nobble 2))))
    ((name . mode-table) (pos . 5) (origin stream1 . mode-table) (class . constant))
    ((name . eul_sprintf) (pos . 19) (origin stream1 . eul_sprintf) (class . ff) (arity . 4) (ff (3 0 3 8) 0 (eul_sprintf . ff_stub_eul_sprintf4798)))
    ((name . buffered-stream?) (pos . 16) (origin stream2 . buffered-stream?))
    ((name . control-block-file-name) (pos . 33) (origin stream2 . control-block-file-name) (inline (G002865 (static-ref2) (binding-ref ? <file-control-block>) (primitive-relative-ref))) (setter (G002895 (stack-ref 1) (static-ref2) (stack-ref 2) (binding-ref ? <file-control-block>) (set-primitive-relative-ref) (nobble 2))))
    ((name . write) (pos . 15) (origin stream . write))
    ((name . string-stream?) (pos . 15) (origin stream2 . string-stream?))
    ((name . open-file-streams) (pos . 14) (origin stream2 . open-file-streams))
    ((name . control-block-buffer) (pos . 32) (origin stream2 . control-block-buffer) (inline (G002859 (static-fpi-ref 3) (binding-ref ? <stream-control-block>) (primitive-relative-ref))) (setter (G002889 (stack-ref 1) (static-fpi-ref 3) (stack-ref 2) (binding-ref ? <stream-control-block>) (set-primitive-relative-ref) (nobble 2))))
    ((name . socket?) (pos . 10) (origin socket . socket?))
    ((name . stream-lock) (pos . 31) (origin stream2 . stream-lock) (inline (G002869 (static-ref1) (binding-ref ? <stream>) (primitive-relative-ref))))
    ((name . stream-write-action) (pos . 13) (origin stream2 . stream-write-action) (inline (G002871 (static-ref2) (binding-ref ? <stream>) (primitive-relative-ref))) (setter (G002897 (stack-ref 1) (static-ref2) (stack-ref 2) (binding-ref ? <stream>) (set-primitive-relative-ref) (nobble 2))))
    ((name . connection-host) (pos . 5) (origin socket . connection-host) (inline (G003418 (static-ref1) (binding-ref ? <connection>) (primitive-relative-ref))) (setter (G003430 (stack-ref 1) (static-ref1) (stack-ref 2) (binding-ref ? <connection>) (set-primitive-relative-ref) (nobble 2))))
    ((name . O_RDONLY) (pos . 4) (origin stream1 . O_RDONLY) (class . constant))
    ((name . socket-queue-size) (pos . 6) (origin socket . socket-queue-size) (inline (G003408 (static-ref0) (binding-ref ? <socket>) (primitive-relative-ref))) (setter (G003420 (stack-ref 1) (static-ref0) (stack-ref 2) (binding-ref ? <socket>) (set-primitive-relative-ref) (nobble 2))))
    ((name . *int-size-in-decimal-digits*) (pos) (origin stream . *int-size-in-decimal-digits*) (class . constant) (value 21))
    ((name . hostname) (pos . 3) (origin stream1 . hostname))
    ((name . connection?) (pos . 4) (origin socket . connection?))
    ((name . *open-file-streams*-lock) (pos . 12) (origin stream2 . *open-file-streams*-lock) (class . constant))
    ((name . newline) (pos . 10) (origin stream . newline))
    ((name . control-block-buffer-pos) (pos . 11) (origin stream2 . control-block-buffer-pos) (inline (G002855 (static-ref1) (binding-ref ? <stream-control-block>) (primitive-relative-ref))) (setter (G002885 (stack-ref 1) (static-ref1) (stack-ref 2) (binding-ref ? <stream-control-block>) (set-primitive-relative-ref) (nobble 2))))
    ((name . stream-control-block?) (pos . 30) (origin stream2 . stream-control-block?))
    ((name . O_CREAT) (pos . 8) (origin stream1 . O_CREAT) (class . constant))
    ((name . fprintf) (pos . 22) (origin stream . fprintf))
    ((name . eul_close) (pos . 16) (origin stream1 . eul_close) (class . ff) (arity . 1) (ff (0) 0 (close . ff_stub_close4795)))
    ((name . stderr) (pos . 10) (origin stream2 . stderr))
    ((name . control-block-buffer-size) (pos . 9) (origin stream2 . control-block-buffer-size) (inline (G002857 (static-ref2) (binding-ref ? <stream-control-block>) (primitive-relative-ref))) (setter (G002887 (stack-ref 1) (static-ref2) (stack-ref 2) (binding-ref ? <stream-control-block>) (set-primitive-relative-ref) (nobble 2))))
    ((name . control-block-mode) (pos . 29) (origin stream2 . control-block-mode) (inline (G002863 (static-ref1) (binding-ref ? <file-control-block>) (primitive-relative-ref))) (setter (G002893 (stack-ref 1) (static-ref1) (stack-ref 2) (binding-ref ? <file-control-block>) (set-primitive-relative-ref) (nobble 2))))
    ((name . generic-write) (pos . 28) (origin stream2 . generic-write))
    ((name . swrite) (pos . 3) (origin stream . swrite))
    ((name . stream-read-action) (pos . 8) (origin stream2 . stream-read-action) (inline (G002873 (static-fpi-ref 3) (binding-ref ? <stream>) (primitive-relative-ref))) (setter (G002899 (stack-ref 1) (static-fpi-ref 3) (stack-ref 2) (binding-ref ? <stream>) (set-primitive-relative-ref) (nobble 2))))
    ((name . <end-of-stream>) (pos . 7) (origin stream2 . <end-of-stream>) (class . constant))
    ((name . eul_make_connection) (pos . 23) (origin stream1 . eul_make_connection) (class . ff) (arity . 3) (ff (3 3 3) 0 (eul_make_connection . ff_stub_eul_make_connection4802)))
    ((name . eos-default-value) (pos . 6) (origin stream2 . eos-default-value))
    ((name . O_RDWR) (pos . 2) (origin stream1 . O_RDWR) (class . constant))
    ((name . sflush) (pos . 13) (origin stream . sflush))
    ((name . <file-stream>) (pos . 5) (origin stream2 . <file-stream>) (class . constant))
    ((name . to-stream) (pos . 27) (origin stream2 . to-stream))
    ((name . <file-control-block>) (pos . 4) (origin stream2 . <file-control-block>) (class . constant))
    ((name . socket-descriptor) (pos . 3) (origin socket . socket-descriptor) (inline (G003410 (static-ref1) (binding-ref ? <socket>) (primitive-relative-ref))) (setter (G003422 (stack-ref 1) (static-ref1) (stack-ref 2) (binding-ref ? <socket>) (set-primitive-relative-ref) (nobble 2))))
    ((name . prin-char) (pos . 9) (origin stream . prin-char))
    ((name . eul_open) (pos . 15) (origin stream1 . eul_open) (class . ff) (arity . 3) (ff (3 0 0) 0 (open . ff_stub_open4794)))
    ((name . *double-size-in-decimal-digits*) (pos) (origin stream . *double-size-in-decimal-digits*) (class . constant) (value 25))
    ((name . connect) (pos . 21) (origin stream . connect))
    ((name . eul_read) (pos . 17) (origin stream1 . eul_read) (class . ff) (arity . 3) (ff (0 3 0) 0 (read . ff_stub_read4796)))
    ((name . file-control-block?) (pos . 25) (origin stream2 . file-control-block?))
    ((name . socket-port) (pos . 9) (origin socket . socket-port) (inline (G003414 (static-fpi-ref 3) (binding-ref ? <socket>) (primitive-relative-ref))) (setter (G003426 (stack-ref 1) (static-fpi-ref 3) (stack-ref 2) (binding-ref ? <socket>) (set-primitive-relative-ref) (nobble 2))))
    ((name . O_APPEND) (pos . 7) (origin stream1 . O_APPEND) (class . constant))
    ((name . flush-buffer) (pos . 24) (origin stream2 . flush-buffer))
    ((name . fill-buffer) (pos . 3) (origin stream2 . fill-buffer))
    ((name . <connection>) (pos . 2) (origin socket . <connection>) (class . constant))
    ((name . generic-prin) (pos . 2) (origin stream2 . generic-prin))
    ((name . stdin) (pos . 50) (origin stream2 . stdin))
    ((name . flush) (pos . 2) (origin stream . flush))
   )
   local-literals (
    (top-level . 119)
    (flush . 118)
    (swrite . 117)
    (prin-string . 116)
    (sprintf . 115)
    (snewline . 114)
    (sprint . 113)
    (swrite-all . 112)
    (prin-char . 111)
    (newline . 110)
    (print . 109)
    (prin-address . 108)
    (sflush . 107)
    (sprin-char* . 106)
    (write . 105)
    (output-list-contents . 104)
    (file-lookup . 103)
    (sprin-char . 102)
    (sprin-all . 101)
    (prin . 100)
    (connect . 99)
    (fprintf . 98)
    (sprin . 97)
    (make-space . 96)
    (sprin-one-char . 95)
    ("#<C: " . 86)
    ("0x%08X" . 76)
    ("#<C: " . 70)
    ("%s" . 64)
    ("%s" . 63)
    (|(method generic-read)| . 59)
    (|(method end-of-stream)| . 58)
    (|(method flush-buffer)| . 57)
    (|(method fill-buffer)| . 56)
    (|(method disconnect)| . 55)
    (|(method reconnect)| . 54)
    (|(method generic-connect)| . 53)
    (a . 51)
    (w . 50)
    (r . 49)
    (anonymous . 43)
    (*clean-ups* . 42)
    (size: . 34)
    (value: . 32)
    ("end of stream" . 31)
   )
   literals (
   )
))
