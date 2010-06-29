/** ----------------------------------------------------------------------- **
 **                 Generated by EuLisp System 'youtoo'
 ** ----------------------------------------------------------------------- **
 **  Description: C source file of EuLisp module double1
 **  Copyright: See file double1.em
 ** ----------------------------------------------------------------------- **/

#include "eulisp.h"


/* Imported modules */
extern void initialize_module_telos();
extern void initialize_module_number();
extern void initialize_module_integer();
extern void initialize_module_fpi();
extern void initialize_module_float();
extern void initialize_module_string();
extern LispRef integer_bindings[];
extern LispRef telos_bindings[];
extern LispRef string_bindings[];
extern LispRef mop_class_bindings[];
extern LispRef fpi_bindings[];
extern LispRef mop_meth_bindings[];
extern LispRef boot_bindings[];
extern LispRef boot1_bindings[];
extern LispRef float_bindings[];
extern LispRef number_bindings[];

/* Module bindings with size 47 */
LispRef double1_bindings[47];

/* Foreign functions */
static LispRef ff_stub_eul_dbl_sum226 (Stack *reg_value_stack, LispRef *sreg_value_sp, LispRef *sreg_value_sb)
{
  LispRef G00296, G00297, res;

  POPVAL1(G00297);
  POPVAL1(G00296);
  FF_RES_CONVERT2(res,eul_dbl_sum(FF_ARG_CONVERT2(G00296), FF_ARG_CONVERT2(G00297)));
  return res;
}

static LispRef ff_stub_eul_dbl_difference227 (Stack *reg_value_stack, LispRef *sreg_value_sp, LispRef *sreg_value_sb)
{
  LispRef G00298, G00299, res;

  POPVAL1(G00299);
  POPVAL1(G00298);
  FF_RES_CONVERT2(res,eul_dbl_difference(FF_ARG_CONVERT2(G00298), FF_ARG_CONVERT2(G00299)));
  return res;
}

static LispRef ff_stub_eul_dbl_product228 (Stack *reg_value_stack, LispRef *sreg_value_sp, LispRef *sreg_value_sb)
{
  LispRef G00300, G00301, res;

  POPVAL1(G00301);
  POPVAL1(G00300);
  FF_RES_CONVERT2(res,eul_dbl_product(FF_ARG_CONVERT2(G00300), FF_ARG_CONVERT2(G00301)));
  return res;
}

static LispRef ff_stub_eul_dbl_quotient229 (Stack *reg_value_stack, LispRef *sreg_value_sp, LispRef *sreg_value_sb)
{
  LispRef G00302, G00303, res;

  POPVAL1(G00303);
  POPVAL1(G00302);
  FF_RES_CONVERT2(res,eul_dbl_quotient(FF_ARG_CONVERT2(G00302), FF_ARG_CONVERT2(G00303)));
  return res;
}

static LispRef ff_stub_eul_dbl_remainder230 (Stack *reg_value_stack, LispRef *sreg_value_sp, LispRef *sreg_value_sb)
{
  LispRef G00304, G00305, res;

  POPVAL1(G00305);
  POPVAL1(G00304);
  FF_RES_CONVERT2(res,eul_dbl_remainder(FF_ARG_CONVERT2(G00304), FF_ARG_CONVERT2(G00305)));
  return res;
}

static LispRef ff_stub_eul_dbl_mod231 (Stack *reg_value_stack, LispRef *sreg_value_sp, LispRef *sreg_value_sb)
{
  LispRef G00306, G00307, res;

  POPVAL1(G00307);
  POPVAL1(G00306);
  FF_RES_CONVERT0(res,eul_dbl_mod(FF_ARG_CONVERT2(G00306), FF_ARG_CONVERT2(G00307)));
  return res;
}

static LispRef ff_stub_eul_dbl_ceiling232 (Stack *reg_value_stack, LispRef *sreg_value_sp, LispRef *sreg_value_sb)
{
  LispRef G00308, res;

  POPVAL1(G00308);
  FF_RES_CONVERT2(res,eul_dbl_ceiling(FF_ARG_CONVERT2(G00308)));
  return res;
}

static LispRef ff_stub_eul_dbl_floor233 (Stack *reg_value_stack, LispRef *sreg_value_sp, LispRef *sreg_value_sb)
{
  LispRef G00309, res;

  POPVAL1(G00309);
  FF_RES_CONVERT2(res,eul_dbl_floor(FF_ARG_CONVERT2(G00309)));
  return res;
}

