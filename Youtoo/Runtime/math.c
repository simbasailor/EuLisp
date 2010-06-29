/** ----------------------------------------------------------------------- **
 **                 Generated by EuLisp System 'youtoo'
 ** ----------------------------------------------------------------------- **
 **  Description: C source file of EuLisp module math
 **  Copyright: See file math.em
 ** ----------------------------------------------------------------------- **/

#include "eulisp.h"


/* Imported modules */
extern void initialize_module_telos();
extern void initialize_module_double();
extern LispRef double_bindings[];
extern LispRef telos_bindings[];
extern LispRef mop_meth_bindings[];
extern LispRef boot_bindings[];
extern LispRef mop_gf_bindings[];
extern LispRef mop_class_bindings[];
extern LispRef boot1_bindings[];
extern LispRef float_bindings[];

/* Module bindings with size 79 */
LispRef math_bindings[79];

/* Foreign functions */
static LispRef ff_stub_acos773 (Stack *reg_value_stack, LispRef *sreg_value_sp, LispRef *sreg_value_sb)
{
  LispRef G00853, res;

  POPVAL1(G00853);
  FF_RES_CONVERT2(res,acos(FF_ARG_CONVERT2(G00853)));
  return res;
}

static LispRef ff_stub_asin774 (Stack *reg_value_stack, LispRef *sreg_value_sp, LispRef *sreg_value_sb)
{
  LispRef G00854, res;

  POPVAL1(G00854);
  FF_RES_CONVERT2(res,asin(FF_ARG_CONVERT2(G00854)));
  return res;
}

static LispRef ff_stub_atan775 (Stack *reg_value_stack, LispRef *sreg_value_sp, LispRef *sreg_value_sb)
{
  LispRef G00855, res;

  POPVAL1(G00855);
  FF_RES_CONVERT2(res,atan(FF_ARG_CONVERT2(G00855)));
  return res;
}

static LispRef ff_stub_atan2776 (Stack *reg_value_stack, LispRef *sreg_value_sp, LispRef *sreg_value_sb)
{
  LispRef G00856, G00857, res;

  POPVAL1(G00857);
  POPVAL1(G00856);
  FF_RES_CONVERT2(res,atan2(FF_ARG_CONVERT2(G00856), FF_ARG_CONVERT2(G00857)));
  return res;
}

static LispRef ff_stub_cos777 (Stack *reg_value_stack, LispRef *sreg_value_sp, LispRef *sreg_value_sb)
{
  LispRef G00858, res;

  POPVAL1(G00858);
  FF_RES_CONVERT2(res,cos(FF_ARG_CONVERT2(G00858)));
  return res;
}

static LispRef ff_stub_sin778 (Stack *reg_value_stack, LispRef *sreg_value_sp, LispRef *sreg_value_sb)
{
  LispRef G00859, res;

  POPVAL1(G00859);
  FF_RES_CONVERT2(res,sin(FF_ARG_CONVERT2(G00859)));
  return res;
}

static LispRef ff_stub_tan779 (Stack *reg_value_stack, LispRef *sreg_value_sp, LispRef *sreg_value_sb)
{
  LispRef G00860, res;

  POPVAL1(G00860);
  FF_RES_CONVERT2(res,tan(FF_ARG_CONVERT2(G00860)));
  return res;
}

static LispRef ff_stub_cosh780 (Stack *reg_value_stack, LispRef *sreg_value_sp, LispRef *sreg_value_sb)
{
  LispRef G00861, res;

  POPVAL1(G00861);
  FF_RES_CONVERT2(res,cosh(FF_ARG_CONVERT2(G00861)));
  return res;
}

static LispRef ff_stub_sinh781 (Stack *reg_value_stack, LispRef *sreg_value_sp, LispRef *sreg_value_sb)
{
  LispRef G00862, res;

  POPVAL1(G00862);
  FF_RES_CONVERT2(res,sinh(FF_ARG_CONVERT2(G00862)));
  return res;
}

