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

/* Module bindings with size 112 */
LispRef string_bindings[112];

/* Foreign functions */
static LispRef ff_stub_eul_init_string2744 (Stack *reg_value_stack, LispRef *sreg_value_sp, LispRef *sreg_value_sb)
{
  LispRef G002884, G002885, G002886, res;

  POPVAL1(G002886);
  POPVAL1(G002885);
  POPVAL1(G002884);
  FF_RES_CONVERT6(res,eul_init_string(FF_ARG_CONVERT8(G002884), FF_ARG_CONVERT0(G002885), FF_ARG_CONVERT1(G002886)));
  return res;
}

static LispRef ff_stub_strcmp2745 (Stack *reg_value_stack, LispRef *sreg_value_sp, LispRef *sreg_value_sb)
{
  LispRef G002887, G002888, res;

  POPVAL1(G002888);
  POPVAL1(G002887);
  FF_RES_CONVERT0(res,strcmp(FF_ARG_CONVERT3(G002887), FF_ARG_CONVERT3(G002888)));
  return res;
}

static LispRef ff_stub_eul_reverse_str2746 (Stack *reg_value_stack, LispRef *sreg_value_sp, LispRef *sreg_value_sb)
{
  LispRef G002889, res;

  POPVAL1(G002889);
  FF_RES_CONVERT3(res,eul_reverse_str(FF_ARG_CONVERT3(G002889)));
  return res;
}

static LispRef ff_stub_eul_reverse_des_str2747 (Stack *reg_value_stack, LispRef *sreg_value_sp, LispRef *sreg_value_sb)
{
  LispRef G002890, res;

  POPVAL1(G002890);
  FF_RES_CONVERT3(res,eul_reverse_des_str(FF_ARG_CONVERT3(G002890)));
  return res;
}

static LispRef ff_stub_eul_str_append2748 (Stack *reg_value_stack, LispRef *sreg_value_sp, LispRef *sreg_value_sb)
{
  LispRef G002891, G002892, res;

  POPVAL1(G002892);
  POPVAL1(G002891);
  FF_RES_CONVERT3(res,eul_str_append(FF_ARG_CONVERT3(G002891), FF_ARG_CONVERT3(G002892)));
  return res;
}

static LispRef ff_stub_eul_list_as_eul_string2749 (Stack *reg_value_stack, LispRef *sreg_value_sp, LispRef *sreg_value_sb)
{
  LispRef G002893, res;

  POPVAL1(G002893);
  FF_RES_CONVERT6(res,eul_list_as_eul_string(FF_ARG_CONVERT8(G002893)));
  return res;
}

static LispRef ff_stub_eul_str_copy2750 (Stack *reg_value_stack, LispRef *sreg_value_sp, LispRef *sreg_value_sb)
{
  LispRef G002894, res;

  POPVAL1(G002894);
  FF_RES_CONVERT3(res,eul_str_copy(FF_ARG_CONVERT3(G002894)));
  return res;
}

