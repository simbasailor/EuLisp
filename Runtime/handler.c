/** ----------------------------------------------------------------------- **
 **                 Generated by EuLisp System 'youtoo'
 ** ----------------------------------------------------------------------- **
 **  Description: C source file of EuLisp module handler
 **  Copyright: See file handler.em
 ** ----------------------------------------------------------------------- **/

#include "eulisp.h"


/* Imported modules */
extern void initialize_module_telos();
extern void initialize_module_callback();
extern void initialize_module_convert();
extern void initialize_module_convert1();
extern void initialize_module_fpi();
extern void initialize_module_float();
extern void initialize_module_string();
extern void initialize_module_collect();
extern LispRef convert1_bindings[];
extern LispRef convert_bindings[];
extern LispRef callback_bindings[];
extern LispRef telos_bindings[];
extern LispRef string_bindings[];
extern LispRef float_bindings[];
extern LispRef collect_bindings[];
extern LispRef fpi_bindings[];
extern LispRef mop_meth_bindings[];
extern LispRef boot_bindings[];
extern LispRef mop_gf_bindings[];
extern LispRef boot1_bindings[];
extern LispRef mop_class_bindings[];

/* Module bindings with size 83 */
LispRef handler_bindings[83];

/* Foreign functions */
static LispRef ff_stub_eul_int_as_eul_int_ref9466 (Stack *reg_value_stack, LispRef *sreg_value_sp, LispRef *sreg_value_sb)
{
  LispRef G009566, res;

  POPVAL1(G009566);
  FF_RES_CONVERT6(res,eul_int_as_eul_int_ref(FF_ARG_CONVERT8(G009566)));
  return res;
}

static LispRef ff_stub_eul_int_ref_as_c_int9467 (Stack *reg_value_stack, LispRef *sreg_value_sp, LispRef *sreg_value_sb)
{
  LispRef G009567, res;

  POPVAL1(G009567);
  FF_RES_CONVERT0(res,eul_int_ref_as_c_int(FF_ARG_CONVERT8(G009567)));
  return res;
}

static LispRef ff_stub_eul_c_vector_ref9468 (Stack *reg_value_stack, LispRef *sreg_value_sp, LispRef *sreg_value_sb)
{
  LispRef G009568, G009569, res;

  POPVAL1(G009569);
  POPVAL1(G009568);
  FF_RES_CONVERT0(res,eul_c_vector_ref(FF_ARG_CONVERT9(G009568), FF_ARG_CONVERT0(G009569)));
  return res;
}

static LispRef ff_stub_eul_c_vector_set9469 (Stack *reg_value_stack, LispRef *sreg_value_sp, LispRef *sreg_value_sb)
{
  LispRef G009570, G009571, G009572, res;

  POPVAL1(G009572);
  POPVAL1(G009571);
  POPVAL1(G009570);
  FF_RES_CONVERT0(res,eul_c_vector_set(FF_ARG_CONVERT9(G009570), FF_ARG_CONVERT0(G009571), FF_ARG_CONVERT0(G009572)));
  return res;
}

static LispRef ff_stub_eul_double_as_eul_double_ref9470 (Stack *reg_value_stack, LispRef *sreg_value_sp, LispRef *sreg_value_sb)
{
  LispRef G009573, res;

  POPVAL1(G009573);
  FF_RES_CONVERT6(res,eul_double_as_eul_double_ref(FF_ARG_CONVERT8(G009573)));
  return res;
}

static LispRef ff_stub_eul_double_ref_as_c_double9471 (Stack *reg_value_stack, LispRef *sreg_value_sp, LispRef *sreg_value_sb)
{
  LispRef G009574, res;

  POPVAL1(G009574);
  FF_RES_CONVERT2(res,eul_double_ref_as_c_double(FF_ARG_CONVERT8(G009574)));
  return res;
}

static LispRef ff_stub_eul_c_vector_ref9472 (Stack *reg_value_stack, LispRef *sreg_value_sp, LispRef *sreg_value_sb)
{
  LispRef G009575, G009576, res;

  POPVAL1(G009576);
  POPVAL1(G009575);
  FF_RES_CONVERT2(res,eul_c_vector_ref(FF_ARG_CONVERT10(G009575), FF_ARG_CONVERT0(G009576)));
  return res;
}

static LispRef ff_stub_eul_c_vector_set9473 (Stack *reg_value_stack, LispRef *sreg_value_sp, LispRef *sreg_value_sb)
{
  LispRef G009577, G009578, G009579, res;

  POPVAL1(G009579);
  POPVAL1(G009578);
  POPVAL1(G009577);
  FF_RES_CONVERT2(res,eul_c_vector_set(FF_ARG_CONVERT10(G009577), FF_ARG_CONVERT0(G009578), FF_ARG_CONVERT2(G009579)));
  return res;
}

static LispRef ff_stub_eul_string_as_eul_string_ref9474 (Stack *reg_value_stack, LispRef *sreg_value_sp, LispRef *sreg_value_sb)
{
  LispRef G009580, res;

  POPVAL1(G009580);
  FF_RES_CONVERT6(res,eul_string_as_eul_string_ref(FF_ARG_CONVERT8(G009580)));
  return res;
}

static LispRef ff_stub_eul_string_ref_as_c_string9475 (Stack *reg_value_stack, LispRef *sreg_value_sp, LispRef *sreg_value_sb)
{
  LispRef G009581, res;

  POPVAL1(G009581);
  FF_RES_CONVERT3(res,eul_string_ref_as_c_string(FF_ARG_CONVERT8(G009581)));
  return res;
}