static LispRef ff_stub_tanh782 (Stack *reg_value_stack, LispRef *sreg_value_sp, LispRef *sreg_value_sb)
{
  LispRef G00863, res;

  POPVAL1(G00863);
  FF_RES_CONVERT2(res,tanh(FF_ARG_CONVERT2(G00863)));
  return res;
}

static LispRef ff_stub_exp783 (Stack *reg_value_stack, LispRef *sreg_value_sp, LispRef *sreg_value_sb)
{
  LispRef G00864, res;

  POPVAL1(G00864);
  FF_RES_CONVERT2(res,exp(FF_ARG_CONVERT2(G00864)));
  return res;
}

static LispRef ff_stub_log784 (Stack *reg_value_stack, LispRef *sreg_value_sp, LispRef *sreg_value_sb)
{
  LispRef G00865, res;

  POPVAL1(G00865);
  FF_RES_CONVERT2(res,log(FF_ARG_CONVERT2(G00865)));
  return res;
}

static LispRef ff_stub_log10785 (Stack *reg_value_stack, LispRef *sreg_value_sp, LispRef *sreg_value_sb)
{
  LispRef G00866, res;

  POPVAL1(G00866);
  FF_RES_CONVERT2(res,log10(FF_ARG_CONVERT2(G00866)));
  return res;
}

static LispRef ff_stub_pow786 (Stack *reg_value_stack, LispRef *sreg_value_sp, LispRef *sreg_value_sb)
{
  LispRef G00867, G00868, res;

  POPVAL1(G00868);
  POPVAL1(G00867);
  FF_RES_CONVERT2(res,pow(FF_ARG_CONVERT2(G00867), FF_ARG_CONVERT2(G00868)));
  return res;
}

static LispRef ff_stub_sqrt787 (Stack *reg_value_stack, LispRef *sreg_value_sp, LispRef *sreg_value_sb)
{
  LispRef G00869, res;

  POPVAL1(G00869);
  FF_RES_CONVERT2(res,sqrt(FF_ARG_CONVERT2(G00869)));
  return res;
}


/* Initialize module only once */
static int is_initialized = 0;