static LispRef ff_stub_atoi2751 (Stack *reg_value_stack, LispRef *sreg_value_sp, LispRef *sreg_value_sb)
{
  LispRef G002895, res;

  POPVAL1(G002895);
  FF_RES_CONVERT0(res,atoi(FF_ARG_CONVERT3(G002895)));
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
  LispRef sym_2883, sym_2882, sym_2881, sym_2880, sym_2879, sym_2878, sym_2877, sym_2876, sym_2875, sym_2874, sym_2873, sym_2872, sym_2871, G002870, G002868, G002866, G002864, G002862, G002860, G002858, G002856, G002854, G002852, G002850, G002848, G002846, G002844, G002842, G002840, G002838, G002836, G002834, sym_2832, sym_2830, sym_2828, sym_2827, sym_2826, sym_2825, sym_2824, sym_2823, sym_2822, sym_2821, sym_2820, sym_2819, sym_2818, sym_2817, sym_2816, sym_2815, sym_2814, sym_2813, sym_2812, sym_2811, sym_2810, sym_2809, sym_2808, sym_2807, key_2806, key_2805, key_2804, key_2803, sym_2802, key_2801, G002800, G002798, key_2796, key_2795, G002794, G002792, G002790, G002788, G002786, G002784, G002782, G002780, G002778, G002776, G002774, G002772, G002770, G002768, G002766, G002764, sym_2762, G002761, G002759, G002757, G002755, G002753;

  /* Code vector and literal definitions */
  /* Byte-vector with size: 3 is_init: 0 index: 24 binding: (method-deep-copy) */
  static const void *G002752[] = {I(aa,41,00,00),B(string ,22),I(45,01,00,00)};

  /* Byte-vector with size: 3 is_init: 0 index: 25 binding: (method-shallow-copy) */
  static const void *G002754[] = {I(aa,41,00,00),B(string ,22),I(45,01,00,00)};

  /* Byte-vector with size: 3 is_init: 0 index: 26 binding: (method-slice) */
  static const void *G002756[] = {I(43,03,41,00),B(boot1 ,52),I(45,03,00,00)};

  /* Byte-vector with size: 17 is_init: 0 index: 27 binding: anonymous */
  static const void *G002758[] = {I(aa,1b,12,1b),I(34,00,00,00),I(00,00,00,10),I(47,00,00,32),I(00,00,00,32),I(1c,10,1b,24),B(string ,13),I(24,00,00,00),B(convert ,2),I(3c,02,47,00),I(00,1c,41,00),B(string ,20),I(22,02,1b,48),I(00,00,1f,04),I(11,47,00,01),I(3d,01,05,22),I(03,45,02,00)};

  /* Byte-vector with size: 11 is_init: 0 index: 29 binding: (method-concatenate) */
  static const void *G002760[] = {I(43,fe,46,02),I(1c,48,00,00),I(86,1b,48,00),I(01,23,00,00),B(string ,28),I(23,00,00,00),B(string ,27),I(3b,01,48,00),I(01,1c,47,00),I(01,3d,01,03),I(45,03,00,00)};

  /* Byte-vector with size: 3 is_init: 0 index: 30 binding: (method-reverse!) */
  static const void *G002763[] = {I(aa,41,00,00),B(string ,19),I(45,01,00,00)};

  /* Byte-vector with size: 3 is_init: 0 index: 31 binding: (method-reverse) */
  static const void *G002765[] = {I(aa,41,00,00),B(string ,18),I(45,01,00,00)};

  /* Byte-vector with size: 1 is_init: 0 index: 32 binding: (method-size) */
  static const void *G002767[] = {I(aa,06,45,00)};

  /* Byte-vector with size: 1 is_init: 0 index: 33 binding: (method-element) */
  static const void *G002769[] = {I(ab,0b,45,00)};

  /* Byte-vector with size: 18 is_init: 0 index: 34 binding: anonymous */
  static const void *G002771[] = {I(a9,47,00,03),I(47,00,02,1a),I(1b,34,00,00),I(00,00,00,3b),I(47,00,01,47),I(00,03,0b,47),I(00,00,1c,51),I(1b,34,00,00),I(00,00,00,0f),I(47,00,03,32),I(00,00,00,15),I(47,00,03,2b),I(1b,48,00,03),I(47,00,04,3d),I(00,04,22,01),I(22,02,32,00),I(00,00,00,07),I(86,45,01,00)};

  /* Byte-vector with size: 23 is_init: 0 index: 35 binding: (method-member) */
  static const void *G002773[] = {I(43,fd,46,05),I(1d,48,00,00),I(1c,48,00,01),I(1b,12,1b,34),I(00,00,00,19),I(47,00,00,47),I(00,01,41,00),B(boot1 ,54),I(22,02,32,00),I(00,00,00,37),I(1c,10,47,00),I(01,06,82,1c),I(48,00,02,1b),I(48,00,03,86),I(1b,48,00,04),I(23,00,00,00),B(string ,28),I(23,00,00,00),B(string ,34),I(3b,00,48,00),I(04,47,00,04),I(3d,00,08,22),I(04,45,04,00)};

  /* Byte-vector with size: 10 is_init: 0 index: 36 binding: (method-map) */
  static const void *G002775[] = {I(43,fd,1b,12),I(1b,34,00,00),I(00,00,00,1b),I(1f,03,1f,03),I(24,00,00,00),B(string ,4),I(3d,02,04,32),I(00,00,00,08),I(38,03,01,45),I(04,00,00,00)};

  /* Byte-vector with size: 10 is_init: 0 index: 37 binding: (method-do) */
  static const void *G002777[] = {I(43,fd,1b,12),I(1b,34,00,00),I(00,00,00,1b),I(1f,03,1f,03),I(24,00,00,00),B(string ,10),I(3d,02,04,32),I(00,00,00,08),I(38,03,01,45),I(04,00,00,00)};

  /* Byte-vector with size: 10 is_init: 0 index: 38 binding: (method-all?) */
  static const void *G002779[] = {I(43,fd,1b,12),I(1b,34,00,00),I(00,00,00,1b),I(1f,03,1f,03),I(24,00,00,00),B(string ,9),I(3d,02,04,32),I(00,00,00,08),I(38,03,01,45),I(04,00,00,00)};

  /* Byte-vector with size: 10 is_init: 0 index: 39 binding: (method-any?) */
  static const void *G002781[] = {I(43,fd,1b,12),I(1b,34,00,00),I(00,00,00,1b),I(1f,03,1f,03),I(24,00,00,00),B(string ,14),I(3d,02,04,32),I(00,00,00,08),I(38,03,01,45),I(04,00,00,00)};

  /* Byte-vector with size: 3 is_init: 0 index: 40 binding: (method-accumulate1) */
  static const void *G002783[] = {I(ab,24,00,00),B(string ,3),I(3d,02,00,00)};

  /* Byte-vector with size: 3 is_init: 0 index: 41 binding: (method-accumulate) */
  static const void *G002785[] = {I(43,03,24,00),B(string ,15),I(3d,03,00,00)};

  /* Byte-vector with size: 4 is_init: 0 index: 42 binding: (method-binary<) */
  static const void *G002787[] = {I(ab,41,00,00),B(string ,17),I(22,02,82,1a),I(45,00,00,00)};

  /* Byte-vector with size: 8 is_init: 0 index: 43 binding: (method-binary=) */
  static const void *G002789[] = {I(ab,41,00,00),B(string ,17),I(22,02,2d,1b),I(34,00,00,00),I(00,00,00,10),I(87,32,00,00),I(00,00,00,08),I(86,45,01,00)};

  /* Byte-vector with size: 2 is_init: 0 index: 44 binding: (method-emptyp) */
  static const void *G002791[] = {I(aa,06,2d,45),I(00,00,00,00)};

  /* Byte-vector with size: 13 is_init: 0 index: 47 binding: (method-initialize) */
  static const void *G002793[] = {I(ab,1c,1c,37),I(02,2a,1b,23),B(string ,45),I(82,24,00,00),B(boot ,29),I(3c,03,1c,23),B(string ,46),I(27,20,24,00),B(boot ,29),I(3c,03,1f,03),I(1d,1d,41,00),B(string ,16),I(45,07,00,00)};

  /* Byte-vector with size: 4 is_init: 0 index: 48 binding: (setter-string-data) */
  static const void *G002797[] = {I(ab,1c,82,1d),I(24,00,00,00),B(string ,13),I(09,45,02,00)};

  eul_allocate_static_cons(cons_2831, NULL, NULL);
  eul_allocate_static_cons(cons_2829, NULL, eul_as_static(cons_2831));
  /* Byte-vector with size: 662 is_init: 0 index: 80 binding: top-level */
  static const void *G002799[] = {I(a9,24,00,00),B(collect ,7),I(24,00,00,00),B(boot1 ,25),I(3c,01,24,00),B(boot1 ,25),I(3c,00,24,00),B(mop_class ,70),I(23,00,00,00),B(string ,49),I(23,00,00,00),B(string ,50),I(23,00,00,00),B(string ,51),I(1f,05,23,00),B(string ,52),I(1f,06,23,00),B(string ,53),I(86,23,00,00),B(string ,54),I(87,24,00,00),B(mop_gf ,2),I(3c,0b,1b,89),B(string ,2),I(2a,28,0f,1b),I(89,00,00,00),B(string ,13),I(2a,24,00,00),B(string ,2),I(2a,24,00,00),B(string ,13),I(24,00,00,00),B(mop_class ,70),I(05,2a,24,00),B(string ,2),I(24,00,00,00),B(boot1 ,25),I(3c,01,23,00),B(string ,49),I(23,00,00,00),B(string ,55),I(24,00,00,00),B(boot1 ,25),I(3c,02,1b,24),B(boot1 ,25),I(3c,01,23,00),B(string ,49),I(23,00,00,00),B(string ,56),I(23,00,00,00),B(string ,51),I(1f,05,23,00),B(string ,52),I(1f,05,23,00),B(string ,53),I(86,24,00,00),B(boot1 ,25),I(3c,08,24,00),B(string ,13),I(1c,24,00,00),B(mop_gf ,12),I(3c,02,2a,24),B(boot1 ,42),I(24,00,00,00),B(boot1 ,42),I(3c,01,24,00),B(string ,12),I(23,00,00,00),B(string ,57),I(23,00,00,00),B(string ,48),I(3b,02,1d,3c),I(02,2a,24,00),B(string ,13),I(2a,24,00,00),B(mop_gf ,12),I(26,00,00,00),I(00,00,00,03),I(02,84,24,00),B(string ,13),I(86,24,00,00),B(boot1 ,40),I(3c,03,24,00),B(boot1 ,25),I(3c,00,24,00),B(mop_gf ,12),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,7),I(3c,02,1f,04),I(1f,04,23,00),B(string ,58),I(23,00,00,00),B(string ,47),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(mop_gf ,12),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(collect ,3),I(26,00,00,00),I(00,00,00,03),I(02,83,24,00),B(string ,13),I(24,00,00,00),B(boot1 ,40),I(3c,02,24,00),B(boot1 ,25),I(3c,00,24,00),B(collect ,3),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,7),I(3c,02,1f,04),I(1f,04,23,00),B(string ,59),I(23,00,00,00),B(string ,44),I(3b,01,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(collect ,3),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(compare ,9),I(26,00,00,00),I(00,00,00,03),I(02,84,24,00),B(string ,13),I(24,00,00,00),B(string ,13),I(24,00,00,00),B(boot1 ,40),I(3c,03,24,00),B(boot1 ,25),I(3c,00,24,00),B(compare ,9),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,7),I(3c,02,1f,04),I(1f,04,23,00),B(string ,60),I(23,00,00,00),B(string ,43),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(compare ,9),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(compare ,6),I(26,00,00,00),I(00,00,00,03),I(02,84,24,00),B(string ,13),I(24,00,00,00),B(string ,13),I(24,00,00,00),B(boot1 ,40),I(3c,03,24,00),B(boot1 ,25),I(3c,00,24,00),B(compare ,6),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,7),I(3c,02,1f,04),I(1f,04,23,00),B(string ,61),I(23,00,00,00),B(string ,42),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(compare ,6),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(collect ,25),I(26,00,00,00),I(00,00,00,03),I(02,26,00,00),I(00,00,00,03),I(24,00,00,00),B(mop_class ,27),I(86,24,00,00),B(string ,13),I(24,00,00,00),B(boot1 ,40),I(3c,04,24,00),B(boot1 ,25),I(3c,00,24,00),B(collect ,25),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,7),I(3c,02,1f,04),I(1f,04,23,00),B(string ,62),I(23,00,00,00),B(string ,41),I(3b,03,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(collect ,25),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(collect ,14),I(26,00,00,00),I(00,00,00,03),I(02,84,24,00),B(mop_class ,27),I(24,00,00,00),B(string ,13),I(24,00,00,00),B(boot1 ,40),I(3c,03,24,00),B(boot1 ,25),I(3c,00,24,00),B(collect ,14),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,7),I(3c,02,1f,04),I(1f,04,23,00),B(string ,63),I(23,00,00,00),B(string ,40),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(collect ,14),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(collect ,26),I(26,00,00,00),I(00,00,00,03),I(02,84,24,00),B(mop_class ,27),I(24,00,00,00),B(string ,13),I(24,00,00,00),B(boot1 ,40),I(3c,03,24,00),B(boot1 ,25),I(3c,00,24,00),B(collect ,26),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,7),I(3c,02,1f,04),I(1f,04,23,00),B(string ,64),I(23,00,00,00),B(string ,39),I(3b,fd,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(collect ,26),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(collect ,18),I(26,00,00,00),I(00,00,00,03),I(02,84,24,00),B(mop_class ,27),I(24,00,00,00),B(string ,13),I(24,00,00,00),B(boot1 ,40),I(3c,03,24,00),B(boot1 ,25),I(3c,00,24,00),B(collect ,18),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,7),I(3c,02,1f,04),I(1f,04,23,00),B(string ,65),I(23,00,00,00),B(string ,38),I(3b,fd,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(collect ,18),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(collect ,6),I(26,00,00,00),I(00,00,00,03),I(02,84,24,00),B(mop_class ,27),I(24,00,00,00),B(string ,13),I(24,00,00,00),B(boot1 ,40),I(3c,03,24,00),B(boot1 ,25),I(3c,00,24,00),B(collect ,6),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,7),I(3c,02,1f,04),I(1f,04,23,00),B(string ,66),I(23,00,00,00),B(string ,37),I(3b,fd,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(collect ,6),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(collect ,2),I(26,00,00,00),I(00,00,00,03),I(02,84,24,00),B(mop_class ,27),I(24,00,00,00),B(string ,13),I(24,00,00,00),B(boot1 ,40),I(3c,03,24,00),B(boot1 ,25),I(3c,00,24,00),B(collect ,2),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,7),I(3c,02,1f,04),I(1f,04,23,00),B(string ,67),I(23,00,00,00),B(string ,36),I(3b,fd,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(collect ,2),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(collect ,13),I(26,00,00,00),I(00,00,00,03),I(02,84,86,24),B(string ,13),I(24,00,00,00),B(boot1 ,40),I(3c,03,24,00),B(boot1 ,25),I(3c,00,24,00),B(collect ,13),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,7),I(3c,02,1f,04),I(1f,04,23,00),B(string ,68),I(23,00,00,00),B(string ,35),I(3b,fd,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(collect ,13),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(collect ,22),I(26,00,00,00),I(00,00,00,03),I(02,84,24,00),B(string ,13),I(24,00,00,00),B(fpi ,6),I(24,00,00,00),B(boot1 ,40),I(3c,03,24,00),B(boot1 ,25),I(3c,00,24,00),B(collect ,22),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,7),I(3c,02,1f,04),I(1f,04,23,00),B(string ,69),I(23,00,00,00),B(string ,33),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(collect ,22),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(collect ,9),I(26,00,00,00),I(00,00,00,03),I(02,83,24,00),B(string ,13),I(24,00,00,00),B(boot1 ,40),I(3c,02,24,00),B(boot1 ,25),I(3c,00,24,00),B(collect ,9),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,7),I(3c,02,1f,04),I(1f,04,23,00),B(string ,70),I(23,00,00,00),B(string ,32),I(3b,01,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(collect ,9),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(collect ,27),I(26,00,00,00),I(00,00,00,03),I(02,83,24,00),B(string ,13),I(24,00,00,00),B(boot1 ,40),I(3c,02,24,00),B(boot1 ,25),I(3c,00,24,00),B(collect ,27),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,7),I(3c,02,1f,04),I(1f,04,23,00),B(string ,71),I(23,00,00,00),B(string ,31),I(3b,01,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(collect ,27),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(collect ,12),I(26,00,00,00),I(00,00,00,03),I(02,83,24,00),B(string ,13),I(24,00,00,00),B(boot1 ,40),I(3c,02,24,00),B(boot1 ,25),I(3c,00,24,00),B(collect ,12),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,7),I(3c,02,1f,04),I(1f,04,23,00),B(string ,72),I(23,00,00,00),B(string ,30),I(3b,01,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(collect ,12),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(collect ,19),I(26,00,00,00),I(00,00,00,03),I(02,83,24,00),B(string ,13),I(24,00,00,00),B(boot1 ,40),I(3c,02,24,00),B(boot1 ,25),I(3c,00,24,00),B(collect ,19),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,7),I(3c,02,1f,04),I(1f,04,23,00),B(string ,73),I(23,00,00,00),B(string ,29),I(3b,fe,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(collect ,19),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(collect ,4),I(26,00,00,00),I(00,00,00,03),I(02,26,00,00),I(00,00,00,03),I(24,00,00,00),B(string ,13),I(24,00,00,00),B(fpi ,6),I(24,00,00,00),B(fpi ,6),I(24,00,00,00),B(boot1 ,40),I(3c,04,24,00),B(boot1 ,25),I(3c,00,24,00),B(collect ,4),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,7),I(3c,02,1f,04),I(1f,04,23,00),B(string ,74),I(23,00,00,00),B(string ,26),I(3b,03,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(collect ,4),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(copy ,2),I(26,00,00,00),I(00,00,00,03),I(02,83,24,00),B(string ,13),I(24,00,00,00),B(boot1 ,40),I(3c,02,24,00),B(boot1 ,25),I(3c,00,24,00),B(copy ,2),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,7),I(3c,02,1f,04),I(1f,04,23,00),B(string ,75),I(23,00,00,00),B(string ,25),I(3b,01,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(copy ,2),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(copy ,3),I(26,00,00,00),I(00,00,00,03),I(02,83,24,00),B(string ,13),I(24,00,00,00),B(boot1 ,40),I(3c,02,24,00),B(boot1 ,25),I(3c,00,24,00),B(copy ,3),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,7),I(3c,02,1f,04),I(1f,04,23,00),B(string ,76),I(23,00,00,00),B(string ,24),I(3b,01,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(copy ,3),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(mop_class ,13),I(24,00,00,00),B(boot1 ,42),I(3c,01,83,24),B(mop_class ,20),I(24,00,00,00),B(boot1 ,40),I(3c,02,24,00),B(boot1 ,25),I(3c,00,24,00),B(boot1 ,25),I(3c,00,23,00),B(string ,79),I(1f,03,24,00),B(mop_class ,15),I(24,00,00,00),B(mop_class ,55),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,24,00),B(string ,13),I(1c,1f,06,3c),I(02,2a,24,00),B(string ,13),I(24,00,00,00),B(mop_class ,13),I(3d,01,80,45),I(80,00,00,00)};

  /* Byte-vector with size: 13 is_init: 0 index: 81 binding: accumulate1-string */
  static const void *G002833[] = {I(ab,1b,06,2d),I(1b,34,00,00),I(00,00,00,0f),I(86,32,00,00),I(00,00,00,24),I(1c,82,0b,1d),I(83,41,00,00),B(boot1 ,53),I(22,02,1f,04),I(1d,1d,24,00),B(string ,15),I(3d,03,05,22),I(02,45,03,00)};

  /* Byte-vector with size: 17 is_init: 0 index: 82 binding: anonymous */
  static const void *G002835[] = {I(a9,47,00,05),I(47,00,03,1a),I(1b,34,00,00),I(00,00,00,33),I(47,00,01,47),I(00,05,0b,1b),I(47,00,00,3c),I(01,47,00,04),I(47,00,05,1d),I(0c,2a,47,00),I(05,2b,1b,48),I(00,05,47,00),I(02,3d,00,04),I(22,03,32,00),I(00,00,00,09),I(47,00,04,45),I(01,00,00,00)};

  /* Byte-vector with size: 22 is_init: 0 index: 83 binding: map1-string */
  static const void *G002837[] = {I(ab,46,07,1c),I(48,00,00,1b),I(48,00,01,47),I(00,01,06,1b),I(48,00,03,24),B(string ,13),I(23,00,00,00),B(string ,45),I(47,00,03,24),B(mop_gf ,2),I(3c,03,1b,48),I(00,04,82,1b),I(48,00,05,86),I(1b,48,00,02),I(23,00,00,00),B(string ,28),I(23,00,00,00),B(string ,82),I(3b,00,48,00),I(02,47,00,02),I(3d,00,06,45),I(06,00,00,00)};

  /* Byte-vector with size: 33 is_init: 0 index: 84 binding: anonymous */
  static const void *G002839[] = {I(ab,47,00,01),I(1d,24,00,00),B(collect ,13),I(3c,02,1d,86),I(1d,24,00,00),B(string ,6),I(3c,03,24,00),B(mop_class ,5),I(23,00,00,00),B(string ,49),I(1d,24,00,00),B(mop_gf ,2),I(3c,03,1d,34),I(00,00,00,15),I(1f,04,06,1b),I(2c,1f,04,1c),I(1a,22,02,32),I(00,00,00,06),I(86,1b,34,00),I(00,00,00,26),I(1f,03,2b,1f),I(06,1c,86,24),B(string ,6),I(3c,03,1f,03),I(1f,07,0f,47),I(00,00,3d,02),I(07,22,01,32),I(00,00,00,14),I(1c,1f,05,0f),I(24,00,00,00),B(boot ,25),I(3d,01,06,45),I(06,00,00,00)};

  /* Byte-vector with size: 26 is_init: 0 index: 85 binding: listify-string */
  static const void *G002841[] = {I(43,fe,46,03),I(1b,34,00,00),I(00,00,00,0f),I(1b,10,32,00),I(00,00,00,08),I(27,20,1b,48),I(00,01,86,1b),I(48,00,00,23),B(string ,28),I(23,00,00,00),B(string ,84),I(3b,02,48,00),I(00,1f,03,82),I(0b,47,00,01),I(1c,51,1b,34),I(00,00,00,21),I(1f,05,83,86),I(24,00,00,00),B(string ,6),I(3c,03,86,47),I(00,00,3d,02),I(06,32,00,00),I(00,00,00,10),I(1f,05,86,47),I(00,00,3d,02),I(06,45,06,00)};

  /* Byte-vector with size: 14 is_init: 0 index: 86 binding: substring */
  static const void *G002843[] = {I(43,03,1c,1b),I(34,00,00,00),I(00,00,00,10),I(1b,32,00,00),I(00,00,00,08),I(82,1d,1b,34),I(00,00,00,0d),I(1b,32,00,00),I(00,00,00,0a),I(1f,05,06,1d),I(1c,1f,08,1d),I(1d,41,00,00),B(boot1 ,52),I(45,0c,00,00)};

  /* Byte-vector with size: 2 is_init: 0 index: 87 binding: string-empty? */
  static const void *G002845[] = {I(aa,06,2d,45),I(00,00,00,00)};

  /* Byte-vector with size: 4 is_init: 0 index: 88 binding: string-equal */
  static const void *G002847[] = {I(ab,41,00,00),B(string ,17),I(22,02,2d,45),I(00,00,00,00)};

  /* Byte-vector with size: 19 is_init: 0 index: 89 binding: anonymous */
  static const void *G002849[] = {I(a9,47,00,03),I(47,00,02,1a),I(1b,34,00,00),I(00,00,00,3b),I(47,00,01,47),I(00,03,0b,47),I(00,00,3c,01),I(1b,34,00,00),I(00,00,00,1f),I(47,00,03,2b),I(1b,48,00,03),I(47,00,04,3d),I(00,03,22,01),I(32,00,00,00),I(00,00,00,09),I(86,22,01,32),I(00,00,00,08),I(47,00,01,45),I(01,00,00,00)};

  /* Byte-vector with size: 15 is_init: 0 index: 90 binding: all?1-string */
  static const void *G002851[] = {I(ab,46,05,1c),I(48,00,00,1b),I(48,00,01,47),I(00,01,06,82),I(1c,48,00,02),I(1b,48,00,03),I(86,1b,48,00),I(04,23,00,00),B(string ,28),I(23,00,00,00),B(string ,89),I(3b,00,48,00),I(04,47,00,04),I(3d,00,05,45),I(05,00,00,00)};

  /* Byte-vector with size: 14 is_init: 0 index: 91 binding: anonymous */
  static const void *G002853[] = {I(a9,47,00,03),I(47,00,02,1a),I(1b,34,00,00),I(00,00,00,2b),I(47,00,01,47),I(00,03,0b,47),I(00,00,3c,01),I(2a,47,00,03),I(2b,1b,48,00),I(03,47,00,04),I(3d,00,02,22),I(01,32,00,00),I(00,00,00,08),I(86,45,01,00)};

  /* Byte-vector with size: 15 is_init: 0 index: 92 binding: do1-string */
  static const void *G002855[] = {I(ab,46,05,1c),I(48,00,00,1b),I(48,00,01,47),I(00,01,06,82),I(1c,48,00,02),I(1b,48,00,03),I(86,1b,48,00),I(04,23,00,00),B(string ,28),I(23,00,00,00),B(string ,91),I(3b,00,48,00),I(04,47,00,04),I(3d,00,05,45),I(05,00,00,00)};

  /* Byte-vector with size: 3 is_init: 0 index: 93 binding: string-append */
  static const void *G002857[] = {I(a8,41,00,00),B(string ,21),I(45,01,00,00)};

  /* Byte-vector with size: 3 is_init: 0 index: 94 binding: string-data */
  static const void *G002859[] = {I(aa,82,24,00),B(string ,13),I(08,45,00,00)};

  /* Byte-vector with size: 18 is_init: 0 index: 95 binding: anonymous */
  static const void *G002861[] = {I(a9,47,00,03),I(47,00,02,1a),I(1b,34,00,00),I(00,00,00,3b),I(47,00,01,47),I(00,03,0b,47),I(00,00,3c,01),I(1b,34,00,00),I(00,00,00,0f),I(1b,32,00,00),I(00,00,00,17),I(47,00,03,2b),I(1b,48,00,03),I(47,00,04,3d),I(00,03,22,01),I(22,01,32,00),I(00,00,00,07),I(86,45,01,00)};

  /* Byte-vector with size: 15 is_init: 0 index: 96 binding: anyp1-string */
  static const void *G002863[] = {I(ab,46,05,1c),I(48,00,00,1b),I(48,00,01,47),I(00,01,06,82),I(1c,48,00,02),I(1b,48,00,03),I(86,1b,48,00),I(04,23,00,00),B(string ,28),I(23,00,00,00),B(string ,95),I(3b,00,48,00),I(04,47,00,04),I(3d,00,05,45),I(05,00,00,00)};

  /* Byte-vector with size: 17 is_init: 0 index: 97 binding: anonymous */
  static const void *G002865[] = {I(a9,47,00,04),I(47,00,03,1a),I(1b,34,00,00),I(00,00,00,33),I(47,00,02,47),I(00,04,0b,47),I(00,01,1c,47),I(00,00,3c,02),I(1b,48,00,01),I(47,00,04,2b),I(1b,48,00,04),I(47,00,05,3d),I(00,04,22,03),I(32,00,00,00),I(00,00,00,0b),I(47,00,01,45),I(01,00,00,00)};

  /* Byte-vector with size: 16 is_init: 0 index: 98 binding: accumulate-string */
  static const void *G002867[] = {I(43,03,46,06),I(1d,48,00,00),I(1c,48,00,01),I(1b,48,00,02),I(47,00,02,06),I(82,1c,48,00),I(03,1b,48,00),I(04,86,1b,48),I(00,05,23,00),B(string ,28),I(23,00,00,00),B(string ,97),I(3b,00,48,00),I(05,47,00,05),I(3d,00,06,45),I(06,00,00,00)};

  /* Byte-vector with size: 114 is_init: 1 index: 0 binding: initialize-string */
  static const void *G002869[] = {I(87,25,00,00),B(string ,1),I(24,00,00,00),B(fpi ,1),I(3e,0b,24,00),B(fpi ,0),I(3c,00,21,01),I(24,00,00,00),B(compare ,1),I(3e,0b,24,00),B(compare ,0),I(3c,00,21,01),I(24,00,00,00),B(collect ,1),I(3e,0b,24,00),B(collect ,0),I(3c,00,21,01),I(24,00,00,00),B(copy ,1),I(3e,0b,24,00),B(copy ,0),I(3c,00,21,01),I(24,00,00,00),B(convert ,1),I(3e,0b,24,00),B(convert ,0),I(3c,00,21,01),I(24,00,00,00),B(telos ,1),I(3e,0b,24,00),B(telos ,0),I(3c,00,21,01),I(23,00,00,00),B(string ,99),I(23,00,00,00),B(string ,98),I(3b,03,25,00),B(string ,15),I(23,00,00,00),B(string ,100),I(23,00,00,00),B(string ,96),I(3b,02,25,00),B(string ,14),I(86,25,00,00),B(string ,13),I(23,00,00,00),B(string ,101),I(23,00,00,00),B(string ,94),I(3b,01,25,00),B(string ,12),I(23,00,00,00),B(string ,102),I(23,00,00,00),B(string ,93),I(3b,ff,25,00),B(string ,11),I(23,00,00,00),B(string ,103),I(23,00,00,00),B(string ,92),I(3b,02,25,00),B(string ,10),I(23,00,00,00),B(string ,104),I(23,00,00,00),B(string ,90),I(3b,02,25,00),B(string ,9),I(23,00,00,00),B(string ,105),I(23,00,00,00),B(string ,88),I(3b,02,25,00),B(string ,8),I(23,00,00,00),B(string ,106),I(23,00,00,00),B(string ,87),I(3b,01,25,00),B(string ,7),I(23,00,00,00),B(string ,107),I(23,00,00,00),B(string ,86),I(3b,03,25,00),B(string ,6),I(23,00,00,00),B(string ,108),I(23,00,00,00),B(string ,85),I(3b,fe,25,00),B(string ,5),I(23,00,00,00),B(string ,109),I(23,00,00,00),B(string ,83),I(3b,02,25,00),B(string ,4),I(23,00,00,00),B(string ,110),I(23,00,00,00),B(string ,81),I(3b,02,25,00),B(string ,3),I(86,25,00,00),B(string ,2),I(23,00,00,00),B(string ,111),I(23,00,00,00),B(string ,80),I(3b,00,3d,00),I(00,ac,00,00)};


  /* Initializations */
  eul_allocate_bytevector( G002753,G002752);
  eul_allocate_bytevector( G002755,G002754);
  eul_allocate_bytevector( G002757,G002756);
  eul_allocate_bytevector( G002759,G002758);
  eul_intern_symbol(sym_2762,"anonymous");
  eul_allocate_bytevector( G002761,G002760);
  eul_allocate_bytevector( G002764,G002763);
  eul_allocate_bytevector( G002766,G002765);
  eul_allocate_bytevector( G002768,G002767);
  eul_allocate_bytevector( G002770,G002769);
  eul_allocate_bytevector( G002772,G002771);
  eul_allocate_bytevector( G002774,G002773);
  eul_allocate_bytevector( G002776,G002775);
  eul_allocate_bytevector( G002778,G002777);
  eul_allocate_bytevector( G002780,G002779);
  eul_allocate_bytevector( G002782,G002781);
  eul_allocate_bytevector( G002784,G002783);
  eul_allocate_bytevector( G002786,G002785);
  eul_allocate_bytevector( G002788,G002787);
  eul_allocate_bytevector( G002790,G002789);
  eul_allocate_bytevector( G002792,G002791);
  eul_intern_keyword(key_2795,"size");
  eul_intern_keyword(key_2796,"fill-value");
  eul_allocate_bytevector( G002794,G002793);
  eul_allocate_bytevector( G002798,G002797);
  eul_intern_keyword(key_2801,"name");
  eul_intern_symbol(sym_2802,"character-sequence");
  eul_intern_keyword(key_2803,"direct-superclasses");
  eul_intern_keyword(key_2804,"direct-slots");
  eul_intern_keyword(key_2805,"direct-keywords");
  eul_intern_keyword(key_2806,"abstract?");
  eul_intern_symbol(sym_2807,"data");
  eul_intern_symbol(sym_2808,"string");
  eul_intern_symbol(sym_2809,"(setter string-data)");
  eul_intern_symbol(sym_2810,"(method initialize)");
  eul_intern_symbol(sym_2811,"(method emptyp)");
  eul_intern_symbol(sym_2812,"(method binary=)");
  eul_intern_symbol(sym_2813,"(method binary<)");
  eul_intern_symbol(sym_2814,"(method accumulate)");
  eul_intern_symbol(sym_2815,"(method accumulate1)");
  eul_intern_symbol(sym_2816,"(method any?)");
  eul_intern_symbol(sym_2817,"(method all?)");
  eul_intern_symbol(sym_2818,"(method do)");
  eul_intern_symbol(sym_2819,"(method map)");
  eul_intern_symbol(sym_2820,"(method member)");
  eul_intern_symbol(sym_2821,"(method element)");
  eul_intern_symbol(sym_2822,"(method size)");
  eul_intern_symbol(sym_2823,"(method reverse)");
  eul_intern_symbol(sym_2824,"(method reverse!)");
  eul_intern_symbol(sym_2825,"(method concatenate)");
  eul_intern_symbol(sym_2826,"(method slice)");
  eul_intern_symbol(sym_2827,"(method shallow-copy)");
  eul_intern_symbol(sym_2828,"(method deep-copy)");
  eul_intern_symbol(sym_2830,"converter");
  eul_intern_symbol(sym_2832,"<string>");
  object_class(cons_2831) = eul_static_cons_class;
  eul_car(cons_2831) = sym_2832;
  eul_cdr(cons_2831) = eul_nil;
  object_class(cons_2829) = eul_static_cons_class;
  eul_car(cons_2829) = sym_2830;
  eul_allocate_bytevector( G002800,G002799);
  eul_allocate_bytevector( G002834,G002833);
  eul_allocate_bytevector( G002836,G002835);
  eul_allocate_bytevector( G002838,G002837);
  eul_allocate_bytevector( G002840,G002839);
  eul_allocate_bytevector( G002842,G002841);
  eul_allocate_bytevector( G002844,G002843);
  eul_allocate_bytevector( G002846,G002845);
  eul_allocate_bytevector( G002848,G002847);
  eul_allocate_bytevector( G002850,G002849);
  eul_allocate_bytevector( G002852,G002851);
  eul_allocate_bytevector( G002854,G002853);
  eul_allocate_bytevector( G002856,G002855);
  eul_allocate_bytevector( G002858,G002857);
  eul_allocate_bytevector( G002860,G002859);
  eul_allocate_bytevector( G002862,G002861);
  eul_allocate_bytevector( G002864,G002863);
  eul_allocate_bytevector( G002866,G002865);
  eul_allocate_bytevector( G002868,G002867);
  eul_intern_symbol(sym_2871,"accumulate-string");
  eul_intern_symbol(sym_2872,"anyp1-string");
  eul_intern_symbol(sym_2873,"string-data");
  eul_intern_symbol(sym_2874,"string-append");
  eul_intern_symbol(sym_2875,"do1-string");
  eul_intern_symbol(sym_2876,"all?1-string");
  eul_intern_symbol(sym_2877,"string-equal");
  eul_intern_symbol(sym_2878,"string-empty?");
  eul_intern_symbol(sym_2879,"substring");
  eul_intern_symbol(sym_2880,"listify-string");
  eul_intern_symbol(sym_2881,"map1-string");
  eul_intern_symbol(sym_2882,"accumulate1-string");
  eul_intern_symbol(sym_2883,"top-level");
  eul_allocate_bytevector( G002870,G002869);

  /* Set local bindings */
  {
    int i;
    for (i = 2; i < 16; i++)
      string_bindings[i] = eul_nil;
  }

  string_bindings[ 16] = (LispRef) (LispRef (*) (Stack *, LispRef *, LispRef *)) ff_stub_eul_init_string2744;
  string_bindings[ 17] = (LispRef) (LispRef (*) (Stack *, LispRef *, LispRef *)) ff_stub_strcmp2745;
  string_bindings[ 18] = (LispRef) (LispRef (*) (Stack *, LispRef *, LispRef *)) ff_stub_eul_reverse_str2746;
  string_bindings[ 19] = (LispRef) (LispRef (*) (Stack *, LispRef *, LispRef *)) ff_stub_eul_reverse_des_str2747;
  string_bindings[ 20] = (LispRef) (LispRef (*) (Stack *, LispRef *, LispRef *)) ff_stub_eul_str_append2748;
  string_bindings[ 21] = (LispRef) (LispRef (*) (Stack *, LispRef *, LispRef *)) ff_stub_eul_list_as_eul_string2749;
  string_bindings[ 22] = (LispRef) (LispRef (*) (Stack *, LispRef *, LispRef *)) ff_stub_eul_str_copy2750;
  string_bindings[ 23] = (LispRef) (LispRef (*) (Stack *, LispRef *, LispRef *)) ff_stub_atoi2751;
  string_bindings[ 24] = G002753;
  string_bindings[ 25] = G002755;
  string_bindings[ 26] = G002757;
  string_bindings[ 27] = G002759;
  string_bindings[ 28] = sym_2762;
  string_bindings[ 29] = G002761;
  string_bindings[ 30] = G002764;
  string_bindings[ 31] = G002766;
  string_bindings[ 32] = G002768;
  string_bindings[ 33] = G002770;
  string_bindings[ 34] = G002772;
  string_bindings[ 35] = G002774;
  string_bindings[ 36] = G002776;
  string_bindings[ 37] = G002778;
  string_bindings[ 38] = G002780;
  string_bindings[ 39] = G002782;
  string_bindings[ 40] = G002784;
  string_bindings[ 41] = G002786;
  string_bindings[ 42] = G002788;
  string_bindings[ 43] = G002790;
  string_bindings[ 44] = G002792;
  string_bindings[ 45] = key_2795;
  string_bindings[ 46] = key_2796;
  string_bindings[ 47] = G002794;
  string_bindings[ 48] = G002798;
  string_bindings[ 49] = key_2801;
  string_bindings[ 50] = sym_2802;
  string_bindings[ 51] = key_2803;
  string_bindings[ 52] = key_2804;
  string_bindings[ 53] = key_2805;
  string_bindings[ 54] = key_2806;
  string_bindings[ 55] = sym_2807;
  string_bindings[ 56] = sym_2808;
  string_bindings[ 57] = sym_2809;
  string_bindings[ 58] = sym_2810;
  string_bindings[ 59] = sym_2811;
  string_bindings[ 60] = sym_2812;
  string_bindings[ 61] = sym_2813;
  string_bindings[ 62] = sym_2814;
  string_bindings[ 63] = sym_2815;
  string_bindings[ 64] = sym_2816;
  string_bindings[ 65] = sym_2817;
  string_bindings[ 66] = sym_2818;
  string_bindings[ 67] = sym_2819;
  string_bindings[ 68] = sym_2820;
  string_bindings[ 69] = sym_2821;
  string_bindings[ 70] = sym_2822;
  string_bindings[ 71] = sym_2823;
  string_bindings[ 72] = sym_2824;
  string_bindings[ 73] = sym_2825;
  string_bindings[ 74] = sym_2826;
  string_bindings[ 75] = sym_2827;
  string_bindings[ 76] = sym_2828;
  string_bindings[ 77] = sym_2830;
  string_bindings[ 78] = sym_2832;
  string_bindings[ 79] = cons_2829;
  string_bindings[ 80] = G002800;
  string_bindings[ 81] = G002834;
  string_bindings[ 82] = G002836;
  string_bindings[ 83] = G002838;
  string_bindings[ 84] = G002840;
  string_bindings[ 85] = G002842;
  string_bindings[ 86] = G002844;
  string_bindings[ 87] = G002846;
  string_bindings[ 88] = G002848;
  string_bindings[ 89] = G002850;
  string_bindings[ 90] = G002852;
  string_bindings[ 91] = G002854;
  string_bindings[ 92] = G002856;
  string_bindings[ 93] = G002858;
  string_bindings[ 94] = G002860;
  string_bindings[ 95] = G002862;
  string_bindings[ 96] = G002864;
  string_bindings[ 97] = G002866;
  string_bindings[ 98] = G002868;
  string_bindings[ 1] = eul_nil;
  string_bindings[ 99] = sym_2871;
  string_bindings[ 100] = sym_2872;
  string_bindings[ 101] = sym_2873;
  string_bindings[ 102] = sym_2874;
  string_bindings[ 103] = sym_2875;
  string_bindings[ 104] = sym_2876;
  string_bindings[ 105] = sym_2877;
  string_bindings[ 106] = sym_2878;
  string_bindings[ 107] = sym_2879;
  string_bindings[ 108] = sym_2880;
  string_bindings[ 109] = sym_2881;
  string_bindings[ 110] = sym_2882;
  string_bindings[ 111] = sym_2883;
  eul_allocate_lambda( string_bindings[0], "initialize-string", 0, G002870);

  }
}


/* eof */
