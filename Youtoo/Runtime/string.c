/** ----------------------------------------------------------------------- **
 **                 Generated by EuLisp System 'youtoo'
 ** ----------------------------------------------------------------------- **
 **  Description: C source file of EuLisp module string
 **  Copyright: See file string.em
 ** ----------------------------------------------------------------------- **/

#include "eulisp.h"


/* Imported modules */
extern void initialize_module_telos();
extern void initialize_module_convert();
extern void initialize_module_copy();
extern void initialize_module_collect();
extern void initialize_module_compare();
extern void initialize_module_fpi();
extern LispRef telos_bindings[];
extern LispRef copy_bindings[];
extern LispRef fpi_bindings[];
extern LispRef compare_bindings[];
extern LispRef mop_meth_bindings[];
extern LispRef mop_gf_bindings[];
extern LispRef mop_class_bindings[];
extern LispRef collect_bindings[];
extern LispRef boot_bindings[];
extern LispRef convert_bindings[];
extern LispRef boot1_bindings[];

/* Module bindings with size 109 */
LispRef string_bindings[109];

/* Foreign functions */
static LispRef ff_stub_eul_init_string768 (Stack *reg_value_stack, LispRef *sreg_value_sp, LispRef *sreg_value_sb)
{
  LispRef G00904, G00905, G00906, res;

  POPVAL1(G00906);
  POPVAL1(G00905);
  POPVAL1(G00904);
  FF_RES_CONVERT6(res,eul_init_string(FF_ARG_CONVERT8(G00904), FF_ARG_CONVERT0(G00905), FF_ARG_CONVERT1(G00906)));
  return res;
}

static LispRef ff_stub_strcmp769 (Stack *reg_value_stack, LispRef *sreg_value_sp, LispRef *sreg_value_sb)
{
  LispRef G00907, G00908, res;

  POPVAL1(G00908);
  POPVAL1(G00907);
  FF_RES_CONVERT0(res,strcmp(FF_ARG_CONVERT3(G00907), FF_ARG_CONVERT3(G00908)));
  return res;
}

static LispRef ff_stub_eul_reverse_str770 (Stack *reg_value_stack, LispRef *sreg_value_sp, LispRef *sreg_value_sb)
{
  LispRef G00909, res;

  POPVAL1(G00909);
  FF_RES_CONVERT3(res,eul_reverse_str(FF_ARG_CONVERT3(G00909)));
  return res;
}

static LispRef ff_stub_eul_str_append771 (Stack *reg_value_stack, LispRef *sreg_value_sp, LispRef *sreg_value_sb)
{
  LispRef G00910, G00911, res;

  POPVAL1(G00911);
  POPVAL1(G00910);
  FF_RES_CONVERT3(res,eul_str_append(FF_ARG_CONVERT3(G00910), FF_ARG_CONVERT3(G00911)));
  return res;
}

static LispRef ff_stub_eul_list_as_eul_string772 (Stack *reg_value_stack, LispRef *sreg_value_sp, LispRef *sreg_value_sb)
{
  LispRef G00912, res;

  POPVAL1(G00912);
  FF_RES_CONVERT6(res,eul_list_as_eul_string(FF_ARG_CONVERT8(G00912)));
  return res;
}

static LispRef ff_stub_eul_str_copy773 (Stack *reg_value_stack, LispRef *sreg_value_sp, LispRef *sreg_value_sb)
{
  LispRef G00913, res;

  POPVAL1(G00913);
  FF_RES_CONVERT3(res,eul_str_copy(FF_ARG_CONVERT3(G00913)));
  return res;
}

static LispRef ff_stub_atoi774 (Stack *reg_value_stack, LispRef *sreg_value_sp, LispRef *sreg_value_sb)
{
  LispRef G00914, res;

  POPVAL1(G00914);
  FF_RES_CONVERT0(res,atoi(FF_ARG_CONVERT3(G00914)));
  return res;
}


/* Initialize module only once */
static int is_initialized = 0;

