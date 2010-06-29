/** ----------------------------------------------------------------------- **
 **                 Generated by EuLisp System 'youtoo'
 ** ----------------------------------------------------------------------- **
 **  Description: C source file of EuLisp module mop-defcl
 **  Copyright: See file mop-defcl.em
 ** ----------------------------------------------------------------------- **/

#include "eulisp.h"


/* Imported modules */
extern void initialize_module_boot();
extern void initialize_module_mop_prim();
extern void initialize_module_mop_inspect();
extern void initialize_module_mop_key();
extern void initialize_module_mop_class();
extern void initialize_module_mop_init();
extern void initialize_module_mop_gf();
extern void initialize_module_mop_meth();
extern LispRef mop_key_bindings[];
extern LispRef mop_prim_bindings[];
extern LispRef mop_meth_bindings[];
extern LispRef mop_gf_bindings[];
extern LispRef mop_class_bindings[];
extern LispRef mop_init_bindings[];
extern LispRef boot_bindings[];
extern LispRef boot1_bindings[];
extern LispRef mop_inspect_bindings[];

/* Module bindings with size 74 */
LispRef mop_defcl_bindings[74];

/* Foreign functions */

/* Initialize module only once */
static int is_initialized = 0;

/* Initialize module mop-defcl */
void initialize_module_mop_defcl()
{
  if (is_initialized) return;
  initialize_module_boot();
  initialize_module_mop_prim();
  initialize_module_mop_inspect();
  initialize_module_mop_key();
  initialize_module_mop_class();
  initialize_module_mop_init();
  initialize_module_mop_gf();
  initialize_module_mop_meth();
  eul_fast_table_set(eul_modules,"mop_defcl",(LispRef) mop_defcl_bindings);
  is_initialized = 1;
  {
  /* Declarations */
  LispRef sym_2022, sym_2021, sym_2020, sym_2019, sym_2018, sym_2017, sym_2016, G002015, key_2013, G002012, G002010, G002008, G002006, G002003, G002001, G001999, G001997, G001995, G001993, sym_1991, sym_1990, sym_1989, sym_1988, sym_1986, sym_1984, sym_1983, sym_1982, sym_1981, sym_1980, sym_1979, G001978, G001976, G001974, G001972, G001970, G001968, G001966, G001964, G001962, G001960, G001958, G001956, G001954, G001952, G001950, G001948, G001946, G001944, G001942, G001940, G001938, G001936, G001934, G001932, G001930, G001928, G001926, G001924, G001922, G001920;

  /* Code vector and literal definitions */
  /* Byte-vector with size: 3 is_init: 0 index: 13 binding: anonymous */
  static const void *G001919[] = {I(ab,1c,26,00),I(00,00,00,0b),I(1d,03,45,02)};

  /* Byte-vector with size: 3 is_init: 0 index: 14 binding: anonymous */
  static const void *G001921[] = {I(ab,1c,26,00),I(00,00,00,0a),I(1d,03,45,02)};

  /* Byte-vector with size: 3 is_init: 0 index: 15 binding: anonymous */
  static const void *G001923[] = {I(ab,1c,26,00),I(00,00,00,09),I(1d,03,45,02)};

  /* Byte-vector with size: 3 is_init: 0 index: 16 binding: anonymous */
  static const void *G001925[] = {I(ab,1c,26,00),I(00,00,00,08),I(1d,03,45,02)};

  /* Byte-vector with size: 3 is_init: 0 index: 17 binding: anonymous */
  static const void *G001927[] = {I(ab,1c,26,00),I(00,00,00,07),I(1d,03,45,02)};

  /* Byte-vector with size: 3 is_init: 0 index: 18 binding: anonymous */
  static const void *G001929[] = {I(ab,1c,26,00),I(00,00,00,06),I(1d,03,45,02)};

  /* Byte-vector with size: 3 is_init: 0 index: 19 binding: anonymous */
  static const void *G001931[] = {I(ab,1c,26,00),I(00,00,00,05),I(1d,03,45,02)};

  /* Byte-vector with size: 3 is_init: 0 index: 20 binding: anonymous */
  static const void *G001933[] = {I(ab,1c,26,00),I(00,00,00,04),I(1d,03,45,02)};

  /* Byte-vector with size: 3 is_init: 0 index: 21 binding: anonymous */
  static const void *G001935[] = {I(ab,1c,26,00),I(00,00,00,03),I(1d,03,45,02)};

  /* Byte-vector with size: 2 is_init: 0 index: 22 binding: anonymous */
  static const void *G001937[] = {I(ab,1c,84,1d),I(03,45,02,00)};

  /* Byte-vector with size: 2 is_init: 0 index: 23 binding: anonymous */
  static const void *G001939[] = {I(ab,1c,83,1d),I(03,45,02,00)};

  /* Byte-vector with size: 2 is_init: 0 index: 24 binding: anonymous */
  static const void *G001941[] = {I(ab,1c,82,1d),I(03,45,02,00)};

  /* Byte-vector with size: 3 is_init: 0 index: 25 binding: anonymous */
  static const void *G001943[] = {I(aa,26,00,00),I(00,00,00,0b),I(02,45,00,00)};

  /* Byte-vector with size: 3 is_init: 0 index: 26 binding: anonymous */
  static const void *G001945[] = {I(aa,26,00,00),I(00,00,00,0a),I(02,45,00,00)};

  /* Byte-vector with size: 3 is_init: 0 index: 27 binding: anonymous */
  static const void *G001947[] = {I(aa,26,00,00),I(00,00,00,09),I(02,45,00,00)};

  /* Byte-vector with size: 3 is_init: 0 index: 28 binding: anonymous */
  static const void *G001949[] = {I(aa,26,00,00),I(00,00,00,08),I(02,45,00,00)};

  /* Byte-vector with size: 3 is_init: 0 index: 29 binding: anonymous */
  static const void *G001951[] = {I(aa,26,00,00),I(00,00,00,07),I(02,45,00,00)};

  /* Byte-vector with size: 3 is_init: 0 index: 30 binding: anonymous */
  static const void *G001953[] = {I(aa,26,00,00),I(00,00,00,06),I(02,45,00,00)};

  /* Byte-vector with size: 3 is_init: 0 index: 31 binding: anonymous */
  static const void *G001955[] = {I(aa,26,00,00),I(00,00,00,05),I(02,45,00,00)};

  /* Byte-vector with size: 3 is_init: 0 index: 32 binding: anonymous */
  static const void *G001957[] = {I(aa,26,00,00),I(00,00,00,04),I(02,45,00,00)};

  /* Byte-vector with size: 3 is_init: 0 index: 33 binding: anonymous */
  static const void *G001959[] = {I(aa,26,00,00),I(00,00,00,03),I(02,45,00,00)};

  /* Byte-vector with size: 2 is_init: 0 index: 34 binding: anonymous */
  static const void *G001961[] = {I(aa,84,02,45),I(00,00,00,00)};

  /* Byte-vector with size: 2 is_init: 0 index: 35 binding: anonymous */
  static const void *G001963[] = {I(aa,83,02,45),I(00,00,00,00)};

  /* Byte-vector with size: 2 is_init: 0 index: 36 binding: anonymous */
  static const void *G001965[] = {I(aa,82,02,45),I(00,00,00,00)};

  /* Byte-vector with size: 26 is_init: 0 index: 37 binding: (setter-slot-value) */
  static const void *G001967[] = {I(43,03,1d,04),I(1b,04,24,00),B(mop_inspect ,6),I(3c,01,1b,34),I(00,00,00,29),I(24,00,00,00),B(mop_inspect ,10),I(24,00,00,00),B(boot1 ,42),I(3c,01,1f,05),I(1f,05,1f,05),I(1f,03,3d,03),I(06,22,01,32),I(00,00,00,33),I(24,00,00,00),B(mop_defcl ,10),I(24,00,00,00),B(boot1 ,42),I(3c,01,1f,05),I(04,1b,1f,06),I(24,00,00,00),B(mop_defcl ,8),I(3c,02,1b,1f),I(08,1f,07,1f),I(05,3d,03,08),I(22,03,45,05)};

  /* Byte-vector with size: 6 is_init: 0 index: 38 binding: (method-(setter slot-value-using-slot)) */
  static const void *G001969[] = {I(43,03,1d,82),I(02,1b,24,00),B(boot1 ,42),I(3c,01,1f,03),I(1f,03,1d,3d),I(02,05,45,05)};

  /* Byte-vector with size: 3 is_init: 0 index: 39 binding: (method-slot-value-using-slot) */
  static const void *G001971[] = {I(ab,1c,82,02),I(1c,1c,3d,01),I(03,45,03,00)};

  /* Byte-vector with size: 13 is_init: 0 index: 40 binding: (method-remove-class) */
  static const void *G001973[] = {I(aa,1b,84,02),I(10,1b,26,00),I(00,00,00,03),I(02,1d,1c,24),B(boot ,17),I(3c,02,1d,1c),I(1c,26,00,00),I(00,00,00,03),I(1d,03,22,02),I(2a,24,00,00),B(mop_init ,2),I(3c,00,2a,1f),I(03,45,04,00)};

  /* Byte-vector with size: 7 is_init: 0 index: 41 binding: (method-add-subclass) */
  static const void *G001975[] = {I(ab,1c,26,00),I(00,00,00,03),I(02,1c,1c,0f),I(1f,03,1c,1c),I(26,00,00,00),I(00,00,00,03),I(1d,03,45,06)};

  eul_allocate_static_cons(cons_1987, NULL, NULL);
  eul_allocate_static_cons(cons_1985, NULL, eul_as_static(cons_1987));
  /* Byte-vector with size: 594 is_init: 0 index: 54 binding: top-level */
  static const void *G001977[] = {I(a9,84,24,00),B(mop_class ,75),I(24,00,00,00),B(mop_class ,75),I(24,00,00,00),B(boot1 ,40),I(3c,03,24,00),B(boot1 ,25),I(3c,00,24,00),B(boot1 ,25),I(3c,00,23,00),B(mop_defcl ,42),I(1f,03,24,00),B(mop_class ,15),I(24,00,00,00),B(mop_class ,55),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,1b,89),B(mop_defcl ,9),I(2a,83,24,00),B(mop_class ,75),I(24,00,00,00),B(boot1 ,40),I(3c,02,24,00),B(boot1 ,25),I(3c,00,24,00),B(boot1 ,25),I(3c,00,23,00),B(mop_defcl ,43),I(1f,03,24,00),B(mop_class ,15),I(24,00,00,00),B(mop_class ,55),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,1b,89),B(mop_defcl ,4),I(2a,84,24,00),B(mop_class ,49),I(24,00,00,00),B(mop_class ,20),I(24,00,00,00),B(boot1 ,40),I(3c,03,24,00),B(boot1 ,25),I(3c,00,24,00),B(boot1 ,25),I(3c,00,23,00),B(mop_defcl ,44),I(1f,03,24,00),B(mop_class ,15),I(24,00,00,00),B(mop_class ,55),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,1b,89),B(mop_defcl ,10),I(2a,86,26,00),I(00,00,00,0c),I(01,1b,89,00),B(mop_defcl ,2),I(2a,86,26,00),I(00,00,00,0c),I(01,1b,89,00),B(mop_defcl ,5),I(2a,24,00,00),B(mop_defcl ,9),I(2a,24,00,00),B(mop_defcl ,9),I(26,00,00,00),I(00,00,00,03),I(02,84,24,00),B(mop_class ,75),I(24,00,00,00),B(mop_class ,75),I(24,00,00,00),B(boot1 ,40),I(3c,03,24,00),B(boot1 ,25),I(3c,00,24,00),B(mop_defcl ,9),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,7),I(3c,02,1f,04),I(1f,04,23,00),B(mop_defcl ,45),I(23,00,00,00),B(mop_defcl ,41),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(mop_defcl ,9),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(mop_defcl ,4),I(2a,24,00,00),B(mop_defcl ,4),I(26,00,00,00),I(00,00,00,03),I(02,83,24,00),B(mop_class ,75),I(24,00,00,00),B(boot1 ,40),I(3c,02,24,00),B(boot1 ,25),I(3c,00,24,00),B(mop_defcl ,4),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,7),I(3c,02,1f,04),I(1f,04,23,00),B(mop_defcl ,46),I(23,00,00,00),B(mop_defcl ,40),I(3b,01,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(mop_defcl ,4),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(mop_defcl ,10),I(2a,24,00,00),B(mop_defcl ,10),I(26,00,00,00),I(00,00,00,03),I(02,84,24,00),B(mop_class ,49),I(86,24,00,00),B(boot1 ,40),I(3c,03,24,00),B(boot1 ,25),I(3c,00,24,00),B(mop_defcl ,10),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,7),I(3c,02,1f,04),I(1f,04,23,00),B(mop_defcl ,47),I(23,00,00,00),B(mop_defcl ,39),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(mop_defcl ,10),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(boot1 ,42),I(24,00,00,00),B(boot1 ,42),I(3c,01,26,00),I(00,00,00,03),I(24,00,00,00),B(mop_class ,49),I(24,00,00,00),B(mop_class ,20),I(24,00,00,00),B(mop_class ,20),I(24,00,00,00),B(boot1 ,40),I(3c,04,24,00),B(boot1 ,25),I(3c,00,24,00),B(boot1 ,25),I(3c,00,23,00),B(mop_defcl ,49),I(1f,03,24,00),B(mop_class ,15),I(24,00,00,00),B(mop_class ,55),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,24,00),B(mop_defcl ,10),I(1c,1f,06,3c),I(02,2a,24,00),B(mop_defcl ,10),I(24,00,00,00),B(boot1 ,42),I(3c,01,2a,24),B(mop_defcl ,10),I(24,00,00,00),B(boot1 ,42),I(3c,01,24,00),B(mop_defcl ,10),I(24,00,00,00),B(boot1 ,42),I(3c,01,1b,26),I(00,00,00,03),I(02,26,00,00),I(00,00,00,03),I(24,00,00,00),B(mop_class ,49),I(86,86,24,00),B(boot1 ,40),I(3c,04,24,00),B(boot1 ,25),I(3c,00,24,00),B(mop_defcl ,10),I(24,00,00,00),B(boot1 ,42),I(3c,01,1b,26),I(00,00,00,04),I(02,1d,1c,24),B(boot ,7),I(3c,02,1f,05),I(1f,05,23,00),B(mop_defcl ,50),I(23,00,00,00),B(mop_defcl ,38),I(3b,03,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,1f,08),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(boot1 ,42),I(24,00,00,00),B(boot1 ,42),I(3c,01,24,00),B(mop_defcl ,7),I(23,00,00,00),B(mop_defcl ,51),I(23,00,00,00),B(mop_defcl ,37),I(3b,03,1d,3c),I(02,2a,24,00),B(mop_defcl ,2),I(82,23,00,00),B(mop_defcl ,52),I(23,00,00,00),B(mop_defcl ,36),I(3b,01,03,2a),I(24,00,00,00),B(mop_defcl ,2),I(83,23,00,00),B(mop_defcl ,52),I(23,00,00,00),B(mop_defcl ,35),I(3b,01,03,2a),I(24,00,00,00),B(mop_defcl ,2),I(84,23,00,00),B(mop_defcl ,52),I(23,00,00,00),B(mop_defcl ,34),I(3b,01,03,2a),I(24,00,00,00),B(mop_defcl ,2),I(26,00,00,00),I(00,00,00,03),I(23,00,00,00),B(mop_defcl ,52),I(23,00,00,00),B(mop_defcl ,33),I(3b,01,03,2a),I(24,00,00,00),B(mop_defcl ,2),I(26,00,00,00),I(00,00,00,04),I(23,00,00,00),B(mop_defcl ,52),I(23,00,00,00),B(mop_defcl ,32),I(3b,01,03,2a),I(24,00,00,00),B(mop_defcl ,2),I(26,00,00,00),I(00,00,00,05),I(23,00,00,00),B(mop_defcl ,52),I(23,00,00,00),B(mop_defcl ,31),I(3b,01,03,2a),I(24,00,00,00),B(mop_defcl ,2),I(26,00,00,00),I(00,00,00,06),I(23,00,00,00),B(mop_defcl ,52),I(23,00,00,00),B(mop_defcl ,30),I(3b,01,03,2a),I(24,00,00,00),B(mop_defcl ,2),I(26,00,00,00),I(00,00,00,07),I(23,00,00,00),B(mop_defcl ,52),I(23,00,00,00),B(mop_defcl ,29),I(3b,01,03,2a),I(24,00,00,00),B(mop_defcl ,2),I(26,00,00,00),I(00,00,00,08),I(23,00,00,00),B(mop_defcl ,52),I(23,00,00,00),B(mop_defcl ,28),I(3b,01,03,2a),I(24,00,00,00),B(mop_defcl ,2),I(26,00,00,00),I(00,00,00,09),I(23,00,00,00),B(mop_defcl ,52),I(23,00,00,00),B(mop_defcl ,27),I(3b,01,03,2a),I(24,00,00,00),B(mop_defcl ,2),I(26,00,00,00),I(00,00,00,0a),I(23,00,00,00),B(mop_defcl ,52),I(23,00,00,00),B(mop_defcl ,26),I(3b,01,03,2a),I(24,00,00,00),B(mop_defcl ,2),I(26,00,00,00),I(00,00,00,0b),I(23,00,00,00),B(mop_defcl ,52),I(23,00,00,00),B(mop_defcl ,25),I(3b,01,03,2a),I(24,00,00,00),B(mop_defcl ,5),I(82,23,00,00),B(mop_defcl ,52),I(23,00,00,00),B(mop_defcl ,24),I(3b,02,03,2a),I(24,00,00,00),B(mop_defcl ,5),I(83,23,00,00),B(mop_defcl ,52),I(23,00,00,00),B(mop_defcl ,23),I(3b,02,03,2a),I(24,00,00,00),B(mop_defcl ,5),I(84,23,00,00),B(mop_defcl ,52),I(23,00,00,00),B(mop_defcl ,22),I(3b,02,03,2a),I(24,00,00,00),B(mop_defcl ,5),I(26,00,00,00),I(00,00,00,03),I(23,00,00,00),B(mop_defcl ,52),I(23,00,00,00),B(mop_defcl ,21),I(3b,02,03,2a),I(24,00,00,00),B(mop_defcl ,5),I(26,00,00,00),I(00,00,00,04),I(23,00,00,00),B(mop_defcl ,52),I(23,00,00,00),B(mop_defcl ,20),I(3b,02,03,2a),I(24,00,00,00),B(mop_defcl ,5),I(26,00,00,00),I(00,00,00,05),I(23,00,00,00),B(mop_defcl ,52),I(23,00,00,00),B(mop_defcl ,19),I(3b,02,03,2a),I(24,00,00,00),B(mop_defcl ,5),I(26,00,00,00),I(00,00,00,06),I(23,00,00,00),B(mop_defcl ,52),I(23,00,00,00),B(mop_defcl ,18),I(3b,02,03,2a),I(24,00,00,00),B(mop_defcl ,5),I(26,00,00,00),I(00,00,00,07),I(23,00,00,00),B(mop_defcl ,52),I(23,00,00,00),B(mop_defcl ,17),I(3b,02,03,2a),I(24,00,00,00),B(mop_defcl ,5),I(26,00,00,00),I(00,00,00,08),I(23,00,00,00),B(mop_defcl ,52),I(23,00,00,00),B(mop_defcl ,16),I(3b,02,03,2a),I(24,00,00,00),B(mop_defcl ,5),I(26,00,00,00),I(00,00,00,09),I(23,00,00,00),B(mop_defcl ,52),I(23,00,00,00),B(mop_defcl ,15),I(3b,02,03,2a),I(24,00,00,00),B(mop_defcl ,5),I(26,00,00,00),I(00,00,00,0a),I(23,00,00,00),B(mop_defcl ,52),I(23,00,00,00),B(mop_defcl ,14),I(3b,02,03,2a),I(24,00,00,00),B(mop_defcl ,5),I(26,00,00,00),I(00,00,00,0b),I(23,00,00,00),B(mop_defcl ,52),I(23,00,00,00),B(mop_defcl ,13),I(3b,02,03,2a),I(24,00,00,00),B(mop_class ,64),I(24,00,00,00),B(mop_class ,67),I(24,00,00,00),B(mop_defcl ,11),I(3c,02,24,00),B(mop_class ,70),I(1c,1c,26,00),I(00,00,00,04),I(1d,03,22,02),I(2a,24,00,00),B(mop_class ,75),I(1c,1c,26,00),I(00,00,00,04),I(1d,03,22,02),I(2a,24,00,00),B(mop_class ,24),I(1c,1c,26,00),I(00,00,00,04),I(1d,03,22,02),I(2a,24,00,00),B(mop_class ,79),I(24,00,00,00),B(mop_class ,37),I(24,00,00,00),B(mop_defcl ,11),I(3c,02,1b,10),I(1c,11,1b,10),I(1f,03,11,1b),I(11,1b,10,1f),I(05,1f,04,1d),I(24,00,00,00),B(boot1 ,25),I(3c,03,24,00),B(mop_class ,38),I(24,00,00,00),B(mop_class ,43),I(26,00,00,00),I(00,00,00,03),I(24,00,00,00),B(mop_defcl ,11),I(3c,03,24,00),B(mop_class ,27),I(1d,1c,26,00),I(00,00,00,04),I(1d,03,22,02),I(2a,1c,1c,24),B(boot ,7),I(3c,02,24,00),B(mop_class ,2),I(1c,1c,26,00),I(00,00,00,04),I(1d,03,22,02),I(2a,24,00,00),B(mop_class ,44),I(1f,0a,1c,26),I(00,00,00,04),I(1d,03,22,02),I(2a,24,00,00),B(mop_class ,15),I(1f,0a,1c,26),I(00,00,00,04),I(1d,03,22,02),I(2a,24,00,00),B(mop_class ,2),I(23,00,00,00),B(mop_defcl ,53),I(24,00,00,00),B(mop_defcl ,8),I(3c,02,1b,24),B(mop_class ,65),I(1c,82,1d,03),I(22,02,2a,24),B(mop_class ,65),I(24,00,00,00),B(boot1 ,42),I(3c,01,1c,1c),I(1c,83,1d,03),I(22,02,2a,24),B(mop_class ,26),I(24,00,00,00),B(mop_class ,34),I(24,00,00,00),B(mop_defcl ,11),I(3c,02,24,00),B(mop_class ,22),I(1c,1c,26,00),I(00,00,00,04),I(1d,03,22,02),I(2a,24,00,00),B(mop_class ,55),I(1c,1c,26,00),I(00,00,00,04),I(1d,03,22,02),I(2a,24,00,00),B(mop_class ,28),I(24,00,00,00),B(mop_class ,4),I(24,00,00,00),B(mop_defcl ,11),I(3c,02,1b,10),I(1c,11,1b,10),I(1d,1c,24,00),B(boot1 ,25),I(3c,02,24,00),B(mop_class ,49),I(1c,1c,26,00),I(00,00,00,04),I(1d,03,22,02),I(2a,24,00,00),B(mop_class ,51),I(1f,05,1c,26),I(00,00,00,04),I(1d,03,22,02),I(2a,24,00,00),B(mop_class ,3),I(24,00,00,00),B(mop_class ,78),I(24,00,00,00),B(mop_defcl ,11),I(3c,02,24,00),B(mop_class ,33),I(1c,1c,26,00),I(00,00,00,04),I(1d,03,22,02),I(2a,24,00,00),B(mop_class ,5),I(1c,1c,26,00),I(00,00,00,04),I(1d,03,22,02),I(2a,24,00,00),B(mop_class ,81),I(1c,1c,26,00),I(00,00,00,04),I(1d,03,22,02),I(2a,24,00,00),B(mop_class ,46),I(24,00,00,00),B(mop_class ,40),I(24,00,00,00),B(mop_defcl ,11),I(3c,02,24,00),B(mop_class ,71),I(1c,1c,26,00),I(00,00,00,04),I(1d,03,45,46)};

  /* Byte-vector with size: 3 is_init: 0 index: 55 binding: anonymous */
  static const void *G001992[] = {I(ab,1c,47,00),I(00,1d,03,45),I(02,00,00,00)};

  /* Byte-vector with size: 16 is_init: 0 index: 56 binding: predefined-writer */
  static const void *G001994[] = {I(aa,46,01,1b),I(48,00,00,47),I(00,00,26,00),I(00,00,00,0c),I(1a,1b,34,00),I(00,00,00,1a),I(24,00,00,00),B(mop_defcl ,5),I(47,00,00,02),I(32,00,00,00),I(00,00,00,1a),I(23,00,00,00),B(mop_defcl ,52),I(23,00,00,00),B(mop_defcl ,55),I(3b,02,45,02)};

  /* Byte-vector with size: 2 is_init: 0 index: 57 binding: anonymous */
  static const void *G001996[] = {I(aa,1b,47,00),I(00,02,45,01)};

  /* Byte-vector with size: 16 is_init: 0 index: 58 binding: predefined-reader */
  static const void *G001998[] = {I(aa,46,01,1b),I(48,00,00,47),I(00,00,26,00),I(00,00,00,0c),I(1a,1b,34,00),I(00,00,00,1a),I(24,00,00,00),B(mop_defcl ,2),I(47,00,00,02),I(32,00,00,00),I(00,00,00,1a),I(23,00,00,00),B(mop_defcl ,52),I(23,00,00,00),B(mop_defcl ,57),I(3b,01,45,02)};

  /* Byte-vector with size: 18 is_init: 0 index: 59 binding: slot-value */
  static const void *G002000[] = {I(ab,1c,04,1b),I(04,24,00,00),B(mop_inspect ,6),I(3c,01,1b,34),I(00,00,00,19),I(1f,03,1f,03),I(24,00,00,00),B(mop_inspect ,10),I(3d,02,04,32),I(00,00,00,22),I(1f,03,04,1b),I(1f,04,24,00),B(mop_defcl ,8),I(3c,02,1b,1f),I(06,24,00,00),B(mop_defcl ,10),I(3d,02,06,22),I(02,45,04,00)};

  eul_allocate_static_string(str_2004, "slot ~a not found in class ~a", 29);
  /* Byte-vector with size: 20 is_init: 0 index: 61 binding: anonymous */
  static const void *G002002[] = {I(aa,1b,12,1b),I(34,00,00,00),I(00,00,00,24),I(23,00,00,00),B(mop_defcl ,60),I(47,00,01,47),I(00,00,24,00),B(boot ,12),I(3d,03,02,32),I(00,00,00,28),I(1c,10,1b,84),I(02,1b,47,00),I(01,50,1b,34),I(00,00,00,0d),I(1d,32,00,00),I(00,00,00,10),I(1f,04,11,47),I(00,02,3d,01),I(05,22,03,45),I(02,00,00,00)};

  /* Byte-vector with size: 15 is_init: 0 index: 62 binding: find-slot */
  static const void *G002005[] = {I(ab,46,03,1c),I(48,00,00,1b),I(48,00,01,86),I(1b,48,00,02),I(23,00,00,00),B(mop_defcl ,52),I(23,00,00,00),B(mop_defcl ,61),I(3b,01,48,00),I(02,47,00,00),I(26,00,00,00),I(00,00,00,04),I(02,47,00,02),I(3d,01,03,45),I(03,00,00,00)};

  /* Byte-vector with size: 18 is_init: 0 index: 63 binding: anonymous */
  static const void *G002007[] = {I(43,04,1f,03),I(12,1b,34,00),I(00,00,00,16),I(1c,24,00,00),B(boot ,25),I(3d,01,05,32),I(00,00,00,2e),I(1f,04,10,1f),I(04,10,1c,1f),I(05,1d,24,00),B(mop_defcl ,12),I(3c,03,1f,07),I(11,1f,07,11),I(1f,07,83,14),I(1f,03,1f,08),I(0f,47,00,00),I(3d,04,08,22),I(03,45,05,00)};

  /* Byte-vector with size: 15 is_init: 0 index: 64 binding: make-slotds */
  static const void *G002009[] = {I(43,fd,46,01),I(86,1b,48,00),I(00,23,00,00),B(mop_defcl ,52),I(23,00,00,00),B(mop_defcl ,63),I(3b,04,48,00),I(00,1c,34,00),I(00,00,00,0e),I(1c,10,32,00),I(00,00,00,07),I(82,1f,04,1f),I(04,1d,86,47),I(00,00,3d,04),I(05,00,00,00)};

  /* Byte-vector with size: 35 is_init: 0 index: 66 binding: primitive-make-slot */
  static const void *G002011[] = {I(43,03,24,00),B(mop_class ,51),I(26,00,00,00),I(00,00,00,06),I(01,1b,1f,04),I(1c,84,1d,03),I(22,02,2a,1f),I(03,82,02,1b),I(41,00,00,00),B(boot1 ,56),I(22,01,1d,1c),I(1c,26,00,00),I(00,00,00,03),I(1d,03,22,02),I(2a,1f,03,23),B(mop_defcl ,65),I(50,1f,03,1c),I(1c,26,00,00),I(00,00,00,05),I(1d,03,22,02),I(2a,1f,03,1f),I(05,1c,26,00),I(00,00,00,04),I(1d,03,22,02),I(2a,1f,05,24),B(mop_defcl ,6),I(3c,01,1f,04),I(1c,1c,82,1d),I(03,22,02,2a),I(1f,06,24,00),B(mop_defcl ,3),I(3c,01,1f,05),I(1c,1c,83,1d),I(03,22,02,2a),I(1f,05,45,09)};

  /* Byte-vector with size: 94 is_init: 1 index: 0 binding: initialize-mop-defcl */
  static const void *G002014[] = {I(87,25,00,00),B(mop_defcl ,1),I(24,00,00,00),B(mop_meth ,1),I(3e,0b,24,00),B(mop_meth ,0),I(3c,00,21,01),I(24,00,00,00),B(mop_gf ,1),I(3e,0b,24,00),B(mop_gf ,0),I(3c,00,21,01),I(24,00,00,00),B(mop_init ,1),I(3e,0b,24,00),B(mop_init ,0),I(3c,00,21,01),I(24,00,00,00),B(mop_class ,1),I(3e,0b,24,00),B(mop_class ,0),I(3c,00,21,01),I(24,00,00,00),B(mop_key ,1),I(3e,0b,24,00),B(mop_key ,0),I(3c,00,21,01),I(24,00,00,00),B(mop_inspect ,1),I(3e,0b,24,00),B(mop_inspect ,0),I(3c,00,21,01),I(24,00,00,00),B(mop_prim ,1),I(3e,0b,24,00),B(mop_prim ,0),I(3c,00,21,01),I(24,00,00,00),B(boot ,1),I(3e,0b,24,00),B(boot ,0),I(3c,00,21,01),I(23,00,00,00),B(mop_defcl ,67),I(23,00,00,00),B(mop_defcl ,66),I(3b,03,25,00),B(mop_defcl ,12),I(23,00,00,00),B(mop_defcl ,68),I(23,00,00,00),B(mop_defcl ,64),I(3b,fd,25,00),B(mop_defcl ,11),I(86,25,00,00),B(mop_defcl ,10),I(86,25,00,00),B(mop_defcl ,9),I(23,00,00,00),B(mop_defcl ,69),I(23,00,00,00),B(mop_defcl ,62),I(3b,02,25,00),B(mop_defcl ,8),I(23,00,00,00),B(mop_defcl ,70),I(23,00,00,00),B(mop_defcl ,59),I(3b,02,25,00),B(mop_defcl ,7),I(23,00,00,00),B(mop_defcl ,71),I(23,00,00,00),B(mop_defcl ,58),I(3b,01,25,00),B(mop_defcl ,6),I(86,25,00,00),B(mop_defcl ,5),I(86,25,00,00),B(mop_defcl ,4),I(23,00,00,00),B(mop_defcl ,72),I(23,00,00,00),B(mop_defcl ,56),I(3b,01,25,00),B(mop_defcl ,3),I(86,25,00,00),B(mop_defcl ,2),I(23,00,00,00),B(mop_defcl ,73),I(23,00,00,00),B(mop_defcl ,54),I(3b,00,3d,00),I(00,ac,00,00)};


  /* Initializations */
  eul_allocate_bytevector( G001920,G001919);
  eul_allocate_bytevector( G001922,G001921);
  eul_allocate_bytevector( G001924,G001923);
  eul_allocate_bytevector( G001926,G001925);
  eul_allocate_bytevector( G001928,G001927);
  eul_allocate_bytevector( G001930,G001929);
  eul_allocate_bytevector( G001932,G001931);
  eul_allocate_bytevector( G001934,G001933);
  eul_allocate_bytevector( G001936,G001935);
  eul_allocate_bytevector( G001938,G001937);
  eul_allocate_bytevector( G001940,G001939);
  eul_allocate_bytevector( G001942,G001941);
  eul_allocate_bytevector( G001944,G001943);
  eul_allocate_bytevector( G001946,G001945);
  eul_allocate_bytevector( G001948,G001947);
  eul_allocate_bytevector( G001950,G001949);
  eul_allocate_bytevector( G001952,G001951);
  eul_allocate_bytevector( G001954,G001953);
  eul_allocate_bytevector( G001956,G001955);
  eul_allocate_bytevector( G001958,G001957);
  eul_allocate_bytevector( G001960,G001959);
  eul_allocate_bytevector( G001962,G001961);
  eul_allocate_bytevector( G001964,G001963);
  eul_allocate_bytevector( G001966,G001965);
  eul_allocate_bytevector( G001968,G001967);
  eul_allocate_bytevector( G001970,G001969);
  eul_allocate_bytevector( G001972,G001971);
  eul_allocate_bytevector( G001974,G001973);
  eul_allocate_bytevector( G001976,G001975);
  eul_intern_symbol(sym_1979,"add-subclass");
  eul_intern_symbol(sym_1980,"remove-class");
  eul_intern_symbol(sym_1981,"slot-value-using-slot");
  eul_intern_symbol(sym_1982,"(method add-subclass)");
  eul_intern_symbol(sym_1983,"(method remove-class)");
  eul_intern_symbol(sym_1984,"(method slot-value-using-slot)");
  eul_intern_symbol(sym_1986,"setter");
  object_class(cons_1987) = eul_static_cons_class;
  eul_car(cons_1987) = sym_1981;
  eul_cdr(cons_1987) = eul_nil;
  object_class(cons_1985) = eul_static_cons_class;
  eul_car(cons_1985) = sym_1986;
  eul_intern_symbol(sym_1988,"(method (setter slot-value-using-slot))");
  eul_intern_symbol(sym_1989,"(setter slot-value)");
  eul_intern_symbol(sym_1990,"anonymous");
  eul_intern_symbol(sym_1991,"code");
  eul_allocate_bytevector( G001978,G001977);
  eul_allocate_bytevector( G001993,G001992);
  eul_allocate_bytevector( G001995,G001994);
  eul_allocate_bytevector( G001997,G001996);
  eul_allocate_bytevector( G001999,G001998);
  eul_allocate_bytevector( G002001,G002000);
  object_class(str_2004) = eul_static_string_class;
  eul_allocate_bytevector( G002003,G002002);
  eul_allocate_bytevector( G002006,G002005);
  eul_allocate_bytevector( G002008,G002007);
  eul_allocate_bytevector( G002010,G002009);
  eul_intern_keyword(key_2013,"required");
  eul_allocate_bytevector( G002012,G002011);
  eul_intern_symbol(sym_2016,"primitive-make-slot");
  eul_intern_symbol(sym_2017,"make-slotds");
  eul_intern_symbol(sym_2018,"find-slot");
  eul_intern_symbol(sym_2019,"slot-value");
  eul_intern_symbol(sym_2020,"predefined-reader");
  eul_intern_symbol(sym_2021,"predefined-writer");
  eul_intern_symbol(sym_2022,"top-level");
  eul_allocate_bytevector( G002015,G002014);

  /* Set local bindings */
  {
    int i;
    for (i = 2; i < 13; i++)
      mop_defcl_bindings[i] = eul_nil;
  }

  mop_defcl_bindings[ 13] = G001920;
  mop_defcl_bindings[ 14] = G001922;
  mop_defcl_bindings[ 15] = G001924;
  mop_defcl_bindings[ 16] = G001926;
  mop_defcl_bindings[ 17] = G001928;
  mop_defcl_bindings[ 18] = G001930;
  mop_defcl_bindings[ 19] = G001932;
  mop_defcl_bindings[ 20] = G001934;
  mop_defcl_bindings[ 21] = G001936;
  mop_defcl_bindings[ 22] = G001938;
  mop_defcl_bindings[ 23] = G001940;
  mop_defcl_bindings[ 24] = G001942;
  mop_defcl_bindings[ 25] = G001944;
  mop_defcl_bindings[ 26] = G001946;
  mop_defcl_bindings[ 27] = G001948;
  mop_defcl_bindings[ 28] = G001950;
  mop_defcl_bindings[ 29] = G001952;
  mop_defcl_bindings[ 30] = G001954;
  mop_defcl_bindings[ 31] = G001956;
  mop_defcl_bindings[ 32] = G001958;
  mop_defcl_bindings[ 33] = G001960;
  mop_defcl_bindings[ 34] = G001962;
  mop_defcl_bindings[ 35] = G001964;
  mop_defcl_bindings[ 36] = G001966;
  mop_defcl_bindings[ 37] = G001968;
  mop_defcl_bindings[ 38] = G001970;
  mop_defcl_bindings[ 39] = G001972;
  mop_defcl_bindings[ 40] = G001974;
  mop_defcl_bindings[ 41] = G001976;
  mop_defcl_bindings[ 42] = sym_1979;
  mop_defcl_bindings[ 43] = sym_1980;
  mop_defcl_bindings[ 44] = sym_1981;
  mop_defcl_bindings[ 45] = sym_1982;
  mop_defcl_bindings[ 46] = sym_1983;
  mop_defcl_bindings[ 47] = sym_1984;
  mop_defcl_bindings[ 48] = sym_1986;
  mop_defcl_bindings[ 49] = cons_1985;
  mop_defcl_bindings[ 50] = sym_1988;
  mop_defcl_bindings[ 51] = sym_1989;
  mop_defcl_bindings[ 52] = sym_1990;
  mop_defcl_bindings[ 53] = sym_1991;
  mop_defcl_bindings[ 54] = G001978;
  mop_defcl_bindings[ 55] = G001993;
  mop_defcl_bindings[ 56] = G001995;
  mop_defcl_bindings[ 57] = G001997;
  mop_defcl_bindings[ 58] = G001999;
  mop_defcl_bindings[ 59] = G002001;
  mop_defcl_bindings[ 60] = str_2004;
  mop_defcl_bindings[ 61] = G002003;
  mop_defcl_bindings[ 62] = G002006;
  mop_defcl_bindings[ 63] = G002008;
  mop_defcl_bindings[ 64] = G002010;
  mop_defcl_bindings[ 65] = key_2013;
  mop_defcl_bindings[ 66] = G002012;
  mop_defcl_bindings[ 1] = eul_nil;
  mop_defcl_bindings[ 67] = sym_2016;
  mop_defcl_bindings[ 68] = sym_2017;
  mop_defcl_bindings[ 69] = sym_2018;
  mop_defcl_bindings[ 70] = sym_2019;
  mop_defcl_bindings[ 71] = sym_2020;
  mop_defcl_bindings[ 72] = sym_2021;
  mop_defcl_bindings[ 73] = sym_2022;
  eul_allocate_lambda( mop_defcl_bindings[0], "initialize-mop-defcl", 0, G002015);

  }
}


/* eof */
