/** ----------------------------------------------------------------------- **
 **                 Generated by EuLisp System 'youtoo'
 ** ----------------------------------------------------------------------- **
 **  Description: C source file of EuLisp module character
 **  Copyright: See file character.em
 ** ----------------------------------------------------------------------- **/

#include "eulisp.h"


/* Imported modules */
extern void initialize_module_telos();
extern void initialize_module_compare();
extern void initialize_module_collect();
extern void initialize_module_string();
extern LispRef collect_bindings[];
extern LispRef telos_bindings[];
extern LispRef string_bindings[];
extern LispRef mop_meth_bindings[];
extern LispRef boot_bindings[];
extern LispRef compare_bindings[];
extern LispRef mop_gf_bindings[];
extern LispRef boot1_bindings[];
extern LispRef mop_class_bindings[];

/* Module bindings with size 54 */
LispRef character_bindings[54];

/* Foreign functions */
static LispRef ff_stub_tolower1022 (Stack *reg_value_stack, LispRef *sreg_value_sp, LispRef *sreg_value_sb)
{
  LispRef G001078, res;

  POPVAL1(G001078);
  FF_RES_CONVERT1(res,tolower(FF_ARG_CONVERT1(G001078)));
  return res;
}

static LispRef ff_stub_toupper1023 (Stack *reg_value_stack, LispRef *sreg_value_sp, LispRef *sreg_value_sb)
{
  LispRef G001079, res;

  POPVAL1(G001079);
  FF_RES_CONVERT1(res,toupper(FF_ARG_CONVERT1(G001079)));
  return res;
}

static LispRef ff_stub_isalpha1024 (Stack *reg_value_stack, LispRef *sreg_value_sp, LispRef *sreg_value_sb)
{
  LispRef G001080, res;

  POPVAL1(G001080);
  FF_RES_CONVERT5(res,isalpha(FF_ARG_CONVERT1(G001080)));
  return res;
}

static LispRef ff_stub_isalnum1025 (Stack *reg_value_stack, LispRef *sreg_value_sp, LispRef *sreg_value_sb)
{
  LispRef G001081, res;

  POPVAL1(G001081);
  FF_RES_CONVERT5(res,isalnum(FF_ARG_CONVERT1(G001081)));
  return res;
}

static LispRef ff_stub_isupper1026 (Stack *reg_value_stack, LispRef *sreg_value_sp, LispRef *sreg_value_sb)
{
  LispRef G001082, res;

  POPVAL1(G001082);
  FF_RES_CONVERT5(res,isupper(FF_ARG_CONVERT1(G001082)));
  return res;
}

static LispRef ff_stub_islower1027 (Stack *reg_value_stack, LispRef *sreg_value_sp, LispRef *sreg_value_sb)
{
  LispRef G001083, res;

  POPVAL1(G001083);
  FF_RES_CONVERT5(res,islower(FF_ARG_CONVERT1(G001083)));
  return res;
}

static LispRef ff_stub_isdigit1028 (Stack *reg_value_stack, LispRef *sreg_value_sp, LispRef *sreg_value_sb)
{
  LispRef G001084, res;

  POPVAL1(G001084);
  FF_RES_CONVERT5(res,isdigit(FF_ARG_CONVERT1(G001084)));
  return res;
}

static LispRef ff_stub_isgraph1029 (Stack *reg_value_stack, LispRef *sreg_value_sp, LispRef *sreg_value_sb)
{
  LispRef G001085, res;

  POPVAL1(G001085);
  FF_RES_CONVERT5(res,isgraph(FF_ARG_CONVERT1(G001085)));
  return res;
}


/* Initialize module only once */
static int is_initialized = 0;