static LispRef ff_stub_eul_dbl_round234 (Stack *reg_value_stack, LispRef *sreg_value_sp, LispRef *sreg_value_sb)
{
  LispRef G00310, res;

  POPVAL1(G00310);
  FF_RES_CONVERT0(res,eul_dbl_round(FF_ARG_CONVERT2(G00310)));
  return res;
}

static LispRef ff_stub_eul_dbl_truncate235 (Stack *reg_value_stack, LispRef *sreg_value_sp, LispRef *sreg_value_sb)
{
  LispRef G00311, res;

  POPVAL1(G00311);
  FF_RES_CONVERT0(res,eul_dbl_truncate(FF_ARG_CONVERT2(G00311)));
  return res;
}

static LispRef ff_stub_eul_dbl_as_str236 (Stack *reg_value_stack, LispRef *sreg_value_sp, LispRef *sreg_value_sb)
{
  LispRef G00312, res;

  POPVAL1(G00312);
  FF_RES_CONVERT3(res,eul_dbl_as_str(FF_ARG_CONVERT2(G00312)));
  return res;
}

static LispRef ff_stub_eul_fpi_as_dbl237 (Stack *reg_value_stack, LispRef *sreg_value_sp, LispRef *sreg_value_sb)
{
  LispRef G00313, res;

  POPVAL1(G00313);
  FF_RES_CONVERT2(res,eul_fpi_as_dbl(FF_ARG_CONVERT0(G00313)));
  return res;
}


/* Initialize module only once */
static int is_initialized = 0;

