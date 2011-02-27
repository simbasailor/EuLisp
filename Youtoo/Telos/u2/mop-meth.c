/** ----------------------------------------------------------------------- **
 **                 Generated by EuLisp System 'youtoo'
 ** ----------------------------------------------------------------------- **
 **  Title: C source file of EuLisp module mop-meth
 **  Copyright: See file mop-meth.em
 ** ----------------------------------------------------------------------- **/

#include "eulisp.h"


/* Imported modules */
extern void initialize_module_boot();
extern void initialize_module_mop_prim();
extern void initialize_module_mop_key();
extern void initialize_module_mop_class();
extern void initialize_module_mop_inspect();
extern void initialize_module_mop_gf();
extern LispRef mop_prim_bindings[];
extern LispRef boot1_bindings[];
extern LispRef mop_inspect_bindings[];
extern LispRef mop_key_bindings[];
extern LispRef mop_gf_bindings[];
extern LispRef mop_class_bindings[];
extern LispRef boot_bindings[];

/* Module bindings with size 63 */
LispRef mop_meth_bindings[63];

/* Foreign functions */

/* Initialize module only once */
static int is_initialized = 0;

/* Initialize module mop-meth */
void initialize_module_mop_meth()
{
  if (is_initialized) return;
  initialize_module_boot();
  initialize_module_mop_prim();
  initialize_module_mop_key();
  initialize_module_mop_class();
  initialize_module_mop_inspect();
  initialize_module_mop_gf();
  eul_fast_table_set(eul_modules,"mop_meth",(LispRef) mop_meth_bindings);
  is_initialized = 1;
  {
  /* Declarations */
  LispRef sym_2273, sym_2272, sym_2271, sym_2270, sym_2269, sym_2268, sym_2267, G002266, G002264, G002262, G002260, G002258, G002255, G002253, key_2251, key_2250, G002249, G002247, sym_2245, sym_2244, sym_2243, sym_2242, sym_2241, sym_2240, sym_2239, sym_2238, sym_2237, sym_2236, sym_2235, sym_2234, sym_2233, G002232, G002229, G002227, G002225, G002223, sym_2221, key_2220, G002219, G002217, key_2215, G002214, sym_2212, G002211, G002209, sym_2207, G002206, G002204;

  /* Code vector and literal definitions */
  /* Byte-vector with size: 25 is_init: 0 index: 14 binding: discriminating-function */
  static const void *G002203[] = {I(a8,47,00,00),I(8a,08,02,1b),I(82,02,1c,83),I(02,47,00,01),I(1f,04,24,00),B(boot ,5),I(3c,02,24,00),B(mop_class ,87),I(1c,24,00,00),B(boot ,11),I(3c,02,1b,12),I(1b,44,13,47),I(00,00,1f,07),I(24,00,00,00),B(mop_gf ,15),I(3d,02,07,36),I(21,1f,04,1d),I(0f,1f,06,1f),I(05,1d,03,2a),I(1d,11,29,18),I(1d,10,1b,1f),I(09,24,00,00),B(boot ,5),I(3d,02,09,22),I(02,45,07,00)};

  /* Byte-vector with size: 8 is_init: 0 index: 16 binding: (method-compute-discriminating-function) */
  static const void *G002205[] = {I(43,04,46,02),I(1f,03,48,00),I(00,1c,48,00),I(01,23,00,00),B(mop_meth ,15),I(23,00,00,00),B(mop_meth ,14),I(3b,ff,45,04)};

  /* Byte-vector with size: 5 is_init: 0 index: 17 binding: method-lookup-function */
  static const void *G002208[] = {I(a8,47,00,00),I(1c,47,00,01),I(24,00,00,00),B(mop_gf ,7),I(3d,03,01,00)};

  /* Byte-vector with size: 9 is_init: 0 index: 19 binding: (method-compute-method-lookup-function) */
  static const void *G002210[] = {I(43,03,46,02),I(1d,48,00,00),I(47,00,00,83),I(02,1b,48,00),I(01,23,00,00),B(mop_meth ,18),I(23,00,00,00),B(mop_meth ,17),I(3b,ff,45,04)};

  /* Byte-vector with size: 12 is_init: 0 index: 21 binding: (method-initialize) */
  static const void *G002213[] = {I(ab,1c,1c,37),I(02,2a,23,00),B(mop_meth ,20),I(1c,86,24,00),B(mop_key ,2),I(3c,03,1b,44),I(10,1b,1f,03),I(24,00,00,00),B(mop_meth ,8),I(3c,02,36,02),I(86,2a,1d,45),I(03,00,00,00)};

  /* Byte-vector with size: 4 is_init: 0 index: 22 binding: anonymous */
  static const void *G002216[] = {I(aa,47,00,00),I(1c,24,00,00),B(mop_meth ,8),I(3d,02,01,00)};

  /* Byte-vector with size: 18 is_init: 0 index: 25 binding: (method-initialize) */
  static const void *G002218[] = {I(ab,46,01,1c),I(48,00,00,47),I(00,00,1c,37),I(02,2a,23,00),B(mop_meth ,23),I(1c,86,24,00),B(mop_key ,2),I(3c,03,23,00),B(mop_meth ,24),I(23,00,00,00),B(mop_meth ,22),I(3b,01,1c,24),B(boot ,17),I(3c,02,2a,47),I(00,00,24,00),B(mop_meth ,13),I(3c,01,2a,47),I(00,00,45,03)};

  /* Byte-vector with size: 18 is_init: 0 index: 26 binding: (method-finalize-generic) */
  static const void *G002222[] = {I(aa,1b,83,02),I(1c,8a,05,02),I(1d,1d,1d,24),B(mop_meth ,7),I(3c,03,1f,03),I(1f,03,1d,1f),I(04,24,00,00),B(mop_meth ,12),I(3c,04,1f,04),I(1d,1c,8a,06),I(1d,03,22,02),I(2a,1f,04,1c),I(1c,8a,07,1d),I(03,22,02,2a),I(1f,04,24,00),B(mop_gf ,3),I(3c,01,2a,1f),I(04,45,05,00)};

  /* Byte-vector with size: 16 is_init: 0 index: 27 binding: (method-remove-method) */
  static const void *G002224[] = {I(ab,1c,8a,05),I(02,1c,1c,86),I(6c,1b,44,2f),I(1d,1d,24,00),B(boot ,18),I(3c,02,1f,04),I(1c,1c,8a,05),I(1d,03,22,02),I(2a,1f,03,86),I(1c,82,1d,03),I(22,02,2a,1f),I(04,24,00,00),B(mop_meth ,13),I(3c,01,22,01),I(36,02,86,2a),I(1f,03,45,04)};

  /* Byte-vector with size: 3 is_init: 0 index: 28 binding: (method-find-method) */
  static const void *G002226[] = {I(ab,24,00,00),B(mop_meth ,9),I(3d,02,00,00)};

  eul_allocate_static_string(str_2230, "mismatch between class of generic function ~a and method class ~a", 65);
  /* Byte-vector with size: 34 is_init: 0 index: 30 binding: (method-add-method) */
  static const void *G002228[] = {I(ab,1b,1d,24),B(mop_meth ,4),I(3c,02,2a,1b),I(04,1d,8a,03),I(02,24,00,00),B(mop_inspect ,2),I(3c,02,1b,44),I(04,86,36,19),I(1d,82,02,1d),I(04,23,00,00),B(mop_meth ,29),I(1d,1d,24,00),B(boot ,13),I(3c,03,22,02),I(2a,1c,83,02),I(1f,03,1c,24),B(mop_meth ,10),I(3c,02,1b,44),I(10,1f,04,1c),I(24,00,00,00),B(mop_meth ,6),I(3c,02,36,02),I(86,2a,1f,04),I(8a,05,02,1f),I(04,1c,0f,1f),I(06,1c,1c,8a),I(05,1d,03,22),I(02,2a,1f,05),I(1f,07,1c,82),I(1d,03,22,02),I(2a,1f,06,24),B(mop_meth ,13),I(3c,01,2a,1f),I(06,45,07,00)};

  /* Byte-vector with size: 356 is_init: 0 index: 44 binding: top-level */
  static const void *G002231[] = {I(a9,84,24,00),B(mop_class ,51),I(24,00,00,00),B(mop_class ,25),I(24,00,00,00),B(boot1 ,40),I(3c,03,24,00),B(boot1 ,26),I(3c,00,24,00),B(boot1 ,26),I(3c,00,23,00),B(mop_meth ,31),I(1f,03,24,00),B(mop_class ,16),I(24,00,00,00),B(mop_class ,63),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,1b,89),B(mop_meth ,8),I(2a,84,24,00),B(mop_class ,51),I(24,00,00,00),B(mop_class ,22),I(24,00,00,00),B(boot1 ,40),I(3c,03,24,00),B(boot1 ,26),I(3c,00,24,00),B(boot1 ,26),I(3c,00,23,00),B(mop_meth ,32),I(1f,03,24,00),B(mop_class ,16),I(24,00,00,00),B(mop_class ,63),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,1b,89),B(mop_meth ,10),I(2a,84,24,00),B(mop_class ,51),I(24,00,00,00),B(mop_class ,25),I(24,00,00,00),B(boot1 ,40),I(3c,03,24,00),B(boot1 ,26),I(3c,00,24,00),B(boot1 ,26),I(3c,00,23,00),B(mop_meth ,33),I(1f,03,24,00),B(mop_class ,16),I(24,00,00,00),B(mop_class ,63),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,1b,89),B(mop_meth ,6),I(2a,83,24,00),B(mop_class ,51),I(24,00,00,00),B(boot1 ,40),I(3c,02,24,00),B(boot1 ,26),I(3c,00,24,00),B(boot1 ,26),I(3c,00,23,00),B(mop_meth ,34),I(1f,03,24,00),B(mop_class ,16),I(24,00,00,00),B(mop_class ,63),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,1b,89),B(mop_meth ,13),I(2a,8a,03,24),B(mop_class ,51),I(24,00,00,00),B(mop_class ,22),I(24,00,00,00),B(mop_class ,22),I(24,00,00,00),B(boot1 ,40),I(3c,04,24,00),B(boot1 ,26),I(3c,00,24,00),B(boot1 ,26),I(3c,00,23,00),B(mop_meth ,35),I(1f,03,24,00),B(mop_class ,16),I(24,00,00,00),B(mop_class ,63),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,1b,89),B(mop_meth ,7),I(2a,8a,04,24),B(mop_class ,51),I(24,00,00,00),B(mop_class ,22),I(24,00,00,00),B(mop_class ,22),I(24,00,00,00),B(mop_class ,22),I(24,00,00,00),B(boot1 ,40),I(3c,05,24,00),B(boot1 ,26),I(3c,00,24,00),B(boot1 ,26),I(3c,00,23,00),B(mop_meth ,36),I(1f,03,24,00),B(mop_class ,16),I(24,00,00,00),B(mop_class ,63),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,1b,89),B(mop_meth ,12),I(2a,24,00,00),B(mop_meth ,8),I(2a,24,00,00),B(mop_meth ,8),I(8a,03,02,84),I(24,00,00,00),B(mop_class ,51),I(24,00,00,00),B(mop_class ,25),I(24,00,00,00),B(boot1 ,40),I(3c,03,24,00),B(boot1 ,26),I(3c,00,24,00),B(mop_meth ,8),I(8a,04,02,1c),I(1c,24,00,00),B(boot ,8),I(3c,02,1f,04),I(1f,04,23,00),B(mop_meth ,37),I(23,00,00,00),B(mop_meth ,30),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(mop_meth ,8),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(mop_meth ,10),I(2a,24,00,00),B(mop_meth ,10),I(8a,03,02,84),I(24,00,00,00),B(mop_class ,51),I(86,24,00,00),B(boot1 ,40),I(3c,03,24,00),B(boot1 ,26),I(3c,00,24,00),B(mop_meth ,10),I(8a,04,02,1c),I(1c,24,00,00),B(boot ,8),I(3c,02,1f,04),I(1f,04,23,00),B(mop_meth ,38),I(23,00,00,00),B(mop_meth ,28),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(mop_meth ,10),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(mop_meth ,6),I(2a,24,00,00),B(mop_meth ,6),I(8a,03,02,84),I(24,00,00,00),B(mop_class ,51),I(24,00,00,00),B(mop_class ,25),I(24,00,00,00),B(boot1 ,40),I(3c,03,24,00),B(boot1 ,26),I(3c,00,24,00),B(mop_meth ,6),I(8a,04,02,1c),I(1c,24,00,00),B(boot ,8),I(3c,02,1f,04),I(1f,04,23,00),B(mop_meth ,39),I(23,00,00,00),B(mop_meth ,27),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(mop_meth ,6),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(mop_meth ,13),I(2a,24,00,00),B(mop_meth ,13),I(8a,03,02,83),I(24,00,00,00),B(mop_class ,51),I(24,00,00,00),B(boot1 ,40),I(3c,02,24,00),B(boot1 ,26),I(3c,00,24,00),B(mop_meth ,13),I(8a,04,02,1c),I(1c,24,00,00),B(boot ,8),I(3c,02,1f,04),I(1f,04,23,00),B(mop_meth ,40),I(23,00,00,00),B(mop_meth ,26),I(3b,01,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(mop_meth ,13),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(mop_gf ,12),I(8a,03,02,84),I(24,00,00,00),B(mop_class ,51),I(86,24,00,00),B(boot1 ,40),I(3c,03,24,00),B(boot1 ,26),I(3c,00,24,00),B(mop_gf ,12),I(8a,04,02,1c),I(1c,24,00,00),B(boot ,8),I(3c,02,1f,04),I(1f,04,23,00),B(mop_meth ,41),I(23,00,00,00),B(mop_meth ,25),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(mop_gf ,12),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(mop_gf ,12),I(8a,03,02,84),I(24,00,00,00),B(mop_class ,25),I(86,24,00,00),B(boot1 ,40),I(3c,03,24,00),B(boot1 ,26),I(3c,00,24,00),B(mop_gf ,12),I(8a,04,02,1c),I(1c,24,00,00),B(boot ,8),I(3c,02,1f,04),I(1f,04,23,00),B(mop_meth ,41),I(23,00,00,00),B(mop_meth ,21),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(mop_gf ,12),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(mop_meth ,7),I(2a,24,00,00),B(mop_meth ,7),I(8a,03,02,8a),I(03,24,00,00),B(mop_class ,51),I(86,86,24,00),B(boot1 ,40),I(3c,04,24,00),B(boot1 ,26),I(3c,00,24,00),B(mop_meth ,7),I(8a,04,02,1c),I(1c,24,00,00),B(boot ,8),I(3c,02,1f,04),I(1f,04,23,00),B(mop_meth ,42),I(23,00,00,00),B(mop_meth ,19),I(3b,03,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(mop_meth ,7),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(mop_meth ,12),I(2a,24,00,00),B(mop_meth ,12),I(8a,03,02,8a),I(04,24,00,00),B(mop_class ,51),I(86,86,86,24),B(boot1 ,40),I(3c,05,24,00),B(boot1 ,26),I(3c,00,24,00),B(mop_meth ,12),I(8a,04,02,1c),I(1c,24,00,00),B(boot ,8),I(3c,02,1f,04),I(1f,04,23,00),B(mop_meth ,43),I(23,00,00,00),B(mop_meth ,16),I(3b,04,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(mop_meth ,12),I(1c,24,00,00),B(mop_meth ,5),I(3d,02,48,45),I(48,00,00,00)};

  /* Byte-vector with size: 23 is_init: 0 index: 45 binding: primitive-add-method */
  static const void *G002246[] = {I(ab,1b,1d,24),B(mop_meth ,4),I(3c,02,2a,1b),I(83,02,1d,1c),I(24,00,00,00),B(mop_meth ,9),I(3c,02,1b,44),I(10,1f,03,1c),I(24,00,00,00),B(mop_meth ,11),I(3c,02,36,02),I(86,2a,1f,03),I(8a,05,02,1f),I(03,1c,0f,1f),I(05,1c,1c,8a),I(05,1d,03,22),I(02,2a,1f,04),I(1f,06,1c,82),I(1d,03,22,02),I(2a,1f,05,24),B(mop_gf ,3),I(3c,01,2a,1f),I(05,45,06,00)};

  /* Byte-vector with size: 30 is_init: 0 index: 48 binding: make-method */
  static const void *G002248[] = {I(43,04,1f,03),I(24,00,00,00),B(mop_class ,63),I(50,1b,44,17),I(1d,24,00,00),B(mop_inspect ,8),I(3c,01,1b,44),I(05,1d,12,36),I(02,86,22,01),I(36,02,86,1b),I(44,23,24,00),B(mop_class ,63),I(8a,03,01,1b),I(1f,06,1c,83),I(1d,03,22,02),I(2a,1b,1f,05),I(1c,84,1d,03),I(22,02,2a,1b),I(22,01,36,28),I(24,00,00,00),B(mop_gf ,2),I(1f,06,23,00),B(mop_meth ,46),I(1f,07,23,00),B(mop_meth ,47),I(1f,08,1f,08),I(24,00,00,00),B(boot ,5),I(3d,07,06,45),I(06,00,00,00)};

  /* Byte-vector with size: 24 is_init: 0 index: 49 binding: anonymous */
  static const void *G002252[] = {I(aa,1b,47,00),I(02,1a,1b,44),I(54,47,00,01),I(1d,02,1b,44),I(04,1b,36,09),I(24,00,00,00),B(mop_class ,22),I(47,00,03,1f),I(04,02,1b,44),I(1e,1c,1c,24),B(mop_inspect ,11),I(3c,02,1b,44),I(0d,1f,05,83),I(14,47,00,00),I(3d,01,06,36),I(02,86,22,01),I(36,17,1c,24),B(mop_class ,22),I(50,1b,44,0a),I(47,00,01,1f),I(06,86,03,36),I(02,86,22,01),I(22,03,36,02),I(87,45,02,00)};

  eul_allocate_static_string(str_2256, "method extends domain of generic function ~a\n    method domain: ~a\n    generic function domain: ~a", 98);
  /* Byte-vector with size: 27 is_init: 0 index: 51 binding: check-method-domain */
  static const void *G002254[] = {I(ab,46,05,1c),I(83,02,1b,48),I(00,01,47,00),I(01,06,1b,48),I(00,02,1d,83),I(02,1b,48,00),I(03,47,00,03),I(06,86,1b,48),I(00,00,23,00),B(mop_meth ,24),I(23,00,00,00),B(mop_meth ,49),I(3b,01,48,00),I(00,47,00,02),I(1d,19,1b,44),I(09,82,47,00),I(00,3c,01,36),I(02,86,1b,44),I(04,87,36,1e),I(1f,07,82,02),I(23,00,00,00),B(mop_meth ,50),I(1c,47,00,01),I(47,00,03,24),B(boot ,13),I(3d,04,0a,22),I(01,45,09,00)};

  /* Byte-vector with size: 15 is_init: 0 index: 52 binding: stable-add-method */
  static const void *G002257[] = {I(ab,1c,04,24),B(mop_class ,16),I(50,1b,44,0c),I(1c,04,24,00),B(mop_class ,63),I(50,36,02,86),I(1b,44,0f,1f),I(03,1f,03,24),B(mop_meth ,2),I(3d,02,04,36),I(0f,1f,03,1f),I(03,24,00,00),B(mop_meth ,8),I(3d,02,04,45),I(04,00,00,00)};

  /* Byte-vector with size: 12 is_init: 0 index: 53 binding: anonymous */
  static const void *G002259[] = {I(aa,1b,12,1b),I(44,04,86,36),I(23,1c,10,1b),I(83,02,1b,47),I(00,00,24,00),B(mop_gf ,10),I(3c,02,1b,44),I(04,1d,36,0a),I(1f,04,11,47),I(00,01,3d,01),I(05,22,03,45),I(02,00,00,00)};

  /* Byte-vector with size: 12 is_init: 0 index: 54 binding: primitive-find-method */
  static const void *G002261[] = {I(ab,46,02,1b),I(48,00,00,86),I(1b,48,00,01),I(23,00,00,00),B(mop_meth ,24),I(23,00,00,00),B(mop_meth ,53),I(3b,01,48,00),I(01,1d,8a,05),I(02,47,00,01),I(3d,01,03,45),I(03,00,00,00)};

  /* Byte-vector with size: 16 is_init: 0 index: 55 binding: primitive-remove-method */
  static const void *G002263[] = {I(ab,1c,8a,05),I(02,1c,1c,86),I(6c,1b,44,2f),I(1d,1d,24,00),B(boot ,18),I(3c,02,1f,04),I(1c,1c,8a,05),I(1d,03,22,02),I(2a,1f,03,86),I(1c,82,1d,03),I(22,02,2a,1f),I(04,24,00,00),B(mop_gf ,3),I(3c,01,22,01),I(36,02,86,2a),I(1f,03,45,04)};

  /* Byte-vector with size: 86 is_init: 1 index: 0 binding: initialize-mop-meth */
  static const void *G002265[] = {I(87,25,00,00),B(mop_meth ,1),I(24,00,00,00),B(mop_gf ,1),I(3e,0b,24,00),B(mop_gf ,0),I(3c,00,21,01),I(24,00,00,00),B(mop_inspect ,1),I(3e,0b,24,00),B(mop_inspect ,0),I(3c,00,21,01),I(24,00,00,00),B(mop_class ,1),I(3e,0b,24,00),B(mop_class ,0),I(3c,00,21,01),I(24,00,00,00),B(mop_key ,1),I(3e,0b,24,00),B(mop_key ,0),I(3c,00,21,01),I(24,00,00,00),B(mop_prim ,1),I(3e,0b,24,00),B(mop_prim ,0),I(3c,00,21,01),I(24,00,00,00),B(boot ,1),I(3e,0b,24,00),B(boot ,0),I(3c,00,21,01),I(86,25,00,00),B(mop_meth ,13),I(86,25,00,00),B(mop_meth ,12),I(23,00,00,00),B(mop_meth ,56),I(23,00,00,00),B(mop_meth ,55),I(3b,02,25,00),B(mop_meth ,11),I(86,25,00,00),B(mop_meth ,10),I(23,00,00,00),B(mop_meth ,57),I(23,00,00,00),B(mop_meth ,54),I(3b,02,25,00),B(mop_meth ,9),I(86,25,00,00),B(mop_meth ,8),I(86,25,00,00),B(mop_meth ,7),I(86,25,00,00),B(mop_meth ,6),I(23,00,00,00),B(mop_meth ,58),I(23,00,00,00),B(mop_meth ,52),I(3b,02,25,00),B(mop_meth ,5),I(23,00,00,00),B(mop_meth ,59),I(23,00,00,00),B(mop_meth ,51),I(3b,02,25,00),B(mop_meth ,4),I(23,00,00,00),B(mop_meth ,60),I(23,00,00,00),B(mop_meth ,48),I(3b,04,25,00),B(mop_meth ,3),I(23,00,00,00),B(mop_meth ,61),I(23,00,00,00),B(mop_meth ,45),I(3b,02,25,00),B(mop_meth ,2),I(23,00,00,00),B(mop_meth ,62),I(23,00,00,00),B(mop_meth ,44),I(3b,00,3d,00),I(00,ac,00,00)};


  /* Initializations */
  eul_allocate_bytevector( G002204,G002203);
  eul_intern_symbol(sym_2207,"discriminating-function");
  eul_allocate_bytevector( G002206,G002205);
  eul_allocate_bytevector( G002209,G002208);
  eul_intern_symbol(sym_2212,"method-lookup-function");
  eul_allocate_bytevector( G002211,G002210);
  eul_intern_keyword(key_2215,"generic-function");
  eul_allocate_bytevector( G002214,G002213);
  eul_allocate_bytevector( G002217,G002216);
  eul_intern_keyword(key_2220,"methods");
  eul_intern_symbol(sym_2221,"anonymous");
  eul_allocate_bytevector( G002219,G002218);
  eul_allocate_bytevector( G002223,G002222);
  eul_allocate_bytevector( G002225,G002224);
  eul_allocate_bytevector( G002227,G002226);
  object_class(str_2230) = eul_static_string_class;
  eul_allocate_bytevector( G002229,G002228);
  eul_intern_symbol(sym_2233,"add-method");
  eul_intern_symbol(sym_2234,"find-method");
  eul_intern_symbol(sym_2235,"remove-method");
  eul_intern_symbol(sym_2236,"finalize-generic");
  eul_intern_symbol(sym_2237,"compute-method-lookup-function");
  eul_intern_symbol(sym_2238,"compute-discriminating-function");
  eul_intern_symbol(sym_2239,"(method add-method)");
  eul_intern_symbol(sym_2240,"(method find-method)");
  eul_intern_symbol(sym_2241,"(method remove-method)");
  eul_intern_symbol(sym_2242,"(method finalize-generic)");
  eul_intern_symbol(sym_2243,"(method initialize)");
  eul_intern_symbol(sym_2244,"(method compute-method-lookup-function)");
  eul_intern_symbol(sym_2245,"(method compute-discriminating-function)");
  eul_allocate_bytevector( G002232,G002231);
  eul_allocate_bytevector( G002247,G002246);
  eul_intern_keyword(key_2250,"domain");
  eul_intern_keyword(key_2251,"function");
  eul_allocate_bytevector( G002249,G002248);
  eul_allocate_bytevector( G002253,G002252);
  object_class(str_2256) = eul_static_string_class;
  eul_allocate_bytevector( G002255,G002254);
  eul_allocate_bytevector( G002258,G002257);
  eul_allocate_bytevector( G002260,G002259);
  eul_allocate_bytevector( G002262,G002261);
  eul_allocate_bytevector( G002264,G002263);
  eul_intern_symbol(sym_2267,"primitive-remove-method");
  eul_intern_symbol(sym_2268,"primitive-find-method");
  eul_intern_symbol(sym_2269,"stable-add-method");
  eul_intern_symbol(sym_2270,"check-method-domain");
  eul_intern_symbol(sym_2271,"make-method");
  eul_intern_symbol(sym_2272,"primitive-add-method");
  eul_intern_symbol(sym_2273,"top-level");
  eul_allocate_bytevector( G002266,G002265);

  /* Set local bindings */
  {
    int i;
    for (i = 2; i < 14; i++)
      mop_meth_bindings[i] = eul_nil;
  }

  mop_meth_bindings[ 14] = G002204;
  mop_meth_bindings[ 15] = sym_2207;
  mop_meth_bindings[ 16] = G002206;
  mop_meth_bindings[ 17] = G002209;
  mop_meth_bindings[ 18] = sym_2212;
  mop_meth_bindings[ 19] = G002211;
  mop_meth_bindings[ 20] = key_2215;
  mop_meth_bindings[ 21] = G002214;
  mop_meth_bindings[ 22] = G002217;
  mop_meth_bindings[ 23] = key_2220;
  mop_meth_bindings[ 24] = sym_2221;
  mop_meth_bindings[ 25] = G002219;
  mop_meth_bindings[ 26] = G002223;
  mop_meth_bindings[ 27] = G002225;
  mop_meth_bindings[ 28] = G002227;
  mop_meth_bindings[ 29] = str_2230;
  mop_meth_bindings[ 30] = G002229;
  mop_meth_bindings[ 31] = sym_2233;
  mop_meth_bindings[ 32] = sym_2234;
  mop_meth_bindings[ 33] = sym_2235;
  mop_meth_bindings[ 34] = sym_2236;
  mop_meth_bindings[ 35] = sym_2237;
  mop_meth_bindings[ 36] = sym_2238;
  mop_meth_bindings[ 37] = sym_2239;
  mop_meth_bindings[ 38] = sym_2240;
  mop_meth_bindings[ 39] = sym_2241;
  mop_meth_bindings[ 40] = sym_2242;
  mop_meth_bindings[ 41] = sym_2243;
  mop_meth_bindings[ 42] = sym_2244;
  mop_meth_bindings[ 43] = sym_2245;
  mop_meth_bindings[ 44] = G002232;
  mop_meth_bindings[ 45] = G002247;
  mop_meth_bindings[ 46] = key_2250;
  mop_meth_bindings[ 47] = key_2251;
  mop_meth_bindings[ 48] = G002249;
  mop_meth_bindings[ 49] = G002253;
  mop_meth_bindings[ 50] = str_2256;
  mop_meth_bindings[ 51] = G002255;
  mop_meth_bindings[ 52] = G002258;
  mop_meth_bindings[ 53] = G002260;
  mop_meth_bindings[ 54] = G002262;
  mop_meth_bindings[ 55] = G002264;
  mop_meth_bindings[ 1] = eul_nil;
  mop_meth_bindings[ 56] = sym_2267;
  mop_meth_bindings[ 57] = sym_2268;
  mop_meth_bindings[ 58] = sym_2269;
  mop_meth_bindings[ 59] = sym_2270;
  mop_meth_bindings[ 60] = sym_2271;
  mop_meth_bindings[ 61] = sym_2272;
  mop_meth_bindings[ 62] = sym_2273;
  eul_allocate_lambda( mop_meth_bindings[0], "initialize-mop-meth", 0, G002266);

  }
}


/* eof */