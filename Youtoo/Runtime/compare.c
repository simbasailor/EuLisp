/** ----------------------------------------------------------------------- **
 **                 Generated by EuLisp System 'youtoo'
 ** ----------------------------------------------------------------------- **
 **  Description: C source file of EuLisp module compare
 **  Copyright: See file compare.em
 ** ----------------------------------------------------------------------- **/

#include "eulisp.h"


/* Imported modules */
extern void initialize_module_telos();
extern void initialize_module_callback();
extern LispRef telos_bindings[];
extern LispRef callback_bindings[];
extern LispRef mop_meth_bindings[];
extern LispRef boot_bindings[];
extern LispRef mop_gf_bindings[];
extern LispRef boot1_bindings[];
extern LispRef mop_class_bindings[];

/* Module bindings with size 40 */
LispRef compare_bindings[40];

/* Foreign functions */

/* Initialize module only once */
static int is_initialized = 0;

/* Initialize module compare */
void initialize_module_compare()
{
  if (is_initialized) return;
  initialize_module_telos();
  initialize_module_callback();
  eul_fast_table_set(eul_modules,"compare",(LispRef) compare_bindings);
  is_initialized = 1;
  {
  /* Declarations */
  LispRef sym_1245, sym_1244, sym_1243, sym_1242, sym_1241, sym_1240, sym_1239, sym_1238, sym_1237, G001236, G001234, G001232, G001230, G001228, G001226, G001224, G001222, G001220, G001218, G001216, G001214, sym_1212, G001211, G001209, sym_1207, sym_1206, sym_1205, G001204, G001202;

  /* Code vector and literal definitions */
  /* Byte-vector with size: 1 is_init: 0 index: 12 binding: (method-binary=) */
  static const void *G001201[] = {I(ab,51,45,00)};

  /* Byte-vector with size: 88 is_init: 0 index: 16 binding: top-level */
  static const void *G001203[] = {I(a9,84,24,00),B(mop_class ,20),I(24,00,00,00),B(mop_class ,20),I(24,00,00,00),B(boot1 ,40),I(3c,03,24,00),B(boot1 ,25),I(3c,00,24,00),B(boot1 ,25),I(3c,00,23,00),B(compare ,13),I(1f,03,24,00),B(mop_class ,15),I(24,00,00,00),B(mop_class ,55),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,1b,89),B(compare ,9),I(2a,84,24,00),B(mop_class ,20),I(24,00,00,00),B(mop_class ,20),I(24,00,00,00),B(boot1 ,40),I(3c,03,24,00),B(boot1 ,25),I(3c,00,24,00),B(boot1 ,25),I(3c,00,23,00),B(compare ,14),I(1f,03,24,00),B(mop_class ,15),I(24,00,00,00),B(mop_class ,55),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,1b,89),B(compare ,6),I(2a,24,00,00),B(compare ,9),I(2a,24,00,00),B(compare ,9),I(26,00,00,00),I(00,00,00,03),I(02,84,86,86),I(24,00,00,00),B(boot1 ,40),I(3c,03,24,00),B(boot1 ,25),I(3c,00,24,00),B(compare ,9),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,7),I(3c,02,1f,04),I(1f,04,23,00),B(compare ,15),I(23,00,00,00),B(compare ,12),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(compare ,9),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(compare ,6),I(2a,83,26,00),I(00,00,00,05),I(14,24,00,00),B(compare ,9),I(24,00,00,00),B(callback ,4),I(3c,02,2a,83),I(26,00,00,00),I(00,00,00,06),I(14,24,00,00),B(compare ,6),I(24,00,00,00),B(callback ,4),I(3d,02,0e,45),I(0e,00,00,00)};

  /* Byte-vector with size: 17 is_init: 0 index: 17 binding: anonymous */
  static const void *G001208[] = {I(aa,1b,12,1b),I(34,00,00,00),I(00,00,00,10),I(87,32,00,00),I(00,00,00,32),I(1c,10,47,00),I(00,1c,24,00),B(compare ,9),I(3c,02,12,1b),I(34,00,00,00),I(00,00,00,10),I(86,32,00,00),I(00,00,00,10),I(1f,03,11,47),I(00,01,3d,01),I(04,22,02,45),I(02,00,00,00)};

  /* Byte-vector with size: 11 is_init: 0 index: 19 binding: = */
  static const void *G001210[] = {I(43,fe,46,02),I(1c,48,00,00),I(86,1b,48,00),I(01,23,00,00),B(compare ,18),I(23,00,00,00),B(compare ,17),I(3b,01,48,00),I(01,1c,47,00),I(01,3d,01,03),I(45,03,00,00)};

  /* Byte-vector with size: 16 is_init: 0 index: 20 binding: anonymous */
  static const void *G001213[] = {I(aa,1b,11,1b),I(12,1b,34,00),I(00,00,00,0e),I(87,32,00,00),I(00,00,00,31),I(1d,10,1d,10),I(1c,1c,24,00),B(compare ,6),I(3c,02,12,1b),I(34,00,00,00),I(00,00,00,10),I(86,32,00,00),I(00,00,00,0f),I(1f,04,47,00),I(00,3d,01,06),I(22,03,45,03)};

  /* Byte-vector with size: 10 is_init: 0 index: 21 binding: < */
  static const void *G001215[] = {I(43,fe,46,01),I(86,1b,48,00),I(00,23,00,00),B(compare ,18),I(23,00,00,00),B(compare ,20),I(3b,01,48,00),I(00,1d,1d,0f),I(47,00,00,3d),I(01,03,45,03)};

  /* Byte-vector with size: 7 is_init: 0 index: 22 binding: > */
  static const void *G001217[] = {I(a8,24,00,00),B(boot ,25),I(3c,01,24,00),B(compare ,3),I(1c,24,00,00),B(boot ,5),I(3d,02,01,00)};

  /* Byte-vector with size: 19 is_init: 0 index: 23 binding: anonymous */
  static const void *G001219[] = {I(ab,1c,12,1b),I(34,00,00,00),I(00,00,00,10),I(1c,32,00,00),I(00,00,00,3a),I(1d,10,1f,03),I(11,1f,03,1d),I(24,00,00,00),B(compare ,6),I(3c,02,1b,34),I(00,00,00,15),I(1c,1f,03,47),I(00,00,3d,02),I(06,32,00,00),I(00,00,00,10),I(1c,1f,05,47),I(00,00,3d,02),I(06,22,03,45),I(03,00,00,00)};

  /* Byte-vector with size: 10 is_init: 0 index: 24 binding: max */
  static const void *G001221[] = {I(43,fe,46,01),I(86,1b,48,00),I(00,23,00,00),B(compare ,18),I(23,00,00,00),B(compare ,23),I(3b,02,48,00),I(00,1c,1f,03),I(47,00,00,3d),I(02,03,45,03)};

  /* Byte-vector with size: 6 is_init: 0 index: 25 binding: != */
  static const void *G001223[] = {I(43,fe,24,00),B(compare ,2),I(1d,1d,24,00),B(boot ,5),I(3c,03,12,45),I(02,00,00,00)};

  /* Byte-vector with size: 23 is_init: 0 index: 26 binding: anonymous */
  static const void *G001225[] = {I(aa,1b,11,1b),I(12,1b,34,00),I(00,00,00,0e),I(87,32,00,00),I(00,00,00,4c),I(1d,10,1d,10),I(1c,1c,24,00),B(compare ,6),I(3c,02,12,1b),I(34,00,00,00),I(00,00,00,18),I(1d,1d,24,00),B(compare ,9),I(3c,02,12,32),I(00,00,00,06),I(86,22,03,1b),I(34,00,00,00),I(00,00,00,10),I(86,32,00,00),I(00,00,00,0e),I(1d,47,00,00),I(3d,01,04,22),I(01,45,03,00)};

  /* Byte-vector with size: 10 is_init: 0 index: 27 binding: <= */
  static const void *G001227[] = {I(43,fe,46,01),I(86,1b,48,00),I(00,23,00,00),B(compare ,18),I(23,00,00,00),B(compare ,26),I(3b,01,48,00),I(00,1d,1d,0f),I(47,00,00,3d),I(01,03,45,03)};

  /* Byte-vector with size: 19 is_init: 0 index: 28 binding: anonymous */
  static const void *G001229[] = {I(ab,1c,12,1b),I(34,00,00,00),I(00,00,00,10),I(1c,32,00,00),I(00,00,00,3a),I(1d,10,1f,03),I(11,1f,03,1d),I(24,00,00,00),B(compare ,6),I(3c,02,1b,34),I(00,00,00,15),I(1c,1f,05,47),I(00,00,3d,02),I(06,32,00,00),I(00,00,00,10),I(1c,1f,03,47),I(00,00,3d,02),I(06,22,03,45),I(03,00,00,00)};

  /* Byte-vector with size: 10 is_init: 0 index: 29 binding: min */
  static const void *G001231[] = {I(43,fe,46,01),I(86,1b,48,00),I(00,23,00,00),B(compare ,18),I(23,00,00,00),B(compare ,28),I(3b,02,48,00),I(00,1c,1f,03),I(47,00,00,3d),I(02,03,45,03)};

  /* Byte-vector with size: 7 is_init: 0 index: 30 binding: >= */
  static const void *G001233[] = {I(a8,24,00,00),B(boot ,25),I(3c,01,24,00),B(compare ,8),I(1c,24,00,00),B(boot ,5),I(3d,02,01,00)};

  /* Byte-vector with size: 70 is_init: 1 index: 0 binding: initialize-compare */
  static const void *G001235[] = {I(87,25,00,00),B(compare ,1),I(24,00,00,00),B(callback ,1),I(3e,0b,24,00),B(callback ,0),I(3c,00,21,01),I(24,00,00,00),B(telos ,1),I(3e,0b,24,00),B(telos ,0),I(3c,00,21,01),I(23,00,00,00),B(compare ,31),I(23,00,00,00),B(compare ,30),I(3b,ff,25,00),B(compare ,11),I(23,00,00,00),B(compare ,32),I(23,00,00,00),B(compare ,29),I(3b,fe,25,00),B(compare ,10),I(86,25,00,00),B(compare ,9),I(23,00,00,00),B(compare ,33),I(23,00,00,00),B(compare ,27),I(3b,fe,25,00),B(compare ,8),I(23,00,00,00),B(compare ,34),I(23,00,00,00),B(compare ,25),I(3b,fe,25,00),B(compare ,7),I(86,25,00,00),B(compare ,6),I(23,00,00,00),B(compare ,35),I(23,00,00,00),B(compare ,24),I(3b,fe,25,00),B(compare ,5),I(23,00,00,00),B(compare ,36),I(23,00,00,00),B(compare ,22),I(3b,ff,25,00),B(compare ,4),I(23,00,00,00),B(compare ,37),I(23,00,00,00),B(compare ,21),I(3b,fe,25,00),B(compare ,3),I(23,00,00,00),B(compare ,38),I(23,00,00,00),B(compare ,19),I(3b,fe,25,00),B(compare ,2),I(23,00,00,00),B(compare ,39),I(23,00,00,00),B(compare ,16),I(3b,00,3d,00),I(00,ac,00,00)};


  /* Initializations */
  eul_allocate_bytevector( G001202,G001201);
  eul_intern_symbol(sym_1205,"binary=");
  eul_intern_symbol(sym_1206,"binary<");
  eul_intern_symbol(sym_1207,"(method binary=)");
  eul_allocate_bytevector( G001204,G001203);
  eul_allocate_bytevector( G001209,G001208);
  eul_intern_symbol(sym_1212,"anonymous");
  eul_allocate_bytevector( G001211,G001210);
  eul_allocate_bytevector( G001214,G001213);
  eul_allocate_bytevector( G001216,G001215);
  eul_allocate_bytevector( G001218,G001217);
  eul_allocate_bytevector( G001220,G001219);
  eul_allocate_bytevector( G001222,G001221);
  eul_allocate_bytevector( G001224,G001223);
  eul_allocate_bytevector( G001226,G001225);
  eul_allocate_bytevector( G001228,G001227);
  eul_allocate_bytevector( G001230,G001229);
  eul_allocate_bytevector( G001232,G001231);
  eul_allocate_bytevector( G001234,G001233);
  eul_intern_symbol(sym_1237,">=");
  eul_intern_symbol(sym_1238,"min");
  eul_intern_symbol(sym_1239,"<=");
  eul_intern_symbol(sym_1240,"!=");
  eul_intern_symbol(sym_1241,"max");
  eul_intern_symbol(sym_1242,">");
  eul_intern_symbol(sym_1243,"<");
  eul_intern_symbol(sym_1244,"=");
  eul_intern_symbol(sym_1245,"top-level");
  eul_allocate_bytevector( G001236,G001235);

  /* Set local bindings */
  {
    int i;
    for (i = 2; i < 12; i++)
      compare_bindings[i] = eul_nil;
  }

  compare_bindings[ 12] = G001202;
  compare_bindings[ 13] = sym_1205;
  compare_bindings[ 14] = sym_1206;
  compare_bindings[ 15] = sym_1207;
  compare_bindings[ 16] = G001204;
  compare_bindings[ 17] = G001209;
  compare_bindings[ 18] = sym_1212;
  compare_bindings[ 19] = G001211;
  compare_bindings[ 20] = G001214;
  compare_bindings[ 21] = G001216;
  compare_bindings[ 22] = G001218;
  compare_bindings[ 23] = G001220;
  compare_bindings[ 24] = G001222;
  compare_bindings[ 25] = G001224;
  compare_bindings[ 26] = G001226;
  compare_bindings[ 27] = G001228;
  compare_bindings[ 28] = G001230;
  compare_bindings[ 29] = G001232;
  compare_bindings[ 30] = G001234;
  compare_bindings[ 1] = eul_nil;
  compare_bindings[ 31] = sym_1237;
  compare_bindings[ 32] = sym_1238;
  compare_bindings[ 33] = sym_1239;
  compare_bindings[ 34] = sym_1240;
  compare_bindings[ 35] = sym_1241;
  compare_bindings[ 36] = sym_1242;
  compare_bindings[ 37] = sym_1243;
  compare_bindings[ 38] = sym_1244;
  compare_bindings[ 39] = sym_1245;
  eul_allocate_lambda( compare_bindings[0], "initialize-compare", 0, G001236);

  }
}


/* eof */