/* Initialize module string */
void initialize_module_string()
{
  if (is_initialized) return;
  initialize_module_telos();
  initialize_module_convert();
  initialize_module_copy();
  initialize_module_collect();
  initialize_module_compare();
  initialize_module_fpi();
  eul_fast_table_set(eul_modules,"string",(LispRef) string_bindings);
  is_initialized = 1;
  {
  /* Declarations */
  LispRef sym_903, sym_902, sym_901, sym_900, sym_899, sym_898, sym_897, sym_896, sym_895, sym_894, sym_893, sym_892, sym_891, G00890, G00888, G00886, G00884, G00882, G00880, G00878, G00876, G00874, G00872, G00870, G00868, G00866, G00864, G00862, G00860, G00858, G00856, G00854, sym_852, sym_850, sym_848, sym_847, sym_846, sym_845, sym_844, sym_843, sym_842, sym_841, sym_840, sym_839, sym_838, sym_837, sym_836, sym_835, sym_834, sym_833, sym_832, sym_831, sym_830, sym_829, sym_828, key_827, key_826, key_825, key_824, sym_823, key_822, G00821, G00819, key_817, key_816, G00815, G00813, G00811, G00809, G00807, G00805, G00803, G00801, G00799, G00797, G00795, G00793, G00791, G00789, G00787, sym_785, G00784, G00782, G00780, G00778, G00776;

  /* Code vector and literal definitions */
  /* Byte-vector with size: 3 is_init: 0 index: 23 binding: (method-deep-copy) */
  static const void *G00775[] = {I(aa,41,00,00),B(string ,21),I(45,01,00,00)};

  /* Byte-vector with size: 3 is_init: 0 index: 24 binding: (method-shallow-copy) */
  static const void *G00777[] = {I(aa,41,00,00),B(string ,21),I(45,01,00,00)};

  /* Byte-vector with size: 3 is_init: 0 index: 25 binding: (method-slice) */
  static const void *G00779[] = {I(43,03,41,00),B(boot1 ,52),I(45,03,00,00)};

  /* Byte-vector with size: 17 is_init: 0 index: 26 binding: anonymous */
  static const void *G00781[] = {I(aa,1b,12,1b),I(34,00,00,00),I(00,00,00,10),I(47,00,00,32),I(00,00,00,32),I(1c,10,1b,24),B(string ,13),I(24,00,00,00),B(convert ,2),I(3c,02,47,00),I(00,1c,41,00),B(string ,19),I(22,02,1b,48),I(00,00,1f,04),I(11,47,00,01),I(3d,01,05,22),I(03,45,02,00)};

  /* Byte-vector with size: 11 is_init: 0 index: 28 binding: (method-concatenate) */
  static const void *G00783[] = {I(43,fe,46,02),I(1c,48,00,00),I(86,1b,48,00),I(01,23,00,00),B(string ,27),I(23,00,00,00),B(string ,26),I(3b,01,48,00),I(01,1c,47,00),I(01,3d,01,03),I(45,03,00,00)};

  /* Byte-vector with size: 3 is_init: 0 index: 29 binding: (method-reverse) */
  static const void *G00786[] = {I(aa,41,00,00),B(string ,18),I(45,01,00,00)};

  /* Byte-vector with size: 1 is_init: 0 index: 30 binding: (method-size) */
  static const void *G00788[] = {I(aa,06,45,00)};

  /* Byte-vector with size: 1 is_init: 0 index: 31 binding: (method-element) */
  static const void *G00790[] = {I(ab,0b,45,00)};

  /* Byte-vector with size: 18 is_init: 0 index: 32 binding: anonymous */
  static const void *G00792[] = {I(a9,47,00,03),I(47,00,02,1a),I(1b,34,00,00),I(00,00,00,3b),I(47,00,01,47),I(00,03,0b,47),I(00,00,1c,51),I(1b,34,00,00),I(00,00,00,0f),I(47,00,03,32),I(00,00,00,15),I(47,00,03,2b),I(1b,48,00,03),I(47,00,04,3d),I(00,04,22,01),I(22,02,32,00),I(00,00,00,07),I(86,45,01,00)};

  /* Byte-vector with size: 23 is_init: 0 index: 33 binding: (method-member) */
  static const void *G00794[] = {I(43,fd,46,05),I(1d,48,00,00),I(1c,48,00,01),I(1b,12,1b,34),I(00,00,00,19),I(47,00,00,47),I(00,01,41,00),B(boot1 ,54),I(22,02,32,00),I(00,00,00,37),I(1c,10,47,00),I(01,06,82,1c),I(48,00,02,1b),I(48,00,03,86),I(1b,48,00,04),I(23,00,00,00),B(string ,27),I(23,00,00,00),B(string ,32),I(3b,00,48,00),I(04,47,00,04),I(3d,00,08,22),I(04,45,04,00)};

  /* Byte-vector with size: 10 is_init: 0 index: 34 binding: (method-map) */
  static const void *G00796[] = {I(43,fd,1b,12),I(1b,34,00,00),I(00,00,00,1b),I(1f,03,1f,03),I(24,00,00,00),B(string ,4),I(3d,02,04,32),I(00,00,00,08),I(38,03,01,45),I(04,00,00,00)};

  /* Byte-vector with size: 10 is_init: 0 index: 35 binding: (method-do) */
  static const void *G00798[] = {I(43,fd,1b,12),I(1b,34,00,00),I(00,00,00,1b),I(1f,03,1f,03),I(24,00,00,00),B(string ,10),I(3d,02,04,32),I(00,00,00,08),I(38,03,01,45),I(04,00,00,00)};

  /* Byte-vector with size: 10 is_init: 0 index: 36 binding: (method-all?) */
  static const void *G00800[] = {I(43,fd,1b,12),I(1b,34,00,00),I(00,00,00,1b),I(1f,03,1f,03),I(24,00,00,00),B(string ,9),I(3d,02,04,32),I(00,00,00,08),I(38,03,01,45),I(04,00,00,00)};

  /* Byte-vector with size: 10 is_init: 0 index: 37 binding: (method-any?) */
  static const void *G00802[] = {I(43,fd,1b,12),I(1b,34,00,00),I(00,00,00,1b),I(1f,03,1f,03),I(24,00,00,00),B(string ,14),I(3d,02,04,32),I(00,00,00,08),I(38,03,01,45),I(04,00,00,00)};

  /* Byte-vector with size: 3 is_init: 0 index: 38 binding: (method-accumulate1) */
  static const void *G00804[] = {I(ab,24,00,00),B(string ,3),I(3d,02,00,00)};

  /* Byte-vector with size: 3 is_init: 0 index: 39 binding: (method-accumulate) */
  static const void *G00806[] = {I(43,03,24,00),B(string ,15),I(3d,03,00,00)};

  /* Byte-vector with size: 4 is_init: 0 index: 40 binding: (method-binary<) */
  static const void *G00808[] = {I(ab,41,00,00),B(string ,17),I(22,02,82,1a),I(45,00,00,00)};

  /* Byte-vector with size: 8 is_init: 0 index: 41 binding: (method-binary=) */
  static const void *G00810[] = {I(ab,41,00,00),B(string ,17),I(22,02,2d,1b),I(34,00,00,00),I(00,00,00,10),I(87,32,00,00),I(00,00,00,08),I(86,45,01,00)};

  /* Byte-vector with size: 2 is_init: 0 index: 42 binding: (method-emptyp) */
  static const void *G00812[] = {I(aa,06,2d,45),I(00,00,00,00)};

  /* Byte-vector with size: 13 is_init: 0 index: 45 binding: (method-initialize) */
  static const void *G00814[] = {I(ab,1c,1c,37),I(02,2a,1b,23),B(string ,43),I(82,24,00,00),B(boot ,29),I(3c,03,1c,23),B(string ,44),I(27,20,24,00),B(boot ,29),I(3c,03,1f,03),I(1d,1d,41,00),B(string ,16),I(45,07,00,00)};

  /* Byte-vector with size: 4 is_init: 0 index: 46 binding: (setter-string-data) */
  static const void *G00818[] = {I(ab,1c,82,1d),I(24,00,00,00),B(string ,13),I(09,45,02,00)};

  eul_allocate_static_cons(cons_851, NULL, NULL);
  eul_allocate_static_cons(cons_849, NULL, eul_as_static(cons_851));
  /* Byte-vector with size: 634 is_init: 0 index: 77 binding: top-level */
  static const void *G00820[] = {I(a9,24,00,00),B(collect ,7),I(24,00,00,00),B(boot1 ,25),I(3c,01,24,00),B(boot1 ,25),I(3c,00,24,00),B(mop_class ,70),I(23,00,00,00),B(string ,47),I(23,00,00,00),B(string ,48),I(23,00,00,00),B(string ,49),I(1f,05,23,00),B(string ,50),I(1f,06,23,00),B(string ,51),I(86,23,00,00),B(string ,52),I(87,24,00,00),B(mop_gf ,2),I(3c,0b,1b,89),B(string ,2),I(2a,28,0f,1b),I(89,00,00,00),B(string ,13),I(2a,24,00,00),B(string ,2),I(2a,24,00,00),B(string ,13),I(24,00,00,00),B(mop_class ,70),I(05,2a,24,00),B(string ,2),I(24,00,00,00),B(boot1 ,25),I(3c,01,23,00),B(string ,47),I(23,00,00,00),B(string ,53),I(24,00,00,00),B(boot1 ,25),I(3c,02,1b,24),B(boot1 ,25),I(3c,01,23,00),B(string ,47),I(23,00,00,00),B(string ,54),I(23,00,00,00),B(string ,49),I(1f,05,23,00),B(string ,50),I(1f,05,23,00),B(string ,51),I(86,24,00,00),B(boot1 ,25),I(3c,08,24,00),B(string ,13),I(1c,24,00,00),B(mop_gf ,12),I(3c,02,2a,24),B(boot1 ,42),I(24,00,00,00),B(boot1 ,42),I(3c,01,24,00),B(string ,12),I(23,00,00,00),B(string ,55),I(23,00,00,00),B(string ,46),I(3b,02,1d,3c),I(02,2a,24,00),B(string ,13),I(2a,24,00,00),B(mop_gf ,12),I(26,00,00,00),I(00,00,00,03),I(02,84,24,00),B(string ,13),I(86,24,00,00),B(boot1 ,40),I(3c,03,24,00),B(boot1 ,25),I(3c,00,24,00),B(mop_gf ,12),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,7),I(3c,02,1f,04),I(1f,04,23,00),B(string ,56),I(23,00,00,00),B(string ,45),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(mop_gf ,12),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(collect ,3),I(26,00,00,00),I(00,00,00,03),I(02,83,24,00),B(string ,13),I(24,00,00,00),B(boot1 ,40),I(3c,02,24,00),B(boot1 ,25),I(3c,00,24,00),B(collect ,3),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,7),I(3c,02,1f,04),I(1f,04,23,00),B(string ,57),I(23,00,00,00),B(string ,42),I(3b,01,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(collect ,3),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(compare ,9),I(26,00,00,00),I(00,00,00,03),I(02,84,24,00),B(string ,13),I(24,00,00,00),B(string ,13),I(24,00,00,00),B(boot1 ,40),I(3c,03,24,00),B(boot1 ,25),I(3c,00,24,00),B(compare ,9),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,7),I(3c,02,1f,04),I(1f,04,23,00),B(string ,58),I(23,00,00,00),B(string ,41),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(compare ,9),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(compare ,6),I(26,00,00,00),I(00,00,00,03),I(02,84,24,00),B(string ,13),I(24,00,00,00),B(string ,13),I(24,00,00,00),B(boot1 ,40),I(3c,03,24,00),B(boot1 ,25),I(3c,00,24,00),B(compare ,6),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,7),I(3c,02,1f,04),I(1f,04,23,00),B(string ,59),I(23,00,00,00),B(string ,40),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(compare ,6),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(collect ,23),I(26,00,00,00),I(00,00,00,03),I(02,26,00,00),I(00,00,00,03),I(24,00,00,00),B(mop_class ,27),I(86,24,00,00),B(string ,13),I(24,00,00,00),B(boot1 ,40),I(3c,04,24,00),B(boot1 ,25),I(3c,00,24,00),B(collect ,23),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,7),I(3c,02,1f,04),I(1f,04,23,00),B(string ,60),I(23,00,00,00),B(string ,39),I(3b,03,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(collect ,23),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(collect ,12),I(26,00,00,00),I(00,00,00,03),I(02,84,24,00),B(mop_class ,27),I(24,00,00,00),B(string ,13),I(24,00,00,00),B(boot1 ,40),I(3c,03,24,00),B(boot1 ,25),I(3c,00,24,00),B(collect ,12),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,7),I(3c,02,1f,04),I(1f,04,23,00),B(string ,61),I(23,00,00,00),B(string ,38),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(collect ,12),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(collect ,24),I(26,00,00,00),I(00,00,00,03),I(02,84,24,00),B(mop_class ,27),I(24,00,00,00),B(string ,13),I(24,00,00,00),B(boot1 ,40),I(3c,03,24,00),B(boot1 ,25),I(3c,00,24,00),B(collect ,24),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,7),I(3c,02,1f,04),I(1f,04,23,00),B(string ,62),I(23,00,00,00),B(string ,37),I(3b,fd,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(collect ,24),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(collect ,16),I(26,00,00,00),I(00,00,00,03),I(02,84,24,00),B(mop_class ,27),I(24,00,00,00),B(string ,13),I(24,00,00,00),B(boot1 ,40),I(3c,03,24,00),B(boot1 ,25),I(3c,00,24,00),B(collect ,16),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,7),I(3c,02,1f,04),I(1f,04,23,00),B(string ,63),I(23,00,00,00),B(string ,36),I(3b,fd,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(collect ,16),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(collect ,6),I(26,00,00,00),I(00,00,00,03),I(02,84,24,00),B(mop_class ,27),I(24,00,00,00),B(string ,13),I(24,00,00,00),B(boot1 ,40),I(3c,03,24,00),B(boot1 ,25),I(3c,00,24,00),B(collect ,6),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,7),I(3c,02,1f,04),I(1f,04,23,00),B(string ,64),I(23,00,00,00),B(string ,35),I(3b,fd,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(collect ,6),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(collect ,2),I(26,00,00,00),I(00,00,00,03),I(02,84,24,00),B(mop_class ,27),I(24,00,00,00),B(string ,13),I(24,00,00,00),B(boot1 ,40),I(3c,03,24,00),B(boot1 ,25),I(3c,00,24,00),B(collect ,2),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,7),I(3c,02,1f,04),I(1f,04,23,00),B(string ,65),I(23,00,00,00),B(string ,34),I(3b,fd,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(collect ,2),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(collect ,11),I(26,00,00,00),I(00,00,00,03),I(02,84,86,24),B(string ,13),I(24,00,00,00),B(boot1 ,40),I(3c,03,24,00),B(boot1 ,25),I(3c,00,24,00),B(collect ,11),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,7),I(3c,02,1f,04),I(1f,04,23,00),B(string ,66),I(23,00,00,00),B(string ,33),I(3b,fd,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(collect ,11),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(collect ,20),I(26,00,00,00),I(00,00,00,03),I(02,84,24,00),B(string ,13),I(24,00,00,00),B(fpi ,4),I(24,00,00,00),B(boot1 ,40),I(3c,03,24,00),B(boot1 ,25),I(3c,00,24,00),B(collect ,20),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,7),I(3c,02,1f,04),I(1f,04,23,00),B(string ,67),I(23,00,00,00),B(string ,31),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(collect ,20),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(collect ,9),I(26,00,00,00),I(00,00,00,03),I(02,83,24,00),B(string ,13),I(24,00,00,00),B(boot1 ,40),I(3c,02,24,00),B(boot1 ,25),I(3c,00,24,00),B(collect ,9),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,7),I(3c,02,1f,04),I(1f,04,23,00),B(string ,68),I(23,00,00,00),B(string ,30),I(3b,01,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(collect ,9),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(collect ,25),I(26,00,00,00),I(00,00,00,03),I(02,83,24,00),B(string ,13),I(24,00,00,00),B(boot1 ,40),I(3c,02,24,00),B(boot1 ,25),I(3c,00,24,00),B(collect ,25),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,7),I(3c,02,1f,04),I(1f,04,23,00),B(string ,69),I(23,00,00,00),B(string ,29),I(3b,01,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(collect ,25),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(collect ,17),I(26,00,00,00),I(00,00,00,03),I(02,83,24,00),B(string ,13),I(24,00,00,00),B(boot1 ,40),I(3c,02,24,00),B(boot1 ,25),I(3c,00,24,00),B(collect ,17),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,7),I(3c,02,1f,04),I(1f,04,23,00),B(string ,70),I(23,00,00,00),B(string ,28),I(3b,fe,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(collect ,17),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(collect ,4),I(26,00,00,00),I(00,00,00,03),I(02,26,00,00),I(00,00,00,03),I(24,00,00,00),B(string ,13),I(24,00,00,00),B(fpi ,4),I(24,00,00,00),B(fpi ,4),I(24,00,00,00),B(boot1 ,40),I(3c,04,24,00),B(boot1 ,25),I(3c,00,24,00),B(collect ,4),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,7),I(3c,02,1f,04),I(1f,04,23,00),B(string ,71),I(23,00,00,00),B(string ,25),I(3b,03,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(collect ,4),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(copy ,2),I(26,00,00,00),I(00,00,00,03),I(02,83,24,00),B(string ,13),I(24,00,00,00),B(boot1 ,40),I(3c,02,24,00),B(boot1 ,25),I(3c,00,24,00),B(copy ,2),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,7),I(3c,02,1f,04),I(1f,04,23,00),B(string ,72),I(23,00,00,00),B(string ,24),I(3b,01,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(copy ,2),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(copy ,3),I(26,00,00,00),I(00,00,00,03),I(02,83,24,00),B(string ,13),I(24,00,00,00),B(boot1 ,40),I(3c,02,24,00),B(boot1 ,25),I(3c,00,24,00),B(copy ,3),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,7),I(3c,02,1f,04),I(1f,04,23,00),B(string ,73),I(23,00,00,00),B(string ,23),I(3b,01,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(copy ,3),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(mop_class ,13),I(24,00,00,00),B(boot1 ,42),I(3c,01,83,24),B(mop_class ,20),I(24,00,00,00),B(boot1 ,40),I(3c,02,24,00),B(boot1 ,25),I(3c,00,24,00),B(boot1 ,25),I(3c,00,23,00),B(string ,76),I(1f,03,24,00),B(mop_class ,15),I(24,00,00,00),B(mop_class ,55),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,24,00),B(string ,13),I(1c,1f,06,3c),I(02,2a,24,00),B(string ,13),I(24,00,00,00),B(mop_class ,13),I(3d,01,7a,45),I(7a,00,00,00)};

  /* Byte-vector with size: 13 is_init: 0 index: 78 binding: accumulate1-string */
  static const void *G00853[] = {I(ab,1b,06,2d),I(1b,34,00,00),I(00,00,00,0f),I(86,32,00,00),I(00,00,00,24),I(1c,82,0b,1d),I(83,41,00,00),B(boot1 ,53),I(22,02,1f,04),I(1d,1d,24,00),B(string ,15),I(3d,03,05,22),I(02,45,03,00)};

  /* Byte-vector with size: 17 is_init: 0 index: 79 binding: anonymous */
  static const void *G00855[] = {I(a9,47,00,05),I(47,00,03,1a),I(1b,34,00,00),I(00,00,00,33),I(47,00,01,47),I(00,05,0b,1b),I(47,00,00,3c),I(01,47,00,04),I(47,00,05,1d),I(0c,2a,47,00),I(05,2b,1b,48),I(00,05,47,00),I(02,3d,00,04),I(22,03,32,00),I(00,00,00,09),I(47,00,04,45),I(01,00,00,00)};

  /* Byte-vector with size: 22 is_init: 0 index: 80 binding: map1-string */
  static const void *G00857[] = {I(ab,46,07,1c),I(48,00,00,1b),I(48,00,01,47),I(00,01,06,1b),I(48,00,03,24),B(string ,13),I(23,00,00,00),B(string ,43),I(47,00,03,24),B(mop_gf ,2),I(3c,03,1b,48),I(00,04,82,1b),I(48,00,05,86),I(1b,48,00,02),I(23,00,00,00),B(string ,27),I(23,00,00,00),B(string ,79),I(3b,00,48,00),I(02,47,00,02),I(3d,00,06,45),I(06,00,00,00)};

  /* Byte-vector with size: 33 is_init: 0 index: 81 binding: anonymous */
  static const void *G00859[] = {I(ab,47,00,01),I(1d,24,00,00),B(collect ,11),I(3c,02,1d,86),I(1d,24,00,00),B(string ,6),I(3c,03,24,00),B(mop_class ,5),I(23,00,00,00),B(string ,47),I(1d,24,00,00),B(mop_gf ,2),I(3c,03,1d,34),I(00,00,00,15),I(1f,04,06,1b),I(2c,1f,04,1c),I(1a,22,02,32),I(00,00,00,06),I(86,1b,34,00),I(00,00,00,26),I(1f,03,2b,1f),I(06,1c,86,24),B(string ,6),I(3c,03,1f,03),I(1f,07,0f,47),I(00,00,3d,02),I(07,22,01,32),I(00,00,00,14),I(1c,1f,05,0f),I(24,00,00,00),B(boot ,25),I(3d,01,06,45),I(06,00,00,00)};

  /* Byte-vector with size: 26 is_init: 0 index: 82 binding: listify-string */
  static const void *G00861[] = {I(43,fe,46,03),I(1b,34,00,00),I(00,00,00,0f),I(1b,10,32,00),I(00,00,00,08),I(27,20,1b,48),I(00,01,86,1b),I(48,00,00,23),B(string ,27),I(23,00,00,00),B(string ,81),I(3b,02,48,00),I(00,1f,03,82),I(0b,47,00,01),I(1c,51,1b,34),I(00,00,00,21),I(1f,05,83,86),I(24,00,00,00),B(string ,6),I(3c,03,86,47),I(00,00,3d,02),I(06,32,00,00),I(00,00,00,10),I(1f,05,86,47),I(00,00,3d,02),I(06,45,06,00)};

  /* Byte-vector with size: 14 is_init: 0 index: 83 binding: substring */
  static const void *G00863[] = {I(43,03,1c,1b),I(34,00,00,00),I(00,00,00,10),I(1b,32,00,00),I(00,00,00,08),I(82,1d,1b,34),I(00,00,00,0d),I(1b,32,00,00),I(00,00,00,0a),I(1f,05,06,1d),I(1c,1f,08,1d),I(1d,41,00,00),B(boot1 ,52),I(45,0c,00,00)};

  /* Byte-vector with size: 2 is_init: 0 index: 84 binding: string-empty? */
  static const void *G00865[] = {I(aa,06,2d,45),I(00,00,00,00)};

  /* Byte-vector with size: 4 is_init: 0 index: 85 binding: string-equal */
  static const void *G00867[] = {I(ab,41,00,00),B(string ,17),I(22,02,2d,45),I(00,00,00,00)};

  /* Byte-vector with size: 19 is_init: 0 index: 86 binding: anonymous */
  static const void *G00869[] = {I(a9,47,00,03),I(47,00,02,1a),I(1b,34,00,00),I(00,00,00,3b),I(47,00,01,47),I(00,03,0b,47),I(00,00,3c,01),I(1b,34,00,00),I(00,00,00,1f),I(47,00,03,2b),I(1b,48,00,03),I(47,00,04,3d),I(00,03,22,01),I(32,00,00,00),I(00,00,00,09),I(86,22,01,32),I(00,00,00,08),I(47,00,01,45),I(01,00,00,00)};

  /* Byte-vector with size: 15 is_init: 0 index: 87 binding: all?1-string */
  static const void *G00871[] = {I(ab,46,05,1c),I(48,00,00,1b),I(48,00,01,47),I(00,01,06,82),I(1c,48,00,02),I(1b,48,00,03),I(86,1b,48,00),I(04,23,00,00),B(string ,27),I(23,00,00,00),B(string ,86),I(3b,00,48,00),I(04,47,00,04),I(3d,00,05,45),I(05,00,00,00)};

  /* Byte-vector with size: 14 is_init: 0 index: 88 binding: anonymous */
  static const void *G00873[] = {I(a9,47,00,03),I(47,00,02,1a),I(1b,34,00,00),I(00,00,00,2b),I(47,00,01,47),I(00,03,0b,47),I(00,00,3c,01),I(2a,47,00,03),I(2b,1b,48,00),I(03,47,00,04),I(3d,00,02,22),I(01,32,00,00),I(00,00,00,08),I(86,45,01,00)};

  /* Byte-vector with size: 15 is_init: 0 index: 89 binding: do1-string */
  static const void *G00875[] = {I(ab,46,05,1c),I(48,00,00,1b),I(48,00,01,47),I(00,01,06,82),I(1c,48,00,02),I(1b,48,00,03),I(86,1b,48,00),I(04,23,00,00),B(string ,27),I(23,00,00,00),B(string ,88),I(3b,00,48,00),I(04,47,00,04),I(3d,00,05,45),I(05,00,00,00)};

  /* Byte-vector with size: 3 is_init: 0 index: 90 binding: string-append */
  static const void *G00877[] = {I(a8,41,00,00),B(string ,20),I(45,01,00,00)};

  /* Byte-vector with size: 3 is_init: 0 index: 91 binding: string-data */
  static const void *G00879[] = {I(aa,82,24,00),B(string ,13),I(08,45,00,00)};

  /* Byte-vector with size: 18 is_init: 0 index: 92 binding: anonymous */
  static const void *G00881[] = {I(a9,47,00,03),I(47,00,02,1a),I(1b,34,00,00),I(00,00,00,3b),I(47,00,01,47),I(00,03,0b,47),I(00,00,3c,01),I(1b,34,00,00),I(00,00,00,0f),I(1b,32,00,00),I(00,00,00,17),I(47,00,03,2b),I(1b,48,00,03),I(47,00,04,3d),I(00,03,22,01),I(22,01,32,00),I(00,00,00,07),I(86,45,01,00)};

  /* Byte-vector with size: 15 is_init: 0 index: 93 binding: anyp1-string */
  static const void *G00883[] = {I(ab,46,05,1c),I(48,00,00,1b),I(48,00,01,47),I(00,01,06,82),I(1c,48,00,02),I(1b,48,00,03),I(86,1b,48,00),I(04,23,00,00),B(string ,27),I(23,00,00,00),B(string ,92),I(3b,00,48,00),I(04,47,00,04),I(3d,00,05,45),I(05,00,00,00)};

  /* Byte-vector with size: 17 is_init: 0 index: 94 binding: anonymous */
  static const void *G00885[] = {I(a9,47,00,04),I(47,00,03,1a),I(1b,34,00,00),I(00,00,00,33),I(47,00,02,47),I(00,04,0b,47),I(00,01,1c,47),I(00,00,3c,02),I(1b,48,00,01),I(47,00,04,2b),I(1b,48,00,04),I(47,00,05,3d),I(00,04,22,03),I(32,00,00,00),I(00,00,00,0b),I(47,00,01,45),I(01,00,00,00)};

  /* Byte-vector with size: 16 is_init: 0 index: 95 binding: accumulate-string */
  static const void *G00887[] = {I(43,03,46,06),I(1d,48,00,00),I(1c,48,00,01),I(1b,48,00,02),I(47,00,02,06),I(82,1c,48,00),I(03,1b,48,00),I(04,86,1b,48),I(00,05,23,00),B(string ,27),I(23,00,00,00),B(string ,94),I(3b,00,48,00),I(05,47,00,05),I(3d,00,06,45),I(06,00,00,00)};

  /* Byte-vector with size: 114 is_init: 1 index: 0 binding: initialize-string */
  static const void *G00889[] = {I(87,25,00,00),B(string ,1),I(24,00,00,00),B(fpi ,1),I(3e,0b,24,00),B(fpi ,0),I(3c,00,21,01),I(24,00,00,00),B(compare ,1),I(3e,0b,24,00),B(compare ,0),I(3c,00,21,01),I(24,00,00,00),B(collect ,1),I(3e,0b,24,00),B(collect ,0),I(3c,00,21,01),I(24,00,00,00),B(copy ,1),I(3e,0b,24,00),B(copy ,0),I(3c,00,21,01),I(24,00,00,00),B(convert ,1),I(3e,0b,24,00),B(convert ,0),I(3c,00,21,01),I(24,00,00,00),B(telos ,1),I(3e,0b,24,00),B(telos ,0),I(3c,00,21,01),I(23,00,00,00),B(string ,96),I(23,00,00,00),B(string ,95),I(3b,03,25,00),B(string ,15),I(23,00,00,00),B(string ,97),I(23,00,00,00),B(string ,93),I(3b,02,25,00),B(string ,14),I(86,25,00,00),B(string ,13),I(23,00,00,00),B(string ,98),I(23,00,00,00),B(string ,91),I(3b,01,25,00),B(string ,12),I(23,00,00,00),B(string ,99),I(23,00,00,00),B(string ,90),I(3b,ff,25,00),B(string ,11),I(23,00,00,00),B(string ,100),I(23,00,00,00),B(string ,89),I(3b,02,25,00),B(string ,10),I(23,00,00,00),B(string ,101),I(23,00,00,00),B(string ,87),I(3b,02,25,00),B(string ,9),I(23,00,00,00),B(string ,102),I(23,00,00,00),B(string ,85),I(3b,02,25,00),B(string ,8),I(23,00,00,00),B(string ,103),I(23,00,00,00),B(string ,84),I(3b,01,25,00),B(string ,7),I(23,00,00,00),B(string ,104),I(23,00,00,00),B(string ,83),I(3b,03,25,00),B(string ,6),I(23,00,00,00),B(string ,105),I(23,00,00,00),B(string ,82),I(3b,fe,25,00),B(string ,5),I(23,00,00,00),B(string ,106),I(23,00,00,00),B(string ,80),I(3b,02,25,00),B(string ,4),I(23,00,00,00),B(string ,107),I(23,00,00,00),B(string ,78),I(3b,02,25,00),B(string ,3),I(86,25,00,00),B(string ,2),I(23,00,00,00),B(string ,108),I(23,00,00,00),B(string ,77),I(3b,00,3d,00),I(00,ac,00,00)};


  /* Initializations */
  eul_allocate_bytevector( G00776,G00775);
  eul_allocate_bytevector( G00778,G00777);
  eul_allocate_bytevector( G00780,G00779);
  eul_allocate_bytevector( G00782,G00781);
  eul_intern_symbol(sym_785,"anonymous");
  eul_allocate_bytevector( G00784,G00783);
  eul_allocate_bytevector( G00787,G00786);
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
  eul_intern_keyword(key_816,"size");
  eul_intern_keyword(key_817,"fill-value");
  eul_allocate_bytevector( G00815,G00814);
  eul_allocate_bytevector( G00819,G00818);
  eul_intern_keyword(key_822,"name");
  eul_intern_symbol(sym_823,"character-sequence");
  eul_intern_keyword(key_824,"direct-superclasses");
  eul_intern_keyword(key_825,"direct-slots");
  eul_intern_keyword(key_826,"direct-keywords");
  eul_intern_keyword(key_827,"abstract?");
  eul_intern_symbol(sym_828,"data");
  eul_intern_symbol(sym_829,"string");
  eul_intern_symbol(sym_830,"(setter string-data)");
  eul_intern_symbol(sym_831,"(method initialize)");
  eul_intern_symbol(sym_832,"(method emptyp)");
  eul_intern_symbol(sym_833,"(method binary=)");
  eul_intern_symbol(sym_834,"(method binary<)");
  eul_intern_symbol(sym_835,"(method accumulate)");
  eul_intern_symbol(sym_836,"(method accumulate1)");
  eul_intern_symbol(sym_837,"(method any?)");
  eul_intern_symbol(sym_838,"(method all?)");
  eul_intern_symbol(sym_839,"(method do)");
  eul_intern_symbol(sym_840,"(method map)");
  eul_intern_symbol(sym_841,"(method member)");
  eul_intern_symbol(sym_842,"(method element)");
  eul_intern_symbol(sym_843,"(method size)");
  eul_intern_symbol(sym_844,"(method reverse)");
  eul_intern_symbol(sym_845,"(method concatenate)");
  eul_intern_symbol(sym_846,"(method slice)");
  eul_intern_symbol(sym_847,"(method shallow-copy)");
  eul_intern_symbol(sym_848,"(method deep-copy)");
  eul_intern_symbol(sym_850,"converter");
  eul_intern_symbol(sym_852,"<string>");
  object_class(cons_851) = eul_static_cons_class;
  eul_car(cons_851) = sym_852;
  eul_cdr(cons_851) = eul_nil;
  object_class(cons_849) = eul_static_cons_class;
  eul_car(cons_849) = sym_850;
  eul_allocate_bytevector( G00821,G00820);
  eul_allocate_bytevector( G00854,G00853);
  eul_allocate_bytevector( G00856,G00855);
  eul_allocate_bytevector( G00858,G00857);
  eul_allocate_bytevector( G00860,G00859);
  eul_allocate_bytevector( G00862,G00861);
  eul_allocate_bytevector( G00864,G00863);
  eul_allocate_bytevector( G00866,G00865);
  eul_allocate_bytevector( G00868,G00867);
  eul_allocate_bytevector( G00870,G00869);
  eul_allocate_bytevector( G00872,G00871);
  eul_allocate_bytevector( G00874,G00873);
  eul_allocate_bytevector( G00876,G00875);
  eul_allocate_bytevector( G00878,G00877);
  eul_allocate_bytevector( G00880,G00879);
  eul_allocate_bytevector( G00882,G00881);
  eul_allocate_bytevector( G00884,G00883);
  eul_allocate_bytevector( G00886,G00885);
  eul_allocate_bytevector( G00888,G00887);
  eul_intern_symbol(sym_891,"accumulate-string");
  eul_intern_symbol(sym_892,"anyp1-string");
  eul_intern_symbol(sym_893,"string-data");
  eul_intern_symbol(sym_894,"string-append");
  eul_intern_symbol(sym_895,"do1-string");
  eul_intern_symbol(sym_896,"all?1-string");
  eul_intern_symbol(sym_897,"string-equal");
  eul_intern_symbol(sym_898,"string-empty?");
  eul_intern_symbol(sym_899,"substring");
  eul_intern_symbol(sym_900,"listify-string");
  eul_intern_symbol(sym_901,"map1-string");
  eul_intern_symbol(sym_902,"accumulate1-string");
  eul_intern_symbol(sym_903,"top-level");
  eul_allocate_bytevector( G00890,G00889);

  /* Set local bindings */
  {
    int i;
    for (i = 2; i < 16; i++)
      string_bindings[i] = eul_nil;
  }

  string_bindings[ 16] = (LispRef) (LispRef (*) (Stack *, LispRef *, LispRef *)) ff_stub_eul_init_string768;
  string_bindings[ 17] = (LispRef) (LispRef (*) (Stack *, LispRef *, LispRef *)) ff_stub_strcmp769;
  string_bindings[ 18] = (LispRef) (LispRef (*) (Stack *, LispRef *, LispRef *)) ff_stub_eul_reverse_str770;
  string_bindings[ 19] = (LispRef) (LispRef (*) (Stack *, LispRef *, LispRef *)) ff_stub_eul_str_append771;
  string_bindings[ 20] = (LispRef) (LispRef (*) (Stack *, LispRef *, LispRef *)) ff_stub_eul_list_as_eul_string772;
  string_bindings[ 21] = (LispRef) (LispRef (*) (Stack *, LispRef *, LispRef *)) ff_stub_eul_str_copy773;
  string_bindings[ 22] = (LispRef) (LispRef (*) (Stack *, LispRef *, LispRef *)) ff_stub_atoi774;
  string_bindings[ 23] = G00776;
  string_bindings[ 24] = G00778;
  string_bindings[ 25] = G00780;
  string_bindings[ 26] = G00782;
  string_bindings[ 27] = sym_785;
  string_bindings[ 28] = G00784;
  string_bindings[ 29] = G00787;
  string_bindings[ 30] = G00789;
  string_bindings[ 31] = G00791;
  string_bindings[ 32] = G00793;
  string_bindings[ 33] = G00795;
  string_bindings[ 34] = G00797;
  string_bindings[ 35] = G00799;
  string_bindings[ 36] = G00801;
  string_bindings[ 37] = G00803;
  string_bindings[ 38] = G00805;
  string_bindings[ 39] = G00807;
  string_bindings[ 40] = G00809;
  string_bindings[ 41] = G00811;
  string_bindings[ 42] = G00813;
  string_bindings[ 43] = key_816;
  string_bindings[ 44] = key_817;
  string_bindings[ 45] = G00815;
  string_bindings[ 46] = G00819;
  string_bindings[ 47] = key_822;
  string_bindings[ 48] = sym_823;
  string_bindings[ 49] = key_824;
  string_bindings[ 50] = key_825;
  string_bindings[ 51] = key_826;
  string_bindings[ 52] = key_827;
  string_bindings[ 53] = sym_828;
  string_bindings[ 54] = sym_829;
  string_bindings[ 55] = sym_830;
  string_bindings[ 56] = sym_831;
  string_bindings[ 57] = sym_832;
  string_bindings[ 58] = sym_833;
  string_bindings[ 59] = sym_834;
  string_bindings[ 60] = sym_835;
  string_bindings[ 61] = sym_836;
  string_bindings[ 62] = sym_837;
  string_bindings[ 63] = sym_838;
  string_bindings[ 64] = sym_839;
  string_bindings[ 65] = sym_840;
  string_bindings[ 66] = sym_841;
  string_bindings[ 67] = sym_842;
  string_bindings[ 68] = sym_843;
  string_bindings[ 69] = sym_844;
  string_bindings[ 70] = sym_845;
  string_bindings[ 71] = sym_846;
  string_bindings[ 72] = sym_847;
  string_bindings[ 73] = sym_848;
  string_bindings[ 74] = sym_850;
  string_bindings[ 75] = sym_852;
  string_bindings[ 76] = cons_849;
  string_bindings[ 77] = G00821;
  string_bindings[ 78] = G00854;
  string_bindings[ 79] = G00856;
  string_bindings[ 80] = G00858;
  string_bindings[ 81] = G00860;
  string_bindings[ 82] = G00862;
  string_bindings[ 83] = G00864;
  string_bindings[ 84] = G00866;
  string_bindings[ 85] = G00868;
  string_bindings[ 86] = G00870;
  string_bindings[ 87] = G00872;
  string_bindings[ 88] = G00874;
  string_bindings[ 89] = G00876;
  string_bindings[ 90] = G00878;
  string_bindings[ 91] = G00880;
  string_bindings[ 92] = G00882;
  string_bindings[ 93] = G00884;
  string_bindings[ 94] = G00886;
  string_bindings[ 95] = G00888;
  string_bindings[ 1] = eul_nil;
  string_bindings[ 96] = sym_891;
  string_bindings[ 97] = sym_892;
  string_bindings[ 98] = sym_893;
  string_bindings[ 99] = sym_894;
  string_bindings[ 100] = sym_895;
  string_bindings[ 101] = sym_896;
  string_bindings[ 102] = sym_897;
  string_bindings[ 103] = sym_898;
  string_bindings[ 104] = sym_899;
  string_bindings[ 105] = sym_900;
  string_bindings[ 106] = sym_901;
  string_bindings[ 107] = sym_902;
  string_bindings[ 108] = sym_903;
  eul_allocate_lambda( string_bindings[0], "initialize-string", 0, G00890);

  }
}


/* eof */