/* Initialize module character */
void initialize_module_character()
{
  if (is_initialized) return;
  initialize_module_telos();
  initialize_module_compare();
  initialize_module_collect();
  initialize_module_string();
  eul_fast_table_set(eul_modules,"character",(LispRef) character_bindings);
  is_initialized = 1;
  {
  /* Declarations */
  LispRef sym_1077, sym_1076, sym_1075, sym_1074, sym_1073, sym_1072, sym_1071, sym_1070, G001069, key_1067, key_1066, G001065, G001063, G001061, G001059, G001057, G001055, G001053, sym_1051, sym_1049, sym_1047, sym_1046, sym_1045, key_1044, key_1043, key_1042, sym_1041, key_1040, sym_1039, sym_1038, G001037, G001035, G001033, G001031;

  /* Code vector and literal definitions */
  /* Byte-vector with size: 3 is_init: 0 index: 20 binding: (method-as-uppercase) */
  static const void *G001030[] = {I(aa,41,00,00),B(character ,13),I(45,01,00,00)};

  /* Byte-vector with size: 3 is_init: 0 index: 21 binding: (method-as-lowercase) */
  static const void *G001032[] = {I(aa,41,00,00),B(character ,12),I(45,01,00,00)};

  /* Byte-vector with size: 41 is_init: 0 index: 22 binding: (method-binary<) */
  static const void *G001034[] = {I(ab,1c,24,00),B(character ,2),I(3c,01,1b,34),I(00,00,00,15),I(1c,24,00,00),B(character ,2),I(3c,01,32,00),I(00,00,00,07),I(86,1b,34,00),I(00,00,00,12),I(1f,03,62,1f),I(03,62,1a,32),I(00,00,00,72),I(1f,03,24,00),B(character ,9),I(3c,01,1b,34),I(00,00,00,15),I(1f,03,24,00),B(character ,9),I(3c,01,32,00),I(00,00,00,07),I(86,1b,34,00),I(00,00,00,12),I(1f,05,62,1f),I(05,62,1a,32),I(00,00,00,3c),I(1f,05,24,00),B(character ,7),I(3c,01,1b,34),I(00,00,00,15),I(1f,05,24,00),B(character ,7),I(3c,01,32,00),I(00,00,00,07),I(86,1b,34,00),I(00,00,00,12),I(1f,07,62,1f),I(07,62,1a,32),I(00,00,00,06),I(86,22,02,22),I(02,45,04,00)};

  eul_allocate_static_cons(cons_1050, NULL, NULL);
  eul_allocate_static_cons(cons_1048, NULL, eul_as_static(cons_1050));
  /* Byte-vector with size: 189 is_init: 0 index: 36 binding: top-level */
  static const void *G001036[] = {I(a9,28,0a,1b),I(89,00,00,00),B(character ,5),I(2a,83,24,00),B(mop_class ,20),I(24,00,00,00),B(boot1 ,40),I(3c,02,24,00),B(boot1 ,25),I(3c,00,24,00),B(boot1 ,25),I(3c,00,23,00),B(character ,23),I(1f,03,24,00),B(mop_class ,15),I(24,00,00,00),B(mop_class ,55),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,1b,89),B(character ,3),I(2a,83,24,00),B(mop_class ,20),I(24,00,00,00),B(boot1 ,40),I(3c,02,24,00),B(boot1 ,25),I(3c,00,24,00),B(boot1 ,25),I(3c,00,23,00),B(character ,24),I(1f,03,24,00),B(mop_class ,15),I(24,00,00,00),B(mop_class ,55),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,1b,89),B(character ,6),I(2a,24,00,00),B(character ,5),I(24,00,00,00),B(mop_class ,70),I(05,2a,24,00),B(mop_class ,20),I(24,00,00,00),B(boot1 ,25),I(3c,01,24,00),B(boot1 ,25),I(3c,00,23,00),B(character ,25),I(23,00,00,00),B(character ,26),I(23,00,00,00),B(character ,27),I(1f,04,23,00),B(character ,28),I(1f,05,23,00),B(character ,29),I(86,24,00,00),B(boot1 ,25),I(3c,08,24,00),B(character ,5),I(1c,24,00,00),B(mop_gf ,12),I(3c,02,2a,24),B(character ,5),I(2a,24,00,00),B(compare ,6),I(26,00,00,00),I(00,00,00,03),I(02,84,24,00),B(character ,5),I(24,00,00,00),B(character ,5),I(24,00,00,00),B(boot1 ,40),I(3c,03,24,00),B(boot1 ,25),I(3c,00,24,00),B(compare ,6),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,7),I(3c,02,1f,04),I(1f,04,23,00),B(character ,30),I(23,00,00,00),B(character ,22),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(compare ,6),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(character ,3),I(2a,24,00,00),B(character ,6),I(2a,24,00,00),B(character ,3),I(26,00,00,00),I(00,00,00,03),I(02,83,24,00),B(character ,5),I(24,00,00,00),B(boot1 ,40),I(3c,02,24,00),B(boot1 ,25),I(3c,00,24,00),B(character ,3),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,7),I(3c,02,1f,04),I(1f,04,23,00),B(character ,31),I(23,00,00,00),B(character ,21),I(3b,01,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(character ,3),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(character ,6),I(26,00,00,00),I(00,00,00,03),I(02,83,24,00),B(character ,5),I(24,00,00,00),B(boot1 ,40),I(3c,02,24,00),B(boot1 ,25),I(3c,00,24,00),B(character ,6),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,7),I(3c,02,1f,04),I(1f,04,23,00),B(character ,32),I(23,00,00,00),B(character ,20),I(3b,01,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(character ,6),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(mop_class ,13),I(24,00,00,00),B(boot1 ,42),I(3c,01,83,24),B(mop_class ,20),I(24,00,00,00),B(boot1 ,40),I(3c,02,24,00),B(boot1 ,25),I(3c,00,24,00),B(boot1 ,25),I(3c,00,23,00),B(character ,35),I(1f,03,24,00),B(mop_class ,15),I(24,00,00,00),B(mop_class ,55),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,24,00),B(character ,5),I(1c,1f,06,3c),I(02,2a,24,00),B(character ,5),I(24,00,00,00),B(mop_class ,13),I(3d,01,23,45),I(23,00,00,00)};

  /* Byte-vector with size: 7 is_init: 0 index: 37 binding: uppercase? */
  static const void *G001052[] = {I(aa,1b,41,00),B(character ,16),I(22,01,1b,34),I(00,00,00,0d),I(1c,32,00,00),I(00,00,00,08),I(86,45,02,00)};

  /* Byte-vector with size: 7 is_init: 0 index: 38 binding: alphap */
  static const void *G001054[] = {I(aa,1b,41,00),B(character ,14),I(22,01,1b,34),I(00,00,00,0d),I(1c,32,00,00),I(00,00,00,08),I(86,45,02,00)};

  /* Byte-vector with size: 7 is_init: 0 index: 39 binding: digit? */
  static const void *G001056[] = {I(aa,1b,41,00),B(character ,18),I(22,01,1b,34),I(00,00,00,0d),I(1c,32,00,00),I(00,00,00,08),I(86,45,02,00)};

  /* Byte-vector with size: 7 is_init: 0 index: 40 binding: alnump */
  static const void *G001058[] = {I(aa,1b,41,00),B(character ,15),I(22,01,1b,34),I(00,00,00,0d),I(1c,32,00,00),I(00,00,00,08),I(86,45,02,00)};

  /* Byte-vector with size: 7 is_init: 0 index: 41 binding: lowercase? */
  static const void *G001060[] = {I(aa,1b,41,00),B(character ,17),I(22,01,1b,34),I(00,00,00,0d),I(1c,32,00,00),I(00,00,00,08),I(86,45,02,00)};

  /* Byte-vector with size: 7 is_init: 0 index: 42 binding: graph? */
  static const void *G001062[] = {I(aa,1b,41,00),B(character ,19),I(22,01,1b,34),I(00,00,00,0d),I(1c,32,00,00),I(00,00,00,08),I(86,45,02,00)};

  /* Byte-vector with size: 9 is_init: 0 index: 45 binding: character-as-string */
  static const void *G001064[] = {I(aa,24,00,00),B(string ,13),I(23,00,00,00),B(character ,43),I(83,23,00,00),B(character ,44),I(1f,04,24,00),B(mop_gf ,2),I(3d,05,01,00)};

  /* Byte-vector with size: 76 is_init: 1 index: 0 binding: initialize-character */
  static const void *G001068[] = {I(87,25,00,00),B(character ,1),I(24,00,00,00),B(string ,1),I(3e,0b,24,00),B(string ,0),I(3c,00,21,01),I(24,00,00,00),B(collect ,1),I(3e,0b,24,00),B(collect ,0),I(3c,00,21,01),I(24,00,00,00),B(compare ,1),I(3e,0b,24,00),B(compare ,0),I(3c,00,21,01),I(24,00,00,00),B(telos ,1),I(3e,0b,24,00),B(telos ,0),I(3c,00,21,01),I(23,00,00,00),B(character ,46),I(23,00,00,00),B(character ,45),I(3b,01,25,00),B(character ,11),I(23,00,00,00),B(character ,47),I(23,00,00,00),B(character ,42),I(3b,01,25,00),B(character ,10),I(23,00,00,00),B(character ,48),I(23,00,00,00),B(character ,41),I(3b,01,25,00),B(character ,9),I(23,00,00,00),B(character ,49),I(23,00,00,00),B(character ,40),I(3b,01,25,00),B(character ,8),I(23,00,00,00),B(character ,50),I(23,00,00,00),B(character ,39),I(3b,01,25,00),B(character ,7),I(86,25,00,00),B(character ,6),I(86,25,00,00),B(character ,5),I(23,00,00,00),B(character ,51),I(23,00,00,00),B(character ,38),I(3b,01,25,00),B(character ,4),I(86,25,00,00),B(character ,3),I(23,00,00,00),B(character ,52),I(23,00,00,00),B(character ,37),I(3b,01,25,00),B(character ,2),I(23,00,00,00),B(character ,53),I(23,00,00,00),B(character ,36),I(3b,00,3d,00),I(00,ac,00,00)};


  /* Initializations */
  eul_allocate_bytevector( G001031,G001030);
  eul_allocate_bytevector( G001033,G001032);
  eul_allocate_bytevector( G001035,G001034);
  eul_intern_symbol(sym_1038,"as-lowercase");
  eul_intern_symbol(sym_1039,"as-uppercase");
  eul_intern_keyword(key_1040,"name");
  eul_intern_symbol(sym_1041,"character");
  eul_intern_keyword(key_1042,"direct-superclasses");
  eul_intern_keyword(key_1043,"direct-slots");
  eul_intern_keyword(key_1044,"direct-keywords");
  eul_intern_symbol(sym_1045,"(method binary<)");
  eul_intern_symbol(sym_1046,"(method as-lowercase)");
  eul_intern_symbol(sym_1047,"(method as-uppercase)");
  eul_intern_symbol(sym_1049,"converter");
  eul_intern_symbol(sym_1051,"<character>");
  object_class(cons_1050) = eul_static_cons_class;
  eul_car(cons_1050) = sym_1051;
  eul_cdr(cons_1050) = eul_nil;
  object_class(cons_1048) = eul_static_cons_class;
  eul_car(cons_1048) = sym_1049;
  eul_allocate_bytevector( G001037,G001036);
  eul_allocate_bytevector( G001053,G001052);
  eul_allocate_bytevector( G001055,G001054);
  eul_allocate_bytevector( G001057,G001056);
  eul_allocate_bytevector( G001059,G001058);
  eul_allocate_bytevector( G001061,G001060);
  eul_allocate_bytevector( G001063,G001062);
  eul_intern_keyword(key_1066,"size");
  eul_intern_keyword(key_1067,"fill-value");
  eul_allocate_bytevector( G001065,G001064);
  eul_intern_symbol(sym_1070,"character-as-string");
  eul_intern_symbol(sym_1071,"graph?");
  eul_intern_symbol(sym_1072,"lowercase?");
  eul_intern_symbol(sym_1073,"alnump");
  eul_intern_symbol(sym_1074,"digit?");
  eul_intern_symbol(sym_1075,"alphap");
  eul_intern_symbol(sym_1076,"uppercase?");
  eul_intern_symbol(sym_1077,"top-level");
  eul_allocate_bytevector( G001069,G001068);

  /* Set local bindings */
  {
    int i;
    for (i = 2; i < 12; i++)
      character_bindings[i] = eul_nil;
  }

  character_bindings[ 12] = (LispRef) (LispRef (*) (Stack *, LispRef *, LispRef *)) ff_stub_tolower1022;
  character_bindings[ 13] = (LispRef) (LispRef (*) (Stack *, LispRef *, LispRef *)) ff_stub_toupper1023;
  character_bindings[ 14] = (LispRef) (LispRef (*) (Stack *, LispRef *, LispRef *)) ff_stub_isalpha1024;
  character_bindings[ 15] = (LispRef) (LispRef (*) (Stack *, LispRef *, LispRef *)) ff_stub_isalnum1025;
  character_bindings[ 16] = (LispRef) (LispRef (*) (Stack *, LispRef *, LispRef *)) ff_stub_isupper1026;
  character_bindings[ 17] = (LispRef) (LispRef (*) (Stack *, LispRef *, LispRef *)) ff_stub_islower1027;
  character_bindings[ 18] = (LispRef) (LispRef (*) (Stack *, LispRef *, LispRef *)) ff_stub_isdigit1028;
  character_bindings[ 19] = (LispRef) (LispRef (*) (Stack *, LispRef *, LispRef *)) ff_stub_isgraph1029;
  character_bindings[ 20] = G001031;
  character_bindings[ 21] = G001033;
  character_bindings[ 22] = G001035;
  character_bindings[ 23] = sym_1038;
  character_bindings[ 24] = sym_1039;
  character_bindings[ 25] = key_1040;
  character_bindings[ 26] = sym_1041;
  character_bindings[ 27] = key_1042;
  character_bindings[ 28] = key_1043;
  character_bindings[ 29] = key_1044;
  character_bindings[ 30] = sym_1045;
  character_bindings[ 31] = sym_1046;
  character_bindings[ 32] = sym_1047;
  character_bindings[ 33] = sym_1049;
  character_bindings[ 34] = sym_1051;
  character_bindings[ 35] = cons_1048;
  character_bindings[ 36] = G001037;
  character_bindings[ 37] = G001053;
  character_bindings[ 38] = G001055;
  character_bindings[ 39] = G001057;
  character_bindings[ 40] = G001059;
  character_bindings[ 41] = G001061;
  character_bindings[ 42] = G001063;
  character_bindings[ 43] = key_1066;
  character_bindings[ 44] = key_1067;
  character_bindings[ 45] = G001065;
  character_bindings[ 1] = eul_nil;
  character_bindings[ 46] = sym_1070;
  character_bindings[ 47] = sym_1071;
  character_bindings[ 48] = sym_1072;
  character_bindings[ 49] = sym_1073;
  character_bindings[ 50] = sym_1074;
  character_bindings[ 51] = sym_1075;
  character_bindings[ 52] = sym_1076;
  character_bindings[ 53] = sym_1077;
  eul_allocate_lambda( character_bindings[0], "initialize-character", 0, G001069);

  }
}


/* eof */