static LispRef ff_stub_eul_c_vector_ref9476 (Stack *reg_value_stack, LispRef *sreg_value_sp, LispRef *sreg_value_sb)
{
  LispRef G009582, G009583, res;

  POPVAL1(G009583);
  POPVAL1(G009582);
  FF_RES_CONVERT3(res,eul_c_vector_ref(FF_ARG_CONVERT11(G009582), FF_ARG_CONVERT0(G009583)));
  return res;
}

static LispRef ff_stub_eul_c_vector_set9477 (Stack *reg_value_stack, LispRef *sreg_value_sp, LispRef *sreg_value_sb)
{
  LispRef G009584, G009585, G009586, res;

  POPVAL1(G009586);
  POPVAL1(G009585);
  POPVAL1(G009584);
  FF_RES_CONVERT3(res,eul_c_vector_set(FF_ARG_CONVERT11(G009584), FF_ARG_CONVERT0(G009585), FF_ARG_CONVERT3(G009586)));
  return res;
}


/* Initialize module only once */
static int is_initialized = 0;

/* Initialize module handler */
void initialize_module_handler()
{
  if (is_initialized) return;
  initialize_module_telos();
  initialize_module_callback();
  initialize_module_convert();
  initialize_module_convert1();
  initialize_module_fpi();
  initialize_module_float();
  initialize_module_string();
  initialize_module_collect();
  eul_fast_table_set(eul_modules,"handler",(LispRef) handler_bindings);
  is_initialized = 1;
  {
  /* Declarations */
  LispRef sym_9565, G009564, G009562, sym_9560, sym_9559, sym_9558, sym_9555, sym_9554, sym_9553, sym_9552, sym_9551, sym_9548, sym_9547, sym_9546, sym_9545, sym_9544, sym_9543, sym_9542, sym_9540, sym_9538, sym_9537, sym_9536, sym_9535, sym_9534, sym_9533, sym_9532, sym_9531, key_9529, key_9528, key_9527, sym_9526, key_9525, key_9524, sym_9523, key_9522, G009521, G009519, G009517, G009515, G009513, G009511, G009509, G009507, G009505, G009503, G009501, G009499, G009497, G009495, G009493, G009491, G009489, G009487, G009485, G009483, G009481, G009479;

  /* Code vector and literal definitions */
  /* Byte-vector with size: 3 is_init: 0 index: 23 binding: (method-(setter element)) */
  static const void *G009478[] = {I(43,03,41,00),B(handler ,22),I(45,03,00,00)};

  /* Byte-vector with size: 3 is_init: 0 index: 24 binding: (method-element) */
  static const void *G009480[] = {I(ab,41,00,00),B(handler ,21),I(45,02,00,00)};

  /* Byte-vector with size: 3 is_init: 0 index: 25 binding: (method-(converter <string>)) */
  static const void *G009482[] = {I(aa,41,00,00),B(handler ,20),I(45,01,00,00)};

  /* Byte-vector with size: 3 is_init: 0 index: 26 binding: (method-(converter <string*>)) */
  static const void *G009484[] = {I(aa,41,00,00),B(handler ,19),I(45,01,00,00)};

  /* Byte-vector with size: 1 is_init: 0 index: 27 binding: (method-string*p) */
  static const void *G009486[] = {I(aa,1b,45,01)};

  /* Byte-vector with size: 1 is_init: 0 index: 28 binding: (method-string*p) */
  static const void *G009488[] = {I(aa,86,45,01)};

  /* Byte-vector with size: 3 is_init: 0 index: 29 binding: (method-(setter element)) */
  static const void *G009490[] = {I(43,03,41,00),B(handler ,18),I(45,03,00,00)};

  /* Byte-vector with size: 3 is_init: 0 index: 30 binding: (method-element) */
  static const void *G009492[] = {I(ab,41,00,00),B(handler ,17),I(45,02,00,00)};

  /* Byte-vector with size: 3 is_init: 0 index: 31 binding: (method-(converter <double>)) */
  static const void *G009494[] = {I(aa,41,00,00),B(handler ,16),I(45,01,00,00)};

  /* Byte-vector with size: 3 is_init: 0 index: 32 binding: (method-(converter <double*>)) */
  static const void *G009496[] = {I(aa,41,00,00),B(handler ,15),I(45,01,00,00)};

  /* Byte-vector with size: 1 is_init: 0 index: 33 binding: (method-double*p) */
  static const void *G009498[] = {I(aa,1b,45,01)};

  /* Byte-vector with size: 1 is_init: 0 index: 34 binding: (method-double*p) */
  static const void *G009500[] = {I(aa,86,45,01)};

  /* Byte-vector with size: 3 is_init: 0 index: 35 binding: (method-(setter element)) */
  static const void *G009502[] = {I(43,03,41,00),B(handler ,14),I(45,03,00,00)};

  /* Byte-vector with size: 3 is_init: 0 index: 36 binding: (method-element) */
  static const void *G009504[] = {I(ab,41,00,00),B(handler ,13),I(45,02,00,00)};

  /* Byte-vector with size: 3 is_init: 0 index: 37 binding: (method-(converter <int>)) */
  static const void *G009506[] = {I(aa,41,00,00),B(handler ,12),I(45,01,00,00)};

  /* Byte-vector with size: 3 is_init: 0 index: 38 binding: (method-(converter <int*>)) */
  static const void *G009508[] = {I(aa,41,00,00),B(handler ,11),I(45,01,00,00)};

  /* Byte-vector with size: 1 is_init: 0 index: 39 binding: (method-int*p) */
  static const void *G009510[] = {I(aa,1b,45,01)};

  /* Byte-vector with size: 1 is_init: 0 index: 40 binding: (method-int*p) */
  static const void *G009512[] = {I(aa,86,45,01)};

  /* Byte-vector with size: 1 is_init: 0 index: 41 binding: (method-handlerp) */
  static const void *G009514[] = {I(aa,1b,45,01)};

  /* Byte-vector with size: 1 is_init: 0 index: 42 binding: (method-handlerp) */
  static const void *G009516[] = {I(aa,86,45,01)};

  /* Byte-vector with size: 4 is_init: 0 index: 43 binding: (setter-handle) */
  static const void *G009518[] = {I(ab,1c,82,1d),I(24,00,00,00),B(handler ,2),I(09,45,02,00)};

  eul_allocate_static_cons(cons_9530, NULL, NULL);
  eul_allocate_static_cons(cons_9541, NULL, NULL);
  eul_allocate_static_cons(cons_9539, NULL, eul_as_static(cons_9541));
  eul_allocate_static_cons(cons_9550, NULL, NULL);
  eul_allocate_static_cons(cons_9549, NULL, eul_as_static(cons_9550));
  eul_allocate_static_cons(cons_9557, NULL, NULL);
  eul_allocate_static_cons(cons_9556, NULL, eul_as_static(cons_9557));
  /* Byte-vector with size: 951 is_init: 0 index: 80 binding: top-level */
  static const void *G009520[] = {I(a9,24,00,00),B(mop_class ,21),I(24,00,00,00),B(boot1 ,26),I(3c,01,23,00),B(handler ,44),I(23,00,00,00),B(handler ,45),I(23,00,00,00),B(handler ,46),I(23,00,00,00),B(handler ,47),I(24,00,00,00),B(boot1 ,26),I(3c,04,1b,24),B(boot1 ,26),I(3c,01,24,00),B(mop_class ,71),I(23,00,00,00),B(handler ,44),I(23,00,00,00),B(handler ,48),I(23,00,00,00),B(handler ,49),I(1f,06,23,00),B(handler ,50),I(1f,06,23,00),B(handler ,51),I(23,00,00,00),B(handler ,52),I(24,00,00,00),B(mop_gf ,2),I(3c,09,1b,89),B(handler ,2),I(2a,28,28,1b),I(89,00,00,00),B(handler ,5),I(2a,28,29,1b),I(89,00,00,00),B(handler ,6),I(2a,28,2a,1b),I(89,00,00,00),B(handler ,7),I(2a,83,24,00),B(mop_class ,21),I(24,00,00,00),B(boot1 ,39),I(3c,02,24,00),B(boot1 ,26),I(3c,00,24,00),B(boot1 ,26),I(3c,00,23,00),B(handler ,53),I(1f,03,24,00),B(mop_class ,16),I(24,00,00,00),B(mop_class ,55),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,1b,89),B(handler ,10),I(2a,83,24,00),B(mop_class ,21),I(24,00,00,00),B(boot1 ,39),I(3c,02,24,00),B(boot1 ,26),I(3c,00,24,00),B(boot1 ,26),I(3c,00,23,00),B(handler ,54),I(1f,03,24,00),B(mop_class ,16),I(24,00,00,00),B(mop_class ,55),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,1b,89),B(handler ,9),I(2a,83,24,00),B(mop_class ,21),I(24,00,00,00),B(boot1 ,39),I(3c,02,24,00),B(boot1 ,26),I(3c,00,24,00),B(boot1 ,26),I(3c,00,23,00),B(handler ,55),I(1f,03,24,00),B(mop_class ,16),I(24,00,00,00),B(mop_class ,55),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,1b,89),B(handler ,8),I(2a,83,24,00),B(mop_class ,21),I(24,00,00,00),B(boot1 ,39),I(3c,02,24,00),B(boot1 ,26),I(3c,00,24,00),B(boot1 ,26),I(3c,00,23,00),B(handler ,56),I(1f,03,24,00),B(mop_class ,16),I(24,00,00,00),B(mop_class ,55),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,1b,89),B(handler ,3),I(2a,24,00,00),B(boot1 ,41),I(24,00,00,00),B(boot1 ,41),I(3c,01,24,00),B(handler ,4),I(23,00,00,00),B(handler ,57),I(23,00,00,00),B(handler ,43),I(3b,02,1d,3c),I(02,2a,24,00),B(handler ,10),I(26,00,00,00),I(00,00,00,03),I(02,83,24,00),B(mop_class ,21),I(24,00,00,00),B(boot1 ,39),I(3c,02,24,00),B(boot1 ,26),I(3c,00,24,00),B(handler ,10),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,11),I(3c,02,1f,04),I(1f,04,23,00),B(handler ,58),I(23,00,00,00),B(handler ,42),I(3b,01,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(handler ,10),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(handler ,10),I(26,00,00,00),I(00,00,00,03),I(02,83,24,00),B(handler ,2),I(24,00,00,00),B(boot1 ,39),I(3c,02,24,00),B(boot1 ,26),I(3c,00,24,00),B(handler ,10),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,11),I(3c,02,1f,04),I(1f,04,23,00),B(handler ,58),I(23,00,00,00),B(handler ,41),I(3b,01,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(handler ,10),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(handler ,10),I(2a,24,00,00),B(handler ,2),I(2a,24,00,00),B(handler ,5),I(24,00,00,00),B(mop_class ,71),I(05,2a,24,00),B(handler ,2),I(24,00,00,00),B(boot1 ,26),I(3c,01,24,00),B(boot1 ,26),I(3c,00,23,00),B(handler ,44),I(23,00,00,00),B(handler ,59),I(23,00,00,00),B(handler ,49),I(1f,04,23,00),B(handler ,50),I(1f,05,23,00),B(handler ,51),I(86,24,00,00),B(boot1 ,26),I(3c,08,24,00),B(handler ,5),I(1c,24,00,00),B(mop_gf ,12),I(3c,02,2a,24),B(handler ,9),I(26,00,00,00),I(00,00,00,03),I(02,83,24,00),B(mop_class ,21),I(24,00,00,00),B(boot1 ,39),I(3c,02,24,00),B(boot1 ,26),I(3c,00,24,00),B(handler ,9),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,11),I(3c,02,1f,04),I(1f,04,23,00),B(handler ,60),I(23,00,00,00),B(handler ,40),I(3b,01,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(handler ,9),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(handler ,9),I(26,00,00,00),I(00,00,00,03),I(02,83,24,00),B(handler ,5),I(24,00,00,00),B(boot1 ,39),I(3c,02,24,00),B(boot1 ,26),I(3c,00,24,00),B(handler ,9),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,11),I(3c,02,1f,04),I(1f,04,23,00),B(handler ,60),I(23,00,00,00),B(handler ,39),I(3b,01,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(handler ,9),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(handler ,9),I(2a,24,00,00),B(handler ,5),I(2a,24,00,00),B(mop_class ,13),I(24,00,00,00),B(boot1 ,41),I(3c,01,83,24),B(mop_class ,21),I(24,00,00,00),B(boot1 ,39),I(3c,02,24,00),B(boot1 ,26),I(3c,00,24,00),B(boot1 ,26),I(3c,00,23,00),B(handler ,63),I(1f,03,24,00),B(mop_class ,16),I(24,00,00,00),B(mop_class ,55),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,24,00),B(handler ,5),I(1c,1f,06,3c),I(02,2a,24,00),B(handler ,5),I(24,00,00,00),B(mop_class ,13),I(3c,01,2a,24),B(handler ,5),I(24,00,00,00),B(mop_class ,13),I(3c,01,24,00),B(handler ,5),I(24,00,00,00),B(mop_class ,13),I(3c,01,1b,26),I(00,00,00,03),I(02,83,24,00),B(fpi ,5),I(24,00,00,00),B(boot1 ,39),I(3c,02,24,00),B(boot1 ,26),I(3c,00,24,00),B(handler ,5),I(24,00,00,00),B(mop_class ,13),I(3c,01,1b,26),I(00,00,00,04),I(02,1d,1c,24),B(boot ,11),I(3c,02,1f,05),I(1f,05,23,00),B(handler ,64),I(23,00,00,00),B(handler ,38),I(3b,01,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,1f,08),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(fpi ,5),I(24,00,00,00),B(mop_class ,13),I(3c,01,24,00),B(fpi ,5),I(24,00,00,00),B(mop_class ,13),I(3c,01,1b,26),I(00,00,00,03),I(02,83,24,00),B(handler ,5),I(24,00,00,00),B(boot1 ,39),I(3c,02,24,00),B(boot1 ,26),I(3c,00,24,00),B(fpi ,5),I(24,00,00,00),B(mop_class ,13),I(3c,01,1b,26),I(00,00,00,04),I(02,1d,1c,24),B(boot ,11),I(3c,02,1f,05),I(1f,05,23,00),B(handler ,65),I(23,00,00,00),B(handler ,37),I(3b,01,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,1f,08),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(collect ,23),I(26,00,00,00),I(00,00,00,03),I(02,84,24,00),B(handler ,5),I(24,00,00,00),B(fpi ,5),I(24,00,00,00),B(boot1 ,39),I(3c,03,24,00),B(boot1 ,26),I(3c,00,24,00),B(collect ,23),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,11),I(3c,02,1f,04),I(1f,04,23,00),B(handler ,66),I(23,00,00,00),B(handler ,36),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(collect ,23),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(collect ,23),I(24,00,00,00),B(boot1 ,41),I(3c,01,24,00),B(collect ,23),I(24,00,00,00),B(boot1 ,41),I(3c,01,1b,26),I(00,00,00,03),I(02,26,00,00),I(00,00,00,03),I(24,00,00,00),B(handler ,5),I(24,00,00,00),B(fpi ,5),I(86,24,00,00),B(boot1 ,39),I(3c,04,24,00),B(boot1 ,26),I(3c,00,24,00),B(collect ,23),I(24,00,00,00),B(boot1 ,41),I(3c,01,1b,26),I(00,00,00,04),I(02,1d,1c,24),B(boot ,11),I(3c,02,1f,05),I(1f,05,23,00),B(handler ,67),I(23,00,00,00),B(handler ,35),I(3b,03,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,1f,08),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(handler ,6),I(24,00,00,00),B(mop_class ,71),I(05,2a,24,00),B(handler ,2),I(24,00,00,00),B(boot1 ,26),I(3c,01,24,00),B(boot1 ,26),I(3c,00,23,00),B(handler ,44),I(23,00,00,00),B(handler ,68),I(23,00,00,00),B(handler ,49),I(1f,04,23,00),B(handler ,50),I(1f,05,23,00),B(handler ,51),I(86,24,00,00),B(boot1 ,26),I(3c,08,24,00),B(handler ,6),I(1c,24,00,00),B(mop_gf ,12),I(3c,02,2a,24),B(handler ,8),I(26,00,00,00),I(00,00,00,03),I(02,83,24,00),B(mop_class ,21),I(24,00,00,00),B(boot1 ,39),I(3c,02,24,00),B(boot1 ,26),I(3c,00,24,00),B(handler ,8),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,11),I(3c,02,1f,04),I(1f,04,23,00),B(handler ,69),I(23,00,00,00),B(handler ,34),I(3b,01,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(handler ,8),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(handler ,8),I(26,00,00,00),I(00,00,00,03),I(02,83,24,00),B(handler ,6),I(24,00,00,00),B(boot1 ,39),I(3c,02,24,00),B(boot1 ,26),I(3c,00,24,00),B(handler ,8),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,11),I(3c,02,1f,04),I(1f,04,23,00),B(handler ,69),I(23,00,00,00),B(handler ,33),I(3b,01,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(handler ,8),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(handler ,8),I(2a,24,00,00),B(handler ,6),I(2a,24,00,00),B(mop_class ,13),I(24,00,00,00),B(boot1 ,41),I(3c,01,83,24),B(mop_class ,21),I(24,00,00,00),B(boot1 ,39),I(3c,02,24,00),B(boot1 ,26),I(3c,00,24,00),B(boot1 ,26),I(3c,00,23,00),B(handler ,71),I(1f,03,24,00),B(mop_class ,16),I(24,00,00,00),B(mop_class ,55),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,24,00),B(handler ,6),I(1c,1f,06,3c),I(02,2a,24,00),B(handler ,6),I(24,00,00,00),B(mop_class ,13),I(3c,01,2a,24),B(handler ,6),I(24,00,00,00),B(mop_class ,13),I(3c,01,24,00),B(handler ,6),I(24,00,00,00),B(mop_class ,13),I(3c,01,1b,26),I(00,00,00,03),I(02,83,24,00),B(float ,6),I(24,00,00,00),B(boot1 ,39),I(3c,02,24,00),B(boot1 ,26),I(3c,00,24,00),B(handler ,6),I(24,00,00,00),B(mop_class ,13),I(3c,01,1b,26),I(00,00,00,04),I(02,1d,1c,24),B(boot ,11),I(3c,02,1f,05),I(1f,05,23,00),B(handler ,72),I(23,00,00,00),B(handler ,32),I(3b,01,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,1f,08),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(float ,6),I(24,00,00,00),B(mop_class ,13),I(3c,01,24,00),B(float ,6),I(24,00,00,00),B(mop_class ,13),I(3c,01,1b,26),I(00,00,00,03),I(02,83,24,00),B(handler ,6),I(24,00,00,00),B(boot1 ,39),I(3c,02,24,00),B(boot1 ,26),I(3c,00,24,00),B(float ,6),I(24,00,00,00),B(mop_class ,13),I(3c,01,1b,26),I(00,00,00,04),I(02,1d,1c,24),B(boot ,11),I(3c,02,1f,05),I(1f,05,23,00),B(handler ,73),I(23,00,00,00),B(handler ,31),I(3b,01,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,1f,08),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(collect ,23),I(26,00,00,00),I(00,00,00,03),I(02,84,24,00),B(handler ,6),I(24,00,00,00),B(fpi ,5),I(24,00,00,00),B(boot1 ,39),I(3c,03,24,00),B(boot1 ,26),I(3c,00,24,00),B(collect ,23),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,11),I(3c,02,1f,04),I(1f,04,23,00),B(handler ,66),I(23,00,00,00),B(handler ,30),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(collect ,23),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(collect ,23),I(24,00,00,00),B(boot1 ,41),I(3c,01,24,00),B(collect ,23),I(24,00,00,00),B(boot1 ,41),I(3c,01,1b,26),I(00,00,00,03),I(02,26,00,00),I(00,00,00,03),I(24,00,00,00),B(handler ,6),I(24,00,00,00),B(fpi ,5),I(86,24,00,00),B(boot1 ,39),I(3c,04,24,00),B(boot1 ,26),I(3c,00,24,00),B(collect ,23),I(24,00,00,00),B(boot1 ,41),I(3c,01,1b,26),I(00,00,00,04),I(02,1d,1c,24),B(boot ,11),I(3c,02,1f,05),I(1f,05,23,00),B(handler ,67),I(23,00,00,00),B(handler ,29),I(3b,03,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,1f,08),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(handler ,7),I(24,00,00,00),B(mop_class ,71),I(05,2a,24,00),B(handler ,2),I(24,00,00,00),B(boot1 ,26),I(3c,01,24,00),B(boot1 ,26),I(3c,00,23,00),B(handler ,44),I(23,00,00,00),B(handler ,74),I(23,00,00,00),B(handler ,49),I(1f,04,23,00),B(handler ,50),I(1f,05,23,00),B(handler ,51),I(86,24,00,00),B(boot1 ,26),I(3c,08,24,00),B(handler ,7),I(1c,24,00,00),B(mop_gf ,12),I(3c,02,2a,24),B(handler ,3),I(26,00,00,00),I(00,00,00,03),I(02,83,24,00),B(mop_class ,21),I(24,00,00,00),B(boot1 ,39),I(3c,02,24,00),B(boot1 ,26),I(3c,00,24,00),B(handler ,3),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,11),I(3c,02,1f,04),I(1f,04,23,00),B(handler ,75),I(23,00,00,00),B(handler ,28),I(3b,01,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(handler ,3),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(handler ,3),I(26,00,00,00),I(00,00,00,03),I(02,83,24,00),B(handler ,7),I(24,00,00,00),B(boot1 ,39),I(3c,02,24,00),B(boot1 ,26),I(3c,00,24,00),B(handler ,3),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,11),I(3c,02,1f,04),I(1f,04,23,00),B(handler ,75),I(23,00,00,00),B(handler ,27),I(3b,01,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(handler ,3),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(handler ,3),I(2a,24,00,00),B(handler ,7),I(2a,24,00,00),B(mop_class ,13),I(24,00,00,00),B(boot1 ,41),I(3c,01,83,24),B(mop_class ,21),I(24,00,00,00),B(boot1 ,39),I(3c,02,24,00),B(boot1 ,26),I(3c,00,24,00),B(boot1 ,26),I(3c,00,23,00),B(handler ,77),I(1f,03,24,00),B(mop_class ,16),I(24,00,00,00),B(mop_class ,55),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,24,00),B(handler ,7),I(1c,1f,06,3c),I(02,2a,24,00),B(handler ,7),I(24,00,00,00),B(mop_class ,13),I(3c,01,2a,24),B(handler ,7),I(24,00,00,00),B(mop_class ,13),I(3c,01,24,00),B(handler ,7),I(24,00,00,00),B(mop_class ,13),I(3c,01,1b,26),I(00,00,00,03),I(02,83,24,00),B(string ,13),I(24,00,00,00),B(boot1 ,39),I(3c,02,24,00),B(boot1 ,26),I(3c,00,24,00),B(handler ,7),I(24,00,00,00),B(mop_class ,13),I(3c,01,1b,26),I(00,00,00,04),I(02,1d,1c,24),B(boot ,11),I(3c,02,1f,05),I(1f,05,23,00),B(handler ,78),I(23,00,00,00),B(handler ,26),I(3b,01,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,1f,08),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(string ,13),I(24,00,00,00),B(mop_class ,13),I(3c,01,24,00),B(string ,13),I(24,00,00,00),B(mop_class ,13),I(3c,01,1b,26),I(00,00,00,03),I(02,83,24,00),B(handler ,7),I(24,00,00,00),B(boot1 ,39),I(3c,02,24,00),B(boot1 ,26),I(3c,00,24,00),B(string ,13),I(24,00,00,00),B(mop_class ,13),I(3c,01,1b,26),I(00,00,00,04),I(02,1d,1c,24),B(boot ,11),I(3c,02,1f,05),I(1f,05,23,00),B(handler ,79),I(23,00,00,00),B(handler ,25),I(3b,01,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,1f,08),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(collect ,23),I(26,00,00,00),I(00,00,00,03),I(02,84,24,00),B(handler ,7),I(24,00,00,00),B(fpi ,5),I(24,00,00,00),B(boot1 ,39),I(3c,03,24,00),B(boot1 ,26),I(3c,00,24,00),B(collect ,23),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,11),I(3c,02,1f,04),I(1f,04,23,00),B(handler ,66),I(23,00,00,00),B(handler ,24),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(collect ,23),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(collect ,23),I(24,00,00,00),B(boot1 ,41),I(3c,01,24,00),B(collect ,23),I(24,00,00,00),B(boot1 ,41),I(3c,01,1b,26),I(00,00,00,03),I(02,26,00,00),I(00,00,00,03),I(24,00,00,00),B(handler ,7),I(24,00,00,00),B(fpi ,5),I(86,24,00,00),B(boot1 ,39),I(3c,04,24,00),B(boot1 ,26),I(3c,00,24,00),B(collect ,23),I(24,00,00,00),B(boot1 ,41),I(3c,01,1b,26),I(00,00,00,04),I(02,1d,1c,24),B(boot ,11),I(3c,02,1f,05),I(1f,05,23,00),B(handler ,67),I(23,00,00,00),B(handler ,23),I(3b,03,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,1f,08),I(1c,24,00,00),B(mop_meth ,5),I(3d,02,c3,45),I(c3,00,00,00)};

  /* Byte-vector with size: 3 is_init: 0 index: 81 binding: handle */
  static const void *G009561[] = {I(aa,82,24,00),B(handler ,2),I(08,45,00,00)};

  /* Byte-vector with size: 70 is_init: 1 index: 0 binding: initialize-handler */
  static const void *G009563[] = {I(87,25,00,00),B(handler ,1),I(24,00,00,00),B(collect ,1),I(3e,0b,24,00),B(collect ,0),I(3c,00,21,01),I(24,00,00,00),B(string ,1),I(3e,0b,24,00),B(string ,0),I(3c,00,21,01),I(24,00,00,00),B(float ,1),I(3e,0b,24,00),B(float ,0),I(3c,00,21,01),I(24,00,00,00),B(fpi ,1),I(3e,0b,24,00),B(fpi ,0),I(3c,00,21,01),I(24,00,00,00),B(convert1 ,1),I(3e,0b,24,00),B(convert1 ,0),I(3c,00,21,01),I(24,00,00,00),B(convert ,1),I(3e,0b,24,00),B(convert ,0),I(3c,00,21,01),I(24,00,00,00),B(callback ,1),I(3e,0b,24,00),B(callback ,0),I(3c,00,21,01),I(24,00,00,00),B(telos ,1),I(3e,0b,24,00),B(telos ,0),I(3c,00,21,01),I(86,25,00,00),B(handler ,10),I(86,25,00,00),B(handler ,9),I(86,25,00,00),B(handler ,8),I(86,25,00,00),B(handler ,7),I(86,25,00,00),B(handler ,6),I(86,25,00,00),B(handler ,5),I(23,00,00,00),B(handler ,45),I(23,00,00,00),B(handler ,81),I(3b,01,25,00),B(handler ,4),I(86,25,00,00),B(handler ,3),I(86,25,00,00),B(handler ,2),I(23,00,00,00),B(handler ,82),I(23,00,00,00),B(handler ,80),I(3b,00,3d,00),I(00,ac,00,00)};


  /* Initializations */
  eul_allocate_bytevector( G009479,G009478);
  eul_allocate_bytevector( G009481,G009480);
  eul_allocate_bytevector( G009483,G009482);
  eul_allocate_bytevector( G009485,G009484);
  eul_allocate_bytevector( G009487,G009486);
  eul_allocate_bytevector( G009489,G009488);
  eul_allocate_bytevector( G009491,G009490);
  eul_allocate_bytevector( G009493,G009492);
  eul_allocate_bytevector( G009495,G009494);
  eul_allocate_bytevector( G009497,G009496);
  eul_allocate_bytevector( G009499,G009498);
  eul_allocate_bytevector( G009501,G009500);
  eul_allocate_bytevector( G009503,G009502);
  eul_allocate_bytevector( G009505,G009504);
  eul_allocate_bytevector( G009507,G009506);
  eul_allocate_bytevector( G009509,G009508);
  eul_allocate_bytevector( G009511,G009510);
  eul_allocate_bytevector( G009513,G009512);
  eul_allocate_bytevector( G009515,G009514);
  eul_allocate_bytevector( G009517,G009516);
  eul_allocate_bytevector( G009519,G009518);
  eul_intern_keyword(key_9522,"name");
  eul_intern_symbol(sym_9523,"handle");
  eul_intern_keyword(key_9524,"keyword");
  eul_intern_keyword(key_9525,"handle");
  eul_intern_symbol(sym_9526,"handler");
  eul_intern_keyword(key_9527,"direct-superclasses");
  eul_intern_keyword(key_9528,"direct-slots");
  eul_intern_keyword(key_9529,"direct-keywords");
  object_class(cons_9530) = eul_static_cons_class;
  eul_car(cons_9530) = key_9525;
  eul_cdr(cons_9530) = eul_nil;
  eul_intern_symbol(sym_9531,"handlerp");
  eul_intern_symbol(sym_9532,"int*p");
  eul_intern_symbol(sym_9533,"double*p");
  eul_intern_symbol(sym_9534,"string*p");
  eul_intern_symbol(sym_9535,"(setter handle)");
  eul_intern_symbol(sym_9536,"(method handlerp)");
  eul_intern_symbol(sym_9537,"int*");
  eul_intern_symbol(sym_9538,"(method int*p)");
  eul_intern_symbol(sym_9540,"converter");
  eul_intern_symbol(sym_9542,"<int*>");
  object_class(cons_9541) = eul_static_cons_class;
  eul_car(cons_9541) = sym_9542;
  eul_cdr(cons_9541) = eul_nil;
  object_class(cons_9539) = eul_static_cons_class;
  eul_car(cons_9539) = sym_9540;
  eul_intern_symbol(sym_9543,"(method (converter <int*>))");
  eul_intern_symbol(sym_9544,"(method (converter <int>))");
  eul_intern_symbol(sym_9545,"(method element)");
  eul_intern_symbol(sym_9546,"(method (setter element))");
  eul_intern_symbol(sym_9547,"double*");
  eul_intern_symbol(sym_9548,"(method double*p)");
  eul_intern_symbol(sym_9551,"<double*>");
  object_class(cons_9550) = eul_static_cons_class;
  eul_car(cons_9550) = sym_9551;
  eul_cdr(cons_9550) = eul_nil;
  object_class(cons_9549) = eul_static_cons_class;
  eul_car(cons_9549) = sym_9540;
  eul_intern_symbol(sym_9552,"(method (converter <double*>))");
  eul_intern_symbol(sym_9553,"(method (converter <double>))");
  eul_intern_symbol(sym_9554,"string*");
  eul_intern_symbol(sym_9555,"(method string*p)");
  eul_intern_symbol(sym_9558,"<string*>");
  object_class(cons_9557) = eul_static_cons_class;
  eul_car(cons_9557) = sym_9558;
  eul_cdr(cons_9557) = eul_nil;
  object_class(cons_9556) = eul_static_cons_class;
  eul_car(cons_9556) = sym_9540;
  eul_intern_symbol(sym_9559,"(method (converter <string*>))");
  eul_intern_symbol(sym_9560,"(method (converter <string>))");
  eul_allocate_bytevector( G009521,G009520);
  eul_allocate_bytevector( G009562,G009561);
  eul_intern_symbol(sym_9565,"top-level");
  eul_allocate_bytevector( G009564,G009563);

  /* Set local bindings */
  {
    int i;
    for (i = 2; i < 11; i++)
      handler_bindings[i] = eul_nil;
  }

  handler_bindings[ 11] = (LispRef) (LispRef (*) (Stack *, LispRef *, LispRef *)) ff_stub_eul_int_as_eul_int_ref9466;
  handler_bindings[ 12] = (LispRef) (LispRef (*) (Stack *, LispRef *, LispRef *)) ff_stub_eul_int_ref_as_c_int9467;
  handler_bindings[ 13] = (LispRef) (LispRef (*) (Stack *, LispRef *, LispRef *)) ff_stub_eul_c_vector_ref9468;
  handler_bindings[ 14] = (LispRef) (LispRef (*) (Stack *, LispRef *, LispRef *)) ff_stub_eul_c_vector_set9469;
  handler_bindings[ 15] = (LispRef) (LispRef (*) (Stack *, LispRef *, LispRef *)) ff_stub_eul_double_as_eul_double_ref9470;
  handler_bindings[ 16] = (LispRef) (LispRef (*) (Stack *, LispRef *, LispRef *)) ff_stub_eul_double_ref_as_c_double9471;
  handler_bindings[ 17] = (LispRef) (LispRef (*) (Stack *, LispRef *, LispRef *)) ff_stub_eul_c_vector_ref9472;
  handler_bindings[ 18] = (LispRef) (LispRef (*) (Stack *, LispRef *, LispRef *)) ff_stub_eul_c_vector_set9473;
  handler_bindings[ 19] = (LispRef) (LispRef (*) (Stack *, LispRef *, LispRef *)) ff_stub_eul_string_as_eul_string_ref9474;
  handler_bindings[ 20] = (LispRef) (LispRef (*) (Stack *, LispRef *, LispRef *)) ff_stub_eul_string_ref_as_c_string9475;
  handler_bindings[ 21] = (LispRef) (LispRef (*) (Stack *, LispRef *, LispRef *)) ff_stub_eul_c_vector_ref9476;
  handler_bindings[ 22] = (LispRef) (LispRef (*) (Stack *, LispRef *, LispRef *)) ff_stub_eul_c_vector_set9477;
  handler_bindings[ 23] = G009479;
  handler_bindings[ 24] = G009481;
  handler_bindings[ 25] = G009483;
  handler_bindings[ 26] = G009485;
  handler_bindings[ 27] = G009487;
  handler_bindings[ 28] = G009489;
  handler_bindings[ 29] = G009491;
  handler_bindings[ 30] = G009493;
  handler_bindings[ 31] = G009495;
  handler_bindings[ 32] = G009497;
  handler_bindings[ 33] = G009499;
  handler_bindings[ 34] = G009501;
  handler_bindings[ 35] = G009503;
  handler_bindings[ 36] = G009505;
  handler_bindings[ 37] = G009507;
  handler_bindings[ 38] = G009509;
  handler_bindings[ 39] = G009511;
  handler_bindings[ 40] = G009513;
  handler_bindings[ 41] = G009515;
  handler_bindings[ 42] = G009517;
  handler_bindings[ 43] = G009519;
  handler_bindings[ 44] = key_9522;
  handler_bindings[ 45] = sym_9523;
  handler_bindings[ 46] = key_9524;
  handler_bindings[ 47] = key_9525;
  handler_bindings[ 48] = sym_9526;
  handler_bindings[ 49] = key_9527;
  handler_bindings[ 50] = key_9528;
  handler_bindings[ 51] = key_9529;
  handler_bindings[ 52] = cons_9530;
  handler_bindings[ 53] = sym_9531;
  handler_bindings[ 54] = sym_9532;
  handler_bindings[ 55] = sym_9533;
  handler_bindings[ 56] = sym_9534;
  handler_bindings[ 57] = sym_9535;
  handler_bindings[ 58] = sym_9536;
  handler_bindings[ 59] = sym_9537;
  handler_bindings[ 60] = sym_9538;
  handler_bindings[ 61] = sym_9540;
  handler_bindings[ 62] = sym_9542;
  handler_bindings[ 63] = cons_9539;
  handler_bindings[ 64] = sym_9543;
  handler_bindings[ 65] = sym_9544;
  handler_bindings[ 66] = sym_9545;
  handler_bindings[ 67] = sym_9546;
  handler_bindings[ 68] = sym_9547;
  handler_bindings[ 69] = sym_9548;
  handler_bindings[ 70] = sym_9551;
  handler_bindings[ 71] = cons_9549;
  handler_bindings[ 72] = sym_9552;
  handler_bindings[ 73] = sym_9553;
  handler_bindings[ 74] = sym_9554;
  handler_bindings[ 75] = sym_9555;
  handler_bindings[ 76] = sym_9558;
  handler_bindings[ 77] = cons_9556;
  handler_bindings[ 78] = sym_9559;
  handler_bindings[ 79] = sym_9560;
  handler_bindings[ 80] = G009521;
  handler_bindings[ 81] = G009562;
  handler_bindings[ 1] = eul_nil;
  handler_bindings[ 82] = sym_9565;
  eul_allocate_lambda( handler_bindings[0], "initialize-handler", 0, G009564);

  }
}


/* eof */