/* Initialize module double1 */
void initialize_module_double1()
{
  if (is_initialized) return;
  initialize_module_telos();
  initialize_module_number();
  initialize_module_integer();
  initialize_module_fpi();
  initialize_module_float();
  initialize_module_string();
  eul_fast_table_set(eul_modules,"double1",(LispRef) double1_bindings);
  is_initialized = 1;
  {
  /* Declarations */
  LispRef sym_295, G00294, sym_292, sym_291, sym_290, sym_289, sym_288, sym_287, sym_286, sym_285, sym_284, G00283, G00281, G00279, G00277, G00275, G00273, G00271, G00269, G00267, G00265, G00263, G00261, G00259, G00257, G00255, G00253, G00251, G00249, G00247, G00245, G00243, G00241, G00239;

  /* Code vector and literal definitions */
  /* Byte-vector with size: 3 is_init: 0 index: 14 binding: (method-(converter <int>)) */
  static const void *G00238[] = {I(aa,41,00,00),B(double1 ,10),I(45,01,00,00)};

  /* Byte-vector with size: 3 is_init: 0 index: 15 binding: (method-(converter <string>)) */
  static const void *G00240[] = {I(aa,41,00,00),B(double1 ,12),I(45,01,00,00)};

  /* Byte-vector with size: 3 is_init: 0 index: 16 binding: (method-(converter <double>)) */
  static const void *G00242[] = {I(aa,41,00,00),B(double1 ,13),I(45,01,00,00)};

  /* Byte-vector with size: 1 is_init: 0 index: 17 binding: (method-(converter <double>)) */
  static const void *G00244[] = {I(aa,1b,45,01)};

  /* Byte-vector with size: 5 is_init: 0 index: 18 binding: (method-binary-mod) */
  static const void *G00246[] = {I(ab,41,00,00),B(double1 ,13),I(22,01,41,00),B(double1 ,7),I(45,02,00,00)};

  /* Byte-vector with size: 6 is_init: 0 index: 19 binding: (method-binary-mod) */
  static const void *G00248[] = {I(ab,1c,41,00),B(double1 ,13),I(22,01,1b,1d),I(41,00,00,00),B(double1 ,7),I(45,05,00,00)};

  /* Byte-vector with size: 5 is_init: 0 index: 20 binding: (method-binary-mod) */
  static const void *G00250[] = {I(ab,41,00,00),B(double1 ,6),I(22,02,41,00),B(double1 ,11),I(45,01,00,00)};

  /* Byte-vector with size: 5 is_init: 0 index: 21 binding: (method-binary%) */
  static const void *G00252[] = {I(ab,41,00,00),B(double1 ,13),I(22,01,41,00),B(double1 ,6),I(45,02,00,00)};

  /* Byte-vector with size: 6 is_init: 0 index: 22 binding: (method-binary%) */
  static const void *G00254[] = {I(ab,1c,41,00),B(double1 ,13),I(22,01,1b,1d),I(41,00,00,00),B(double1 ,6),I(45,05,00,00)};

  /* Byte-vector with size: 3 is_init: 0 index: 23 binding: (method-binary%) */
  static const void *G00256[] = {I(ab,41,00,00),B(double1 ,6),I(45,02,00,00)};

  /* Byte-vector with size: 5 is_init: 0 index: 24 binding: (method-binary/) */
  static const void *G00258[] = {I(ab,41,00,00),B(double1 ,13),I(22,01,41,00),B(double1 ,5),I(45,02,00,00)};

  /* Byte-vector with size: 6 is_init: 0 index: 25 binding: (method-binary/) */
  static const void *G00260[] = {I(ab,1c,41,00),B(double1 ,13),I(22,01,1b,1d),I(41,00,00,00),B(double1 ,5),I(45,05,00,00)};

  /* Byte-vector with size: 3 is_init: 0 index: 26 binding: (method-binary/) */
  static const void *G00262[] = {I(ab,41,00,00),B(double1 ,5),I(45,02,00,00)};

  /* Byte-vector with size: 5 is_init: 0 index: 27 binding: (method-binary*) */
  static const void *G00264[] = {I(ab,41,00,00),B(double1 ,13),I(22,01,41,00),B(double1 ,4),I(45,02,00,00)};

  /* Byte-vector with size: 6 is_init: 0 index: 28 binding: (method-binary*) */
  static const void *G00266[] = {I(ab,1c,41,00),B(double1 ,13),I(22,01,1b,1d),I(41,00,00,00),B(double1 ,4),I(45,05,00,00)};

  /* Byte-vector with size: 3 is_init: 0 index: 29 binding: (method-binary*) */
  static const void *G00268[] = {I(ab,41,00,00),B(double1 ,4),I(45,02,00,00)};

  /* Byte-vector with size: 5 is_init: 0 index: 30 binding: (method-binary-) */
  static const void *G00270[] = {I(ab,41,00,00),B(double1 ,13),I(22,01,41,00),B(double1 ,3),I(45,02,00,00)};

  /* Byte-vector with size: 6 is_init: 0 index: 31 binding: (method-binary-) */
  static const void *G00272[] = {I(ab,1c,41,00),B(double1 ,13),I(22,01,1b,1d),I(41,00,00,00),B(double1 ,3),I(45,05,00,00)};

  /* Byte-vector with size: 3 is_init: 0 index: 32 binding: (method-binary-) */
  static const void *G00274[] = {I(ab,41,00,00),B(double1 ,3),I(45,02,00,00)};

  /* Byte-vector with size: 5 is_init: 0 index: 33 binding: (method-binary+) */
  static const void *G00276[] = {I(ab,41,00,00),B(double1 ,13),I(22,01,41,00),B(double1 ,2),I(45,02,00,00)};

  /* Byte-vector with size: 6 is_init: 0 index: 34 binding: (method-binary+) */
  static const void *G00278[] = {I(ab,1c,41,00),B(double1 ,13),I(22,01,1b,1d),I(41,00,00,00),B(double1 ,2),I(45,05,00,00)};

  /* Byte-vector with size: 3 is_init: 0 index: 35 binding: (method-binary+) */
  static const void *G00280[] = {I(ab,41,00,00),B(double1 ,2),I(45,02,00,00)};

  /* Byte-vector with size: 682 is_init: 0 index: 45 binding: top-level */
  static const void *G00282[] = {I(a9,24,00,00),B(number ,14),I(26,00,00,00),I(00,00,00,03),I(02,84,24,00),B(float ,7),I(24,00,00,00),B(float ,7),I(24,00,00,00),B(boot1 ,40),I(3c,03,24,00),B(boot1 ,25),I(3c,00,24,00),B(number ,14),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,7),I(3c,02,1f,04),I(1f,04,23,00),B(double1 ,36),I(23,00,00,00),B(double1 ,35),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(number ,14),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(number ,14),I(26,00,00,00),I(00,00,00,03),I(02,84,24,00),B(fpi ,6),I(24,00,00,00),B(float ,7),I(24,00,00,00),B(boot1 ,40),I(3c,03,24,00),B(boot1 ,25),I(3c,00,24,00),B(number ,14),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,7),I(3c,02,1f,04),I(1f,04,23,00),B(double1 ,36),I(23,00,00,00),B(double1 ,34),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(number ,14),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(number ,14),I(26,00,00,00),I(00,00,00,03),I(02,84,24,00),B(float ,7),I(24,00,00,00),B(fpi ,6),I(24,00,00,00),B(boot1 ,40),I(3c,03,24,00),B(boot1 ,25),I(3c,00,24,00),B(number ,14),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,7),I(3c,02,1f,04),I(1f,04,23,00),B(double1 ,36),I(23,00,00,00),B(double1 ,33),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(number ,14),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(number ,9),I(26,00,00,00),I(00,00,00,03),I(02,84,24,00),B(float ,7),I(24,00,00,00),B(float ,7),I(24,00,00,00),B(boot1 ,40),I(3c,03,24,00),B(boot1 ,25),I(3c,00,24,00),B(number ,9),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,7),I(3c,02,1f,04),I(1f,04,23,00),B(double1 ,37),I(23,00,00,00),B(double1 ,32),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(number ,9),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(number ,9),I(26,00,00,00),I(00,00,00,03),I(02,84,24,00),B(fpi ,6),I(24,00,00,00),B(float ,7),I(24,00,00,00),B(boot1 ,40),I(3c,03,24,00),B(boot1 ,25),I(3c,00,24,00),B(number ,9),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,7),I(3c,02,1f,04),I(1f,04,23,00),B(double1 ,37),I(23,00,00,00),B(double1 ,31),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(number ,9),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(number ,9),I(26,00,00,00),I(00,00,00,03),I(02,84,24,00),B(float ,7),I(24,00,00,00),B(fpi ,6),I(24,00,00,00),B(boot1 ,40),I(3c,03,24,00),B(boot1 ,25),I(3c,00,24,00),B(number ,9),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,7),I(3c,02,1f,04),I(1f,04,23,00),B(double1 ,37),I(23,00,00,00),B(double1 ,30),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(number ,9),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(number ,12),I(26,00,00,00),I(00,00,00,03),I(02,84,24,00),B(float ,7),I(24,00,00,00),B(float ,7),I(24,00,00,00),B(boot1 ,40),I(3c,03,24,00),B(boot1 ,25),I(3c,00,24,00),B(number ,12),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,7),I(3c,02,1f,04),I(1f,04,23,00),B(double1 ,38),I(23,00,00,00),B(double1 ,29),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(number ,12),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(number ,12),I(26,00,00,00),I(00,00,00,03),I(02,84,24,00),B(fpi ,6),I(24,00,00,00),B(float ,7),I(24,00,00,00),B(boot1 ,40),I(3c,03,24,00),B(boot1 ,25),I(3c,00,24,00),B(number ,12),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,7),I(3c,02,1f,04),I(1f,04,23,00),B(double1 ,38),I(23,00,00,00),B(double1 ,28),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(number ,12),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(number ,12),I(26,00,00,00),I(00,00,00,03),I(02,84,24,00),B(float ,7),I(24,00,00,00),B(fpi ,6),I(24,00,00,00),B(boot1 ,40),I(3c,03,24,00),B(boot1 ,25),I(3c,00,24,00),B(number ,12),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,7),I(3c,02,1f,04),I(1f,04,23,00),B(double1 ,38),I(23,00,00,00),B(double1 ,27),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(number ,12),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(number ,17),I(26,00,00,00),I(00,00,00,03),I(02,84,24,00),B(float ,7),I(24,00,00,00),B(float ,7),I(24,00,00,00),B(boot1 ,40),I(3c,03,24,00),B(boot1 ,25),I(3c,00,24,00),B(number ,17),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,7),I(3c,02,1f,04),I(1f,04,23,00),B(double1 ,39),I(23,00,00,00),B(double1 ,26),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(number ,17),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(number ,17),I(26,00,00,00),I(00,00,00,03),I(02,84,24,00),B(fpi ,6),I(24,00,00,00),B(float ,7),I(24,00,00,00),B(boot1 ,40),I(3c,03,24,00),B(boot1 ,25),I(3c,00,24,00),B(number ,17),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,7),I(3c,02,1f,04),I(1f,04,23,00),B(double1 ,39),I(23,00,00,00),B(double1 ,25),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(number ,17),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(number ,17),I(26,00,00,00),I(00,00,00,03),I(02,84,24,00),B(float ,7),I(24,00,00,00),B(fpi ,6),I(24,00,00,00),B(boot1 ,40),I(3c,03,24,00),B(boot1 ,25),I(3c,00,24,00),B(number ,17),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,7),I(3c,02,1f,04),I(1f,04,23,00),B(double1 ,39),I(23,00,00,00),B(double1 ,24),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(number ,17),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(number ,6),I(26,00,00,00),I(00,00,00,03),I(02,84,24,00),B(float ,7),I(24,00,00,00),B(float ,7),I(24,00,00,00),B(boot1 ,40),I(3c,03,24,00),B(boot1 ,25),I(3c,00,24,00),B(number ,6),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,7),I(3c,02,1f,04),I(1f,04,23,00),B(double1 ,40),I(23,00,00,00),B(double1 ,23),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(number ,6),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(number ,6),I(26,00,00,00),I(00,00,00,03),I(02,84,24,00),B(fpi ,6),I(24,00,00,00),B(float ,7),I(24,00,00,00),B(boot1 ,40),I(3c,03,24,00),B(boot1 ,25),I(3c,00,24,00),B(number ,6),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,7),I(3c,02,1f,04),I(1f,04,23,00),B(double1 ,40),I(23,00,00,00),B(double1 ,22),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(number ,6),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(number ,6),I(26,00,00,00),I(00,00,00,03),I(02,84,24,00),B(float ,7),I(24,00,00,00),B(fpi ,6),I(24,00,00,00),B(boot1 ,40),I(3c,03,24,00),B(boot1 ,25),I(3c,00,24,00),B(number ,6),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,7),I(3c,02,1f,04),I(1f,04,23,00),B(double1 ,40),I(23,00,00,00),B(double1 ,21),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(number ,6),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(number ,8),I(26,00,00,00),I(00,00,00,03),I(02,84,24,00),B(float ,7),I(24,00,00,00),B(float ,7),I(24,00,00,00),B(boot1 ,40),I(3c,03,24,00),B(boot1 ,25),I(3c,00,24,00),B(number ,8),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,7),I(3c,02,1f,04),I(1f,04,23,00),B(double1 ,41),I(23,00,00,00),B(double1 ,20),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(number ,8),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(number ,8),I(26,00,00,00),I(00,00,00,03),I(02,84,24,00),B(fpi ,6),I(24,00,00,00),B(float ,7),I(24,00,00,00),B(boot1 ,40),I(3c,03,24,00),B(boot1 ,25),I(3c,00,24,00),B(number ,8),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,7),I(3c,02,1f,04),I(1f,04,23,00),B(double1 ,41),I(23,00,00,00),B(double1 ,19),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(number ,8),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(number ,8),I(26,00,00,00),I(00,00,00,03),I(02,84,24,00),B(float ,7),I(24,00,00,00),B(fpi ,6),I(24,00,00,00),B(boot1 ,40),I(3c,03,24,00),B(boot1 ,25),I(3c,00,24,00),B(number ,8),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,7),I(3c,02,1f,04),I(1f,04,23,00),B(double1 ,41),I(23,00,00,00),B(double1 ,18),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(number ,8),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(float ,7),I(24,00,00,00),B(mop_class ,13),I(3c,01,24,00),B(float ,7),I(24,00,00,00),B(mop_class ,13),I(3c,01,1b,26),I(00,00,00,03),I(02,83,24,00),B(float ,7),I(24,00,00,00),B(boot1 ,40),I(3c,02,24,00),B(boot1 ,25),I(3c,00,24,00),B(float ,7),I(24,00,00,00),B(mop_class ,13),I(3c,01,1b,26),I(00,00,00,04),I(02,1d,1c,24),B(boot ,7),I(3c,02,1f,05),I(1f,05,23,00),B(double1 ,42),I(23,00,00,00),B(double1 ,17),I(3b,01,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,1f,08),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(float ,7),I(24,00,00,00),B(mop_class ,13),I(3c,01,24,00),B(float ,7),I(24,00,00,00),B(mop_class ,13),I(3c,01,1b,26),I(00,00,00,03),I(02,83,24,00),B(fpi ,6),I(24,00,00,00),B(boot1 ,40),I(3c,02,24,00),B(boot1 ,25),I(3c,00,24,00),B(float ,7),I(24,00,00,00),B(mop_class ,13),I(3c,01,1b,26),I(00,00,00,04),I(02,1d,1c,24),B(boot ,7),I(3c,02,1f,05),I(1f,05,23,00),B(double1 ,42),I(23,00,00,00),B(double1 ,16),I(3b,01,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,1f,08),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(string ,13),I(24,00,00,00),B(mop_class ,13),I(3c,01,24,00),B(string ,13),I(24,00,00,00),B(mop_class ,13),I(3c,01,1b,26),I(00,00,00,03),I(02,83,24,00),B(float ,7),I(24,00,00,00),B(boot1 ,40),I(3c,02,24,00),B(boot1 ,25),I(3c,00,24,00),B(string ,13),I(24,00,00,00),B(mop_class ,13),I(3c,01,1b,26),I(00,00,00,04),I(02,1d,1c,24),B(boot ,7),I(3c,02,1f,05),I(1f,05,23,00),B(double1 ,43),I(23,00,00,00),B(double1 ,15),I(3b,01,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,1f,08),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(fpi ,6),I(24,00,00,00),B(mop_class ,13),I(3c,01,24,00),B(fpi ,6),I(24,00,00,00),B(mop_class ,13),I(3c,01,1b,26),I(00,00,00,03),I(02,83,24,00),B(float ,7),I(24,00,00,00),B(boot1 ,40),I(3c,02,24,00),B(boot1 ,25),I(3c,00,24,00),B(fpi ,6),I(24,00,00,00),B(mop_class ,13),I(3c,01,1b,26),I(00,00,00,04),I(02,1d,1c,24),B(boot ,7),I(3c,02,1f,05),I(1f,05,23,00),B(double1 ,44),I(23,00,00,00),B(double1 ,14),I(3b,01,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,1f,08),I(1c,24,00,00),B(mop_meth ,5),I(3d,02,90,45),I(90,00,00,00)};

  /* Byte-vector with size: 38 is_init: 1 index: 0 binding: initialize-double1 */
  static const void *G00293[] = {I(87,25,00,00),B(double1 ,1),I(24,00,00,00),B(string ,1),I(3e,0b,24,00),B(string ,0),I(3c,00,21,01),I(24,00,00,00),B(float ,1),I(3e,0b,24,00),B(float ,0),I(3c,00,21,01),I(24,00,00,00),B(fpi ,1),I(3e,0b,24,00),B(fpi ,0),I(3c,00,21,01),I(24,00,00,00),B(integer ,1),I(3e,0b,24,00),B(integer ,0),I(3c,00,21,01),I(24,00,00,00),B(number ,1),I(3e,0b,24,00),B(number ,0),I(3c,00,21,01),I(24,00,00,00),B(telos ,1),I(3e,0b,24,00),B(telos ,0),I(3c,00,21,01),I(23,00,00,00),B(double1 ,46),I(23,00,00,00),B(double1 ,45),I(3b,00,3d,00),I(00,ac,00,00)};


  /* Initializations */
  eul_allocate_bytevector( G00239,G00238);
  eul_allocate_bytevector( G00241,G00240);
  eul_allocate_bytevector( G00243,G00242);
  eul_allocate_bytevector( G00245,G00244);
  eul_allocate_bytevector( G00247,G00246);
  eul_allocate_bytevector( G00249,G00248);
  eul_allocate_bytevector( G00251,G00250);
  eul_allocate_bytevector( G00253,G00252);
  eul_allocate_bytevector( G00255,G00254);
  eul_allocate_bytevector( G00257,G00256);
  eul_allocate_bytevector( G00259,G00258);
  eul_allocate_bytevector( G00261,G00260);
  eul_allocate_bytevector( G00263,G00262);
  eul_allocate_bytevector( G00265,G00264);
  eul_allocate_bytevector( G00267,G00266);
  eul_allocate_bytevector( G00269,G00268);
  eul_allocate_bytevector( G00271,G00270);
  eul_allocate_bytevector( G00273,G00272);
  eul_allocate_bytevector( G00275,G00274);
  eul_allocate_bytevector( G00277,G00276);
  eul_allocate_bytevector( G00279,G00278);
  eul_allocate_bytevector( G00281,G00280);
  eul_intern_symbol(sym_284,"(method binary+)");
  eul_intern_symbol(sym_285,"(method binary-)");
  eul_intern_symbol(sym_286,"(method binary*)");
  eul_intern_symbol(sym_287,"(method binary/)");
  eul_intern_symbol(sym_288,"(method binary%)");
  eul_intern_symbol(sym_289,"(method binary-mod)");
  eul_intern_symbol(sym_290,"(method (converter <double>))");
  eul_intern_symbol(sym_291,"(method (converter <string>))");
  eul_intern_symbol(sym_292,"(method (converter <int>))");
  eul_allocate_bytevector( G00283,G00282);
  eul_intern_symbol(sym_295,"top-level");
  eul_allocate_bytevector( G00294,G00293);

  /* Set local bindings */
  double1_bindings[ 2] = (LispRef) (LispRef (*) (Stack *, LispRef *, LispRef *)) ff_stub_eul_dbl_sum226;
  double1_bindings[ 3] = (LispRef) (LispRef (*) (Stack *, LispRef *, LispRef *)) ff_stub_eul_dbl_difference227;
  double1_bindings[ 4] = (LispRef) (LispRef (*) (Stack *, LispRef *, LispRef *)) ff_stub_eul_dbl_product228;
  double1_bindings[ 5] = (LispRef) (LispRef (*) (Stack *, LispRef *, LispRef *)) ff_stub_eul_dbl_quotient229;
  double1_bindings[ 6] = (LispRef) (LispRef (*) (Stack *, LispRef *, LispRef *)) ff_stub_eul_dbl_remainder230;
  double1_bindings[ 7] = (LispRef) (LispRef (*) (Stack *, LispRef *, LispRef *)) ff_stub_eul_dbl_mod231;
  double1_bindings[ 8] = (LispRef) (LispRef (*) (Stack *, LispRef *, LispRef *)) ff_stub_eul_dbl_ceiling232;
  double1_bindings[ 9] = (LispRef) (LispRef (*) (Stack *, LispRef *, LispRef *)) ff_stub_eul_dbl_floor233;
  double1_bindings[ 10] = (LispRef) (LispRef (*) (Stack *, LispRef *, LispRef *)) ff_stub_eul_dbl_round234;
  double1_bindings[ 11] = (LispRef) (LispRef (*) (Stack *, LispRef *, LispRef *)) ff_stub_eul_dbl_truncate235;
  double1_bindings[ 12] = (LispRef) (LispRef (*) (Stack *, LispRef *, LispRef *)) ff_stub_eul_dbl_as_str236;
  double1_bindings[ 13] = (LispRef) (LispRef (*) (Stack *, LispRef *, LispRef *)) ff_stub_eul_fpi_as_dbl237;
  double1_bindings[ 14] = G00239;
  double1_bindings[ 15] = G00241;
  double1_bindings[ 16] = G00243;
  double1_bindings[ 17] = G00245;
  double1_bindings[ 18] = G00247;
  double1_bindings[ 19] = G00249;
  double1_bindings[ 20] = G00251;
  double1_bindings[ 21] = G00253;
  double1_bindings[ 22] = G00255;
  double1_bindings[ 23] = G00257;
  double1_bindings[ 24] = G00259;
  double1_bindings[ 25] = G00261;
  double1_bindings[ 26] = G00263;
  double1_bindings[ 27] = G00265;
  double1_bindings[ 28] = G00267;
  double1_bindings[ 29] = G00269;
  double1_bindings[ 30] = G00271;
  double1_bindings[ 31] = G00273;
  double1_bindings[ 32] = G00275;
  double1_bindings[ 33] = G00277;
  double1_bindings[ 34] = G00279;
  double1_bindings[ 35] = G00281;
  double1_bindings[ 36] = sym_284;
  double1_bindings[ 37] = sym_285;
  double1_bindings[ 38] = sym_286;
  double1_bindings[ 39] = sym_287;
  double1_bindings[ 40] = sym_288;
  double1_bindings[ 41] = sym_289;
  double1_bindings[ 42] = sym_290;
  double1_bindings[ 43] = sym_291;
  double1_bindings[ 44] = sym_292;
  double1_bindings[ 45] = G00283;
  double1_bindings[ 1] = eul_nil;
  double1_bindings[ 46] = sym_295;
  eul_allocate_lambda( double1_bindings[0], "initialize-double1", 0, G00294);

  }
}


/* eof */