/* Initialize module math */
void initialize_module_math()
{
  if (is_initialized) return;
  initialize_module_telos();
  initialize_module_double();
  eul_fast_table_set(eul_modules,"math",(LispRef) math_bindings);
  is_initialized = 1;
  {
  /* Declarations */
  LispRef sym_852, G00851, sym_849, sym_848, sym_847, sym_846, sym_845, sym_844, sym_843, sym_842, sym_841, sym_840, sym_839, sym_838, sym_837, sym_836, sym_835, sym_834, sym_833, sym_832, sym_831, sym_830, sym_829, sym_828, sym_827, sym_826, sym_825, sym_824, sym_823, sym_822, sym_821, sym_820, G00819, G00817, G00815, G00813, G00811, G00809, G00807, G00805, G00803, G00801, G00799, G00797, G00795, G00793, G00791, G00789;

  /* Code vector and literal definitions */
  /* Byte-vector with size: 3 is_init: 0 index: 32 binding: (method-sqrt) */
  static const void *G00788[] = {I(aa,41,00,00),B(math ,31),I(45,01,00,00)};

  /* Byte-vector with size: 3 is_init: 0 index: 33 binding: (method-pow) */
  static const void *G00790[] = {I(ab,41,00,00),B(math ,30),I(45,02,00,00)};

  /* Byte-vector with size: 3 is_init: 0 index: 34 binding: (method-log10) */
  static const void *G00792[] = {I(aa,41,00,00),B(math ,29),I(45,01,00,00)};

  /* Byte-vector with size: 3 is_init: 0 index: 35 binding: (method-log) */
  static const void *G00794[] = {I(aa,41,00,00),B(math ,28),I(45,01,00,00)};

  /* Byte-vector with size: 3 is_init: 0 index: 36 binding: (method-exp) */
  static const void *G00796[] = {I(aa,41,00,00),B(math ,27),I(45,01,00,00)};

  /* Byte-vector with size: 3 is_init: 0 index: 37 binding: (method-tanh) */
  static const void *G00798[] = {I(aa,41,00,00),B(math ,26),I(45,01,00,00)};

  /* Byte-vector with size: 3 is_init: 0 index: 38 binding: (method-sinh) */
  static const void *G00800[] = {I(aa,41,00,00),B(math ,25),I(45,01,00,00)};

  /* Byte-vector with size: 3 is_init: 0 index: 39 binding: (method-cosh) */
  static const void *G00802[] = {I(aa,41,00,00),B(math ,24),I(45,01,00,00)};

  /* Byte-vector with size: 3 is_init: 0 index: 40 binding: (method-tan) */
  static const void *G00804[] = {I(aa,41,00,00),B(math ,23),I(45,01,00,00)};

  /* Byte-vector with size: 3 is_init: 0 index: 41 binding: (method-sin) */
  static const void *G00806[] = {I(aa,41,00,00),B(math ,22),I(45,01,00,00)};

  /* Byte-vector with size: 3 is_init: 0 index: 42 binding: (method-cos) */
  static const void *G00808[] = {I(aa,41,00,00),B(math ,21),I(45,01,00,00)};

  /* Byte-vector with size: 3 is_init: 0 index: 43 binding: (method-atan2) */
  static const void *G00810[] = {I(ab,41,00,00),B(math ,20),I(45,02,00,00)};

  /* Byte-vector with size: 3 is_init: 0 index: 44 binding: (method-atan) */
  static const void *G00812[] = {I(aa,41,00,00),B(math ,19),I(45,01,00,00)};

  /* Byte-vector with size: 3 is_init: 0 index: 45 binding: (method-asin) */
  static const void *G00814[] = {I(aa,41,00,00),B(math ,18),I(45,01,00,00)};

  /* Byte-vector with size: 3 is_init: 0 index: 46 binding: (method-acos) */
  static const void *G00816[] = {I(aa,41,00,00),B(math ,17),I(45,01,00,00)};

  /* Byte-vector with size: 745 is_init: 0 index: 77 binding: top-level */
  static const void *G00818[] = {I(a9,83,24,00),B(float ,7),I(24,00,00,00),B(boot1 ,40),I(3c,02,24,00),B(boot1 ,25),I(3c,00,24,00),B(boot1 ,25),I(3c,00,23,00),B(math ,47),I(1f,03,24,00),B(mop_class ,15),I(24,00,00,00),B(mop_class ,55),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,1b,89),B(math ,12),I(2a,83,24,00),B(float ,7),I(24,00,00,00),B(boot1 ,40),I(3c,02,24,00),B(boot1 ,25),I(3c,00,24,00),B(boot1 ,25),I(3c,00,23,00),B(math ,48),I(1f,03,24,00),B(mop_class ,15),I(24,00,00,00),B(mop_class ,55),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,1b,89),B(math ,10),I(2a,83,24,00),B(float ,7),I(24,00,00,00),B(boot1 ,40),I(3c,02,24,00),B(boot1 ,25),I(3c,00,24,00),B(boot1 ,25),I(3c,00,23,00),B(math ,49),I(1f,03,24,00),B(mop_class ,15),I(24,00,00,00),B(mop_class ,55),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,1b,89),B(math ,5),I(2a,84,24,00),B(float ,7),I(24,00,00,00),B(float ,7),I(24,00,00,00),B(boot1 ,40),I(3c,03,24,00),B(boot1 ,25),I(3c,00,24,00),B(boot1 ,25),I(3c,00,23,00),B(math ,50),I(1f,03,24,00),B(mop_class ,15),I(24,00,00,00),B(mop_class ,55),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,1b,89),B(math ,8),I(2a,83,24,00),B(float ,7),I(24,00,00,00),B(boot1 ,40),I(3c,02,24,00),B(boot1 ,25),I(3c,00,24,00),B(boot1 ,25),I(3c,00,23,00),B(math ,51),I(1f,03,24,00),B(mop_class ,15),I(24,00,00,00),B(mop_class ,55),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,1b,89),B(math ,6),I(2a,83,24,00),B(float ,7),I(24,00,00,00),B(boot1 ,40),I(3c,02,24,00),B(boot1 ,25),I(3c,00,24,00),B(boot1 ,25),I(3c,00,23,00),B(math ,52),I(1f,03,24,00),B(mop_class ,15),I(24,00,00,00),B(mop_class ,55),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,1b,89),B(math ,3),I(2a,83,24,00),B(float ,7),I(24,00,00,00),B(boot1 ,40),I(3c,02,24,00),B(boot1 ,25),I(3c,00,24,00),B(boot1 ,25),I(3c,00,23,00),B(math ,53),I(1f,03,24,00),B(mop_class ,15),I(24,00,00,00),B(mop_class ,55),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,1b,89),B(math ,16),I(2a,83,24,00),B(float ,7),I(24,00,00,00),B(boot1 ,40),I(3c,02,24,00),B(boot1 ,25),I(3c,00,24,00),B(boot1 ,25),I(3c,00,23,00),B(math ,54),I(1f,03,24,00),B(mop_class ,15),I(24,00,00,00),B(mop_class ,55),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,1b,89),B(math ,15),I(2a,83,24,00),B(float ,7),I(24,00,00,00),B(boot1 ,40),I(3c,02,24,00),B(boot1 ,25),I(3c,00,24,00),B(boot1 ,25),I(3c,00,23,00),B(math ,55),I(1f,03,24,00),B(mop_class ,15),I(24,00,00,00),B(mop_class ,55),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,1b,89),B(math ,13),I(2a,83,24,00),B(float ,7),I(24,00,00,00),B(boot1 ,40),I(3c,02,24,00),B(boot1 ,25),I(3c,00,24,00),B(boot1 ,25),I(3c,00,23,00),B(math ,56),I(1f,03,24,00),B(mop_class ,15),I(24,00,00,00),B(mop_class ,55),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,1b,89),B(math ,2),I(2a,83,24,00),B(float ,7),I(24,00,00,00),B(boot1 ,40),I(3c,02,24,00),B(boot1 ,25),I(3c,00,24,00),B(boot1 ,25),I(3c,00,23,00),B(math ,57),I(1f,03,24,00),B(mop_class ,15),I(24,00,00,00),B(mop_class ,55),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,1b,89),B(math ,7),I(2a,83,24,00),B(float ,7),I(24,00,00,00),B(boot1 ,40),I(3c,02,24,00),B(boot1 ,25),I(3c,00,24,00),B(boot1 ,25),I(3c,00,23,00),B(math ,58),I(1f,03,24,00),B(mop_class ,15),I(24,00,00,00),B(mop_class ,55),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,1b,89),B(math ,14),I(2a,83,24,00),B(float ,7),I(24,00,00,00),B(boot1 ,40),I(3c,02,24,00),B(boot1 ,25),I(3c,00,24,00),B(boot1 ,25),I(3c,00,23,00),B(math ,59),I(1f,03,24,00),B(mop_class ,15),I(24,00,00,00),B(mop_class ,55),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,1b,89),B(math ,9),I(2a,84,24,00),B(float ,7),I(24,00,00,00),B(float ,7),I(24,00,00,00),B(boot1 ,40),I(3c,03,24,00),B(boot1 ,25),I(3c,00,24,00),B(boot1 ,25),I(3c,00,23,00),B(math ,60),I(1f,03,24,00),B(mop_class ,15),I(24,00,00,00),B(mop_class ,55),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,1b,89),B(math ,4),I(2a,83,24,00),B(float ,7),I(24,00,00,00),B(boot1 ,40),I(3c,02,24,00),B(boot1 ,25),I(3c,00,24,00),B(boot1 ,25),I(3c,00,23,00),B(math ,61),I(1f,03,24,00),B(mop_class ,15),I(24,00,00,00),B(mop_class ,55),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,1b,89),B(math ,11),I(2a,24,00,00),B(math ,12),I(2a,24,00,00),B(math ,10),I(2a,24,00,00),B(math ,5),I(2a,24,00,00),B(math ,8),I(2a,24,00,00),B(math ,6),I(2a,24,00,00),B(math ,3),I(2a,24,00,00),B(math ,16),I(2a,24,00,00),B(math ,15),I(2a,24,00,00),B(math ,13),I(2a,24,00,00),B(math ,2),I(2a,24,00,00),B(math ,7),I(2a,24,00,00),B(math ,14),I(2a,24,00,00),B(math ,9),I(2a,24,00,00),B(math ,4),I(2a,24,00,00),B(math ,11),I(2a,24,00,00),B(math ,12),I(26,00,00,00),I(00,00,00,03),I(02,83,24,00),B(float ,7),I(24,00,00,00),B(boot1 ,40),I(3c,02,24,00),B(boot1 ,25),I(3c,00,24,00),B(math ,12),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,7),I(3c,02,1f,04),I(1f,04,23,00),B(math ,62),I(23,00,00,00),B(math ,46),I(3b,01,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(math ,12),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(math ,10),I(26,00,00,00),I(00,00,00,03),I(02,83,24,00),B(float ,7),I(24,00,00,00),B(boot1 ,40),I(3c,02,24,00),B(boot1 ,25),I(3c,00,24,00),B(math ,10),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,7),I(3c,02,1f,04),I(1f,04,23,00),B(math ,63),I(23,00,00,00),B(math ,45),I(3b,01,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(math ,10),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(math ,5),I(26,00,00,00),I(00,00,00,03),I(02,83,24,00),B(float ,7),I(24,00,00,00),B(boot1 ,40),I(3c,02,24,00),B(boot1 ,25),I(3c,00,24,00),B(math ,5),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,7),I(3c,02,1f,04),I(1f,04,23,00),B(math ,64),I(23,00,00,00),B(math ,44),I(3b,01,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(math ,5),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(math ,8),I(26,00,00,00),I(00,00,00,03),I(02,84,24,00),B(float ,7),I(24,00,00,00),B(float ,7),I(24,00,00,00),B(boot1 ,40),I(3c,03,24,00),B(boot1 ,25),I(3c,00,24,00),B(math ,8),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,7),I(3c,02,1f,04),I(1f,04,23,00),B(math ,65),I(23,00,00,00),B(math ,43),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(math ,8),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(math ,6),I(26,00,00,00),I(00,00,00,03),I(02,83,24,00),B(float ,7),I(24,00,00,00),B(boot1 ,40),I(3c,02,24,00),B(boot1 ,25),I(3c,00,24,00),B(math ,6),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,7),I(3c,02,1f,04),I(1f,04,23,00),B(math ,66),I(23,00,00,00),B(math ,42),I(3b,01,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(math ,6),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(math ,3),I(26,00,00,00),I(00,00,00,03),I(02,83,24,00),B(float ,7),I(24,00,00,00),B(boot1 ,40),I(3c,02,24,00),B(boot1 ,25),I(3c,00,24,00),B(math ,3),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,7),I(3c,02,1f,04),I(1f,04,23,00),B(math ,67),I(23,00,00,00),B(math ,41),I(3b,01,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(math ,3),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(math ,16),I(26,00,00,00),I(00,00,00,03),I(02,83,24,00),B(float ,7),I(24,00,00,00),B(boot1 ,40),I(3c,02,24,00),B(boot1 ,25),I(3c,00,24,00),B(math ,16),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,7),I(3c,02,1f,04),I(1f,04,23,00),B(math ,68),I(23,00,00,00),B(math ,40),I(3b,01,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(math ,16),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(math ,15),I(26,00,00,00),I(00,00,00,03),I(02,83,24,00),B(float ,7),I(24,00,00,00),B(boot1 ,40),I(3c,02,24,00),B(boot1 ,25),I(3c,00,24,00),B(math ,15),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,7),I(3c,02,1f,04),I(1f,04,23,00),B(math ,69),I(23,00,00,00),B(math ,39),I(3b,01,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(math ,15),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(math ,13),I(26,00,00,00),I(00,00,00,03),I(02,83,24,00),B(float ,7),I(24,00,00,00),B(boot1 ,40),I(3c,02,24,00),B(boot1 ,25),I(3c,00,24,00),B(math ,13),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,7),I(3c,02,1f,04),I(1f,04,23,00),B(math ,70),I(23,00,00,00),B(math ,38),I(3b,01,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(math ,13),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(math ,2),I(26,00,00,00),I(00,00,00,03),I(02,83,24,00),B(float ,7),I(24,00,00,00),B(boot1 ,40),I(3c,02,24,00),B(boot1 ,25),I(3c,00,24,00),B(math ,2),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,7),I(3c,02,1f,04),I(1f,04,23,00),B(math ,71),I(23,00,00,00),B(math ,37),I(3b,01,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(math ,2),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(math ,7),I(26,00,00,00),I(00,00,00,03),I(02,83,24,00),B(float ,7),I(24,00,00,00),B(boot1 ,40),I(3c,02,24,00),B(boot1 ,25),I(3c,00,24,00),B(math ,7),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,7),I(3c,02,1f,04),I(1f,04,23,00),B(math ,72),I(23,00,00,00),B(math ,36),I(3b,01,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(math ,7),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(math ,14),I(26,00,00,00),I(00,00,00,03),I(02,83,24,00),B(float ,7),I(24,00,00,00),B(boot1 ,40),I(3c,02,24,00),B(boot1 ,25),I(3c,00,24,00),B(math ,14),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,7),I(3c,02,1f,04),I(1f,04,23,00),B(math ,73),I(23,00,00,00),B(math ,35),I(3b,01,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(math ,14),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(math ,9),I(26,00,00,00),I(00,00,00,03),I(02,83,24,00),B(float ,7),I(24,00,00,00),B(boot1 ,40),I(3c,02,24,00),B(boot1 ,25),I(3c,00,24,00),B(math ,9),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,7),I(3c,02,1f,04),I(1f,04,23,00),B(math ,74),I(23,00,00,00),B(math ,34),I(3b,01,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(math ,9),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(math ,4),I(26,00,00,00),I(00,00,00,03),I(02,84,24,00),B(float ,7),I(24,00,00,00),B(float ,7),I(24,00,00,00),B(boot1 ,40),I(3c,03,24,00),B(boot1 ,25),I(3c,00,24,00),B(math ,4),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,7),I(3c,02,1f,04),I(1f,04,23,00),B(math ,75),I(23,00,00,00),B(math ,33),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(math ,4),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(math ,11),I(26,00,00,00),I(00,00,00,03),I(02,83,24,00),B(float ,7),I(24,00,00,00),B(boot1 ,40),I(3c,02,24,00),B(boot1 ,25),I(3c,00,24,00),B(math ,11),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,7),I(3c,02,1f,04),I(1f,04,23,00),B(math ,76),I(23,00,00,00),B(math ,32),I(3b,01,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(math ,11),I(1c,24,00,00),B(mop_meth ,5),I(3d,02,96,45),I(96,00,00,00)};

  /* Byte-vector with size: 48 is_init: 1 index: 0 binding: initialize-math */
  static const void *G00850[] = {I(87,25,00,00),B(math ,1),I(24,00,00,00),B(double ,1),I(3e,0b,24,00),B(double ,0),I(3c,00,21,01),I(24,00,00,00),B(telos ,1),I(3e,0b,24,00),B(telos ,0),I(3c,00,21,01),I(86,25,00,00),B(math ,16),I(86,25,00,00),B(math ,15),I(86,25,00,00),B(math ,14),I(86,25,00,00),B(math ,13),I(86,25,00,00),B(math ,12),I(86,25,00,00),B(math ,11),I(86,25,00,00),B(math ,10),I(86,25,00,00),B(math ,9),I(86,25,00,00),B(math ,8),I(86,25,00,00),B(math ,7),I(86,25,00,00),B(math ,6),I(86,25,00,00),B(math ,5),I(86,25,00,00),B(math ,4),I(86,25,00,00),B(math ,3),I(86,25,00,00),B(math ,2),I(23,00,00,00),B(math ,78),I(23,00,00,00),B(math ,77),I(3b,00,3d,00),I(00,ac,00,00)};


  /* Initializations */
  eul_allocate_bytevector( G00789,G00788);
  eul_allocate_bytevector( G00791,G00790);
  eul_allocate_bytevector( G00793,G00792);
  eul_allocate_bytevector( G00795,G00794);
  eul_allocate_bytevector( G00797,G00796);
  eul_allocate_bytevector( G00799,G00798);
  eul_allocate_bytevector( G00801,G00800);
  eul_allocate_bytevector( G00803,G00802);
  eul_allocate_bytevector( G00805,G00804);
  eul_allocate_bytevector( G00807,G00806);
  eul_allocate_bytevector( G00809,G00808);
  eul_allocate_bytevector( G00811,G00810);
  eul_allocate_bytevector( G00813,G00812);
  eul_allocate_bytevector( G00815,G00814);
  eul_allocate_bytevector( G00817,G00816);
  eul_intern_symbol(sym_820,"acos");
  eul_intern_symbol(sym_821,"asin");
  eul_intern_symbol(sym_822,"atan");
  eul_intern_symbol(sym_823,"atan2");
  eul_intern_symbol(sym_824,"cos");
  eul_intern_symbol(sym_825,"sin");
  eul_intern_symbol(sym_826,"tan");
  eul_intern_symbol(sym_827,"cosh");
  eul_intern_symbol(sym_828,"sinh");
  eul_intern_symbol(sym_829,"tanh");
  eul_intern_symbol(sym_830,"exp");
  eul_intern_symbol(sym_831,"log");
  eul_intern_symbol(sym_832,"log10");
  eul_intern_symbol(sym_833,"pow");
  eul_intern_symbol(sym_834,"sqrt");
  eul_intern_symbol(sym_835,"(method acos)");
  eul_intern_symbol(sym_836,"(method asin)");
  eul_intern_symbol(sym_837,"(method atan)");
  eul_intern_symbol(sym_838,"(method atan2)");
  eul_intern_symbol(sym_839,"(method cos)");
  eul_intern_symbol(sym_840,"(method sin)");
  eul_intern_symbol(sym_841,"(method tan)");
  eul_intern_symbol(sym_842,"(method cosh)");
  eul_intern_symbol(sym_843,"(method sinh)");
  eul_intern_symbol(sym_844,"(method tanh)");
  eul_intern_symbol(sym_845,"(method exp)");
  eul_intern_symbol(sym_846,"(method log)");
  eul_intern_symbol(sym_847,"(method log10)");
  eul_intern_symbol(sym_848,"(method pow)");
  eul_intern_symbol(sym_849,"(method sqrt)");
  eul_allocate_bytevector( G00819,G00818);
  eul_intern_symbol(sym_852,"top-level");
  eul_allocate_bytevector( G00851,G00850);

  /* Set local bindings */
  {
    int i;
    for (i = 2; i < 17; i++)
      math_bindings[i] = eul_nil;
  }

  math_bindings[ 17] = (LispRef) (LispRef (*) (Stack *, LispRef *, LispRef *)) ff_stub_acos773;
  math_bindings[ 18] = (LispRef) (LispRef (*) (Stack *, LispRef *, LispRef *)) ff_stub_asin774;
  math_bindings[ 19] = (LispRef) (LispRef (*) (Stack *, LispRef *, LispRef *)) ff_stub_atan775;
  math_bindings[ 20] = (LispRef) (LispRef (*) (Stack *, LispRef *, LispRef *)) ff_stub_atan2776;
  math_bindings[ 21] = (LispRef) (LispRef (*) (Stack *, LispRef *, LispRef *)) ff_stub_cos777;
  math_bindings[ 22] = (LispRef) (LispRef (*) (Stack *, LispRef *, LispRef *)) ff_stub_sin778;
  math_bindings[ 23] = (LispRef) (LispRef (*) (Stack *, LispRef *, LispRef *)) ff_stub_tan779;
  math_bindings[ 24] = (LispRef) (LispRef (*) (Stack *, LispRef *, LispRef *)) ff_stub_cosh780;
  math_bindings[ 25] = (LispRef) (LispRef (*) (Stack *, LispRef *, LispRef *)) ff_stub_sinh781;
  math_bindings[ 26] = (LispRef) (LispRef (*) (Stack *, LispRef *, LispRef *)) ff_stub_tanh782;
  math_bindings[ 27] = (LispRef) (LispRef (*) (Stack *, LispRef *, LispRef *)) ff_stub_exp783;
  math_bindings[ 28] = (LispRef) (LispRef (*) (Stack *, LispRef *, LispRef *)) ff_stub_log784;
  math_bindings[ 29] = (LispRef) (LispRef (*) (Stack *, LispRef *, LispRef *)) ff_stub_log10785;
  math_bindings[ 30] = (LispRef) (LispRef (*) (Stack *, LispRef *, LispRef *)) ff_stub_pow786;
  math_bindings[ 31] = (LispRef) (LispRef (*) (Stack *, LispRef *, LispRef *)) ff_stub_sqrt787;
  math_bindings[ 32] = G00789;
  math_bindings[ 33] = G00791;
  math_bindings[ 34] = G00793;
  math_bindings[ 35] = G00795;
  math_bindings[ 36] = G00797;
  math_bindings[ 37] = G00799;
  math_bindings[ 38] = G00801;
  math_bindings[ 39] = G00803;
  math_bindings[ 40] = G00805;
  math_bindings[ 41] = G00807;
  math_bindings[ 42] = G00809;
  math_bindings[ 43] = G00811;
  math_bindings[ 44] = G00813;
  math_bindings[ 45] = G00815;
  math_bindings[ 46] = G00817;
  math_bindings[ 47] = sym_820;
  math_bindings[ 48] = sym_821;
  math_bindings[ 49] = sym_822;
  math_bindings[ 50] = sym_823;
  math_bindings[ 51] = sym_824;
  math_bindings[ 52] = sym_825;
  math_bindings[ 53] = sym_826;
  math_bindings[ 54] = sym_827;
  math_bindings[ 55] = sym_828;
  math_bindings[ 56] = sym_829;
  math_bindings[ 57] = sym_830;
  math_bindings[ 58] = sym_831;
  math_bindings[ 59] = sym_832;
  math_bindings[ 60] = sym_833;
  math_bindings[ 61] = sym_834;
  math_bindings[ 62] = sym_835;
  math_bindings[ 63] = sym_836;
  math_bindings[ 64] = sym_837;
  math_bindings[ 65] = sym_838;
  math_bindings[ 66] = sym_839;
  math_bindings[ 67] = sym_840;
  math_bindings[ 68] = sym_841;
  math_bindings[ 69] = sym_842;
  math_bindings[ 70] = sym_843;
  math_bindings[ 71] = sym_844;
  math_bindings[ 72] = sym_845;
  math_bindings[ 73] = sym_846;
  math_bindings[ 74] = sym_847;
  math_bindings[ 75] = sym_848;
  math_bindings[ 76] = sym_849;
  math_bindings[ 77] = G00819;
  math_bindings[ 1] = eul_nil;
  math_bindings[ 78] = sym_852;
  eul_allocate_lambda( math_bindings[0], "initialize-math", 0, G00851);

  }
}


/* eof */
