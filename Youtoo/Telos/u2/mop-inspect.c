/** ----------------------------------------------------------------------- **
 **                 Generated by EuLisp System 'youtoo'
 ** ----------------------------------------------------------------------- **
 **  Title: C source file of EuLisp module mop-inspect
 **  Copyright: See file mop-inspect.em
 ** ----------------------------------------------------------------------- **/

#include "eulisp.h"


/* Imported modules */
extern void initialize_module_boot();
extern void initialize_module_mop_prim();
extern void initialize_module_mop_class();
extern void initialize_module_mop_init();
extern LispRef mop_init_bindings[];
extern LispRef mop_prim_bindings[];
extern LispRef boot_bindings[];
extern LispRef boot1_bindings[];
extern LispRef mop_class_bindings[];

/* Module bindings with size 46 */
LispRef mop_inspect_bindings[46];

/* Foreign functions */

/* Initialize module only once */
static int is_initialized = 0;

/* Initialize module mop-inspect */
void initialize_module_mop_inspect()
{
  if (is_initialized) return;
  initialize_module_boot();
  initialize_module_mop_prim();
  initialize_module_mop_class();
  initialize_module_mop_init();
  eul_fast_table_set(eul_modules,"mop_inspect",(LispRef) mop_inspect_bindings);
  is_initialized = 1;
  {
  /* Declarations */
  LispRef sym_1078, sym_1077, sym_1076, sym_1075, sym_1074, sym_1073, sym_1072, sym_1071, sym_1070, sym_1069, sym_1068, sym_1067, sym_1066, G001065, G001063, G001061, G001059, G001057, G001055, G001053, G001050, G001048, G001046, G001044, G001042, sym_1040, G001039, G001037, sym_1035, G001034, G001032;

  /* Code vector and literal definitions */
  /* Byte-vector with size: 8 is_init: 0 index: 15 binding: (setter-primitive-slot-value) */
  static const void *G001031[] = {I(43,03,1d,04),I(1b,8a,04,02),I(1c,1f,04,1d),I(82,24,00,00),B(mop_inspect ,7),I(3c,04,1f,05),I(1c,1f,05,03),I(45,06,00,00)};

  /* Byte-vector with size: 24 is_init: 0 index: 17 binding: top-level */
  static const void *G001033[] = {I(a9,24,00,00),B(mop_class ,81),I(24,00,00,00),B(mop_class ,86),I(24,00,00,00),B(mop_class ,27),I(24,00,00,00),B(mop_class ,86),I(24,00,00,00),B(boot1 ,26),I(3c,04,1b,89),B(mop_inspect ,14),I(2a,24,00,00),B(boot1 ,42),I(24,00,00,00),B(boot1 ,42),I(3c,01,24,00),B(mop_inspect ,10),I(23,00,00,00),B(mop_inspect ,16),I(23,00,00,00),B(mop_inspect ,15),I(3b,03,1d,3d),I(02,02,45,02)};

  /* Byte-vector with size: 11 is_init: 0 index: 18 binding: anonymous */
  static const void *G001036[] = {I(aa,1b,12,1b),I(44,04,86,36),I(21,1c,10,1b),I(47,00,01,24),B(mop_inspect ,2),I(3c,02,1b,44),I(06,47,00,00),I(36,0a,1f,03),I(11,47,00,02),I(3d,01,04,22),I(02,45,02,00)};

  /* Byte-vector with size: 26 is_init: 0 index: 20 binding: subclass? */
  static const void *G001038[] = {I(ab,46,03,1c),I(48,00,00,1b),I(48,00,01,47),I(00,00,47,00),I(01,50,1b,44),I(04,87,36,4d),I(47,00,00,8a),I(09,02,47,00),I(01,8a,09,02),I(1c,44,04,1b),I(36,02,86,1b),I(44,10,1d,1d),I(24,00,00,00),B(mop_inspect ,9),I(3d,02,06,36),I(26,86,1b,48),I(00,02,23,00),B(mop_inspect ,19),I(23,00,00,00),B(mop_inspect ,18),I(3b,01,48,00),I(02,47,00,00),I(84,02,47,00),I(02,3d,01,07),I(22,01,22,03),I(45,03,00,00)};

  /* Byte-vector with size: 7 is_init: 0 index: 21 binding: generic-function? */
  static const void *G001041[] = {I(aa,1b,04,24),B(mop_class ,51),I(24,00,00,00),B(mop_inspect ,2),I(3c,02,1b,44),I(04,1c,36,02),I(86,45,02,00)};

  /* Byte-vector with size: 7 is_init: 0 index: 22 binding: class? */
  static const void *G001043[] = {I(aa,1b,04,24),B(mop_class ,86),I(24,00,00,00),B(mop_inspect ,2),I(3c,02,1b,44),I(04,1c,36,02),I(86,45,02,00)};

  /* Byte-vector with size: 1 is_init: 0 index: 23 binding: class-of */
  static const void *G001045[] = {I(aa,04,45,00)};

  /* Byte-vector with size: 3 is_init: 0 index: 24 binding: primitive-metaclass? */
  static const void *G001047[] = {I(aa,24,00,00),B(mop_inspect ,14),I(86,6c,45,00)};

  eul_allocate_static_string(str_1051, "slot ~a not found in class ~a", 29);
  /* Byte-vector with size: 21 is_init: 0 index: 26 binding: primitive-find-slot-position */
  static const void *G001049[] = {I(43,04,1c,12),I(1b,44,1b,86),I(23,00,00,00),B(mop_inspect ,25),I(1f,05,1f,07),I(24,00,00,00),B(boot ,13),I(3d,04,05,36),I(2f,1d,10,1b),I(84,02,1f,05),I(1c,50,1b,44),I(05,1f,04,36),I(1d,1f,05,11),I(1f,05,83,14),I(1f,09,1f,09),I(1f,03,1f,03),I(24,00,00,00),B(mop_inspect ,7),I(3d,04,0a,22),I(02,22,03,45),I(05,00,00,00)};

  /* Byte-vector with size: 7 is_init: 0 index: 27 binding: function? */
  static const void *G001052[] = {I(aa,1b,04,24),B(mop_class ,32),I(24,00,00,00),B(mop_inspect ,2),I(3c,02,1b,44),I(04,1c,36,02),I(86,45,02,00)};

  /* Byte-vector with size: 8 is_init: 0 index: 28 binding: subcode? */
  static const void *G001054[] = {I(ab,1c,10,1c),I(10,1a,1b,44),I(04,86,36,10),I(1c,11,1f,03),I(11,1a,1b,44),I(04,86,36,02),I(87,22,01,45),I(03,00,00,00)};

  /* Byte-vector with size: 7 is_init: 0 index: 29 binding: primitive-slot-value */
  static const void *G001056[] = {I(ab,1c,04,1b),I(8a,04,02,1c),I(1f,03,1d,82),I(24,00,00,00),B(mop_inspect ,7),I(3c,04,1f,04),I(1c,02,45,05)};

  /* Byte-vector with size: 15 is_init: 0 index: 30 binding: cpl-subclass? */
  static const void *G001058[] = {I(ab,1c,1c,50),I(1b,44,04,87),I(36,2e,1d,8a),I(09,02,1d,8a),I(09,02,1c,44),I(04,1b,36,02),I(86,1b,44,0e),I(1d,1d,24,00),B(mop_inspect ,9),I(3d,02,06,36),I(0d,1f,05,8a),I(06,02,1f,05),I(1c,86,6c,22),I(01,22,03,45),I(03,00,00,00)};

  /* Byte-vector with size: 7 is_init: 0 index: 31 binding: methodp */
  static const void *G001060[] = {I(aa,1b,04,24),B(mop_class ,25),I(24,00,00,00),B(mop_inspect ,2),I(3c,02,1b,44),I(04,1c,36,02),I(86,45,02,00)};

  /* Byte-vector with size: 7 is_init: 0 index: 32 binding: slotp */
  static const void *G001062[] = {I(aa,1b,04,24),B(mop_class ,57),I(24,00,00,00),B(mop_inspect ,2),I(3c,02,1b,44),I(04,1c,36,02),I(86,45,02,00)};

  /* Byte-vector with size: 102 is_init: 1 index: 0 binding: initialize-mop-inspect */
  static const void *G001064[] = {I(87,25,00,00),B(mop_inspect ,1),I(24,00,00,00),B(mop_init ,1),I(3e,0b,24,00),B(mop_init ,0),I(3c,00,21,01),I(24,00,00,00),B(mop_class ,1),I(3e,0b,24,00),B(mop_class ,0),I(3c,00,21,01),I(24,00,00,00),B(mop_prim ,1),I(3e,0b,24,00),B(mop_prim ,0),I(3c,00,21,01),I(24,00,00,00),B(boot ,1),I(3e,0b,24,00),B(boot ,0),I(3c,00,21,01),I(86,25,00,00),B(mop_inspect ,14),I(23,00,00,00),B(mop_inspect ,33),I(23,00,00,00),B(mop_inspect ,32),I(3b,01,25,00),B(mop_inspect ,13),I(23,00,00,00),B(mop_inspect ,34),I(23,00,00,00),B(mop_inspect ,31),I(3b,01,25,00),B(mop_inspect ,12),I(23,00,00,00),B(mop_inspect ,35),I(23,00,00,00),B(mop_inspect ,30),I(3b,02,25,00),B(mop_inspect ,11),I(23,00,00,00),B(mop_inspect ,36),I(23,00,00,00),B(mop_inspect ,29),I(3b,02,25,00),B(mop_inspect ,10),I(23,00,00,00),B(mop_inspect ,37),I(23,00,00,00),B(mop_inspect ,28),I(3b,02,25,00),B(mop_inspect ,9),I(23,00,00,00),B(mop_inspect ,38),I(23,00,00,00),B(mop_inspect ,27),I(3b,01,25,00),B(mop_inspect ,8),I(23,00,00,00),B(mop_inspect ,39),I(23,00,00,00),B(mop_inspect ,26),I(3b,04,25,00),B(mop_inspect ,7),I(23,00,00,00),B(mop_inspect ,40),I(23,00,00,00),B(mop_inspect ,24),I(3b,01,25,00),B(mop_inspect ,6),I(23,00,00,00),B(mop_inspect ,41),I(23,00,00,00),B(mop_inspect ,23),I(3b,01,25,00),B(mop_inspect ,5),I(23,00,00,00),B(mop_inspect ,42),I(23,00,00,00),B(mop_inspect ,22),I(3b,01,25,00),B(mop_inspect ,4),I(23,00,00,00),B(mop_inspect ,43),I(23,00,00,00),B(mop_inspect ,21),I(3b,01,25,00),B(mop_inspect ,3),I(23,00,00,00),B(mop_inspect ,44),I(23,00,00,00),B(mop_inspect ,20),I(3b,02,25,00),B(mop_inspect ,2),I(23,00,00,00),B(mop_inspect ,45),I(23,00,00,00),B(mop_inspect ,17),I(3b,00,3d,00),I(00,ac,00,00)};


  /* Initializations */
  eul_allocate_bytevector( G001032,G001031);
  eul_intern_symbol(sym_1035,"(setter primitive-slot-value)");
  eul_allocate_bytevector( G001034,G001033);
  eul_allocate_bytevector( G001037,G001036);
  eul_intern_symbol(sym_1040,"anonymous");
  eul_allocate_bytevector( G001039,G001038);
  eul_allocate_bytevector( G001042,G001041);
  eul_allocate_bytevector( G001044,G001043);
  eul_allocate_bytevector( G001046,G001045);
  eul_allocate_bytevector( G001048,G001047);
  object_class(str_1051) = eul_static_string_class;
  eul_allocate_bytevector( G001050,G001049);
  eul_allocate_bytevector( G001053,G001052);
  eul_allocate_bytevector( G001055,G001054);
  eul_allocate_bytevector( G001057,G001056);
  eul_allocate_bytevector( G001059,G001058);
  eul_allocate_bytevector( G001061,G001060);
  eul_allocate_bytevector( G001063,G001062);
  eul_intern_symbol(sym_1066,"slotp");
  eul_intern_symbol(sym_1067,"methodp");
  eul_intern_symbol(sym_1068,"cpl-subclass?");
  eul_intern_symbol(sym_1069,"primitive-slot-value");
  eul_intern_symbol(sym_1070,"subcode?");
  eul_intern_symbol(sym_1071,"function?");
  eul_intern_symbol(sym_1072,"primitive-find-slot-position");
  eul_intern_symbol(sym_1073,"primitive-metaclass?");
  eul_intern_symbol(sym_1074,"class-of");
  eul_intern_symbol(sym_1075,"class?");
  eul_intern_symbol(sym_1076,"generic-function?");
  eul_intern_symbol(sym_1077,"subclass?");
  eul_intern_symbol(sym_1078,"top-level");
  eul_allocate_bytevector( G001065,G001064);

  /* Set local bindings */
  {
    int i;
    for (i = 2; i < 15; i++)
      mop_inspect_bindings[i] = eul_nil;
  }

  mop_inspect_bindings[ 15] = G001032;
  mop_inspect_bindings[ 16] = sym_1035;
  mop_inspect_bindings[ 17] = G001034;
  mop_inspect_bindings[ 18] = G001037;
  mop_inspect_bindings[ 19] = sym_1040;
  mop_inspect_bindings[ 20] = G001039;
  mop_inspect_bindings[ 21] = G001042;
  mop_inspect_bindings[ 22] = G001044;
  mop_inspect_bindings[ 23] = G001046;
  mop_inspect_bindings[ 24] = G001048;
  mop_inspect_bindings[ 25] = str_1051;
  mop_inspect_bindings[ 26] = G001050;
  mop_inspect_bindings[ 27] = G001053;
  mop_inspect_bindings[ 28] = G001055;
  mop_inspect_bindings[ 29] = G001057;
  mop_inspect_bindings[ 30] = G001059;
  mop_inspect_bindings[ 31] = G001061;
  mop_inspect_bindings[ 32] = G001063;
  mop_inspect_bindings[ 1] = eul_nil;
  mop_inspect_bindings[ 33] = sym_1066;
  mop_inspect_bindings[ 34] = sym_1067;
  mop_inspect_bindings[ 35] = sym_1068;
  mop_inspect_bindings[ 36] = sym_1069;
  mop_inspect_bindings[ 37] = sym_1070;
  mop_inspect_bindings[ 38] = sym_1071;
  mop_inspect_bindings[ 39] = sym_1072;
  mop_inspect_bindings[ 40] = sym_1073;
  mop_inspect_bindings[ 41] = sym_1074;
  mop_inspect_bindings[ 42] = sym_1075;
  mop_inspect_bindings[ 43] = sym_1076;
  mop_inspect_bindings[ 44] = sym_1077;
  mop_inspect_bindings[ 45] = sym_1078;
  eul_allocate_lambda( mop_inspect_bindings[0], "initialize-mop-inspect", 0, G001065);

  }
}


/* eof */