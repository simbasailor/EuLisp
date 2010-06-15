/** ----------------------------------------------------------------------- **
 **                 Generated by EuLisp System 'youtoo'
 ** ----------------------------------------------------------------------- **
 **  Description: C source file of EuLisp module table1
 **  Copyright: See file table1.em
 ** ----------------------------------------------------------------------- **/

#include "eulisp.h"


/* Imported modules */
extern void initialize_module_telos();
extern void initialize_module_convert();
extern void initialize_module_copy();
extern void initialize_module_collect();
extern void initialize_module_compare();
extern void initialize_module_list();
extern void initialize_module_fpi();
extern void initialize_module_string();
extern void initialize_module_vector();
extern LispRef string_bindings[];
extern LispRef fpi_bindings[];
extern LispRef list_bindings[];
extern LispRef copy_bindings[];
extern LispRef convert_bindings[];
extern LispRef telos_bindings[];
extern LispRef mop_meth_bindings[];
extern LispRef mop_class_bindings[];
extern LispRef collect_bindings[];
extern LispRef mop_key_bindings[];
extern LispRef boot1_bindings[];
extern LispRef compare_bindings[];
extern LispRef mop_gf_bindings[];
extern LispRef mop_inspect_bindings[];
extern LispRef vector_bindings[];
extern LispRef boot_bindings[];

/* Module bindings with size 102 */
LispRef table1_bindings[102];

/* Foreign functions */
static LispRef ff_stub_eul_hash_object7498 (Stack *reg_value_stack, LispRef *sreg_value_sp, LispRef *sreg_value_sb)
{
  LispRef G007618, res;

  POPVAL1(G007618);
  FF_RES_CONVERT0(res,eul_hash_object(FF_ARG_CONVERT8(G007618)));
  return res;
}


/* Initialize module only once */
static int is_initialized = 0;

/* Initialize module table1 */
void initialize_module_table1()
{
  if (is_initialized) return;
  initialize_module_telos();
  initialize_module_convert();
  initialize_module_copy();
  initialize_module_collect();
  initialize_module_compare();
  initialize_module_list();
  initialize_module_fpi();
  initialize_module_string();
  initialize_module_vector();
  eul_fast_table_set(eul_modules,"table1",(LispRef) table1_bindings);
  is_initialized = 1;
  {
  /* Declarations */
  LispRef sym_7617, sym_7616, sym_7615, sym_7614, sym_7613, sym_7612, sym_7611, G007610, G007608, G007606, G007604, G007602, G007600, G007598, sym_7596, sym_7595, sym_7594, sym_7593, sym_7592, sym_7591, sym_7590, sym_7589, sym_7588, sym_7587, sym_7586, sym_7585, sym_7584, sym_7583, sym_7582, sym_7581, sym_7580, sym_7579, sym_7578, sym_7577, sym_7576, sym_7573, sym_7572, sym_7571, key_7569, key_7568, key_7567, sym_7566, sym_7565, key_7564, sym_7563, key_7562, key_7561, sym_7560, sym_7559, key_7558, G007557, G007555, G007553, G007551, G007549, G007547, G007545, G007543, G007541, G007539, G007537, G007535, G007533, G007531, G007529, G007527, G007525, key_7520, key_7519, G007518, G007516, G007514, G007512, G007510, G007508, sym_7506, G007505, G007503, G007500;

  /* Code vector and literal definitions */
  eul_allocate_static_string(str_7501, "keys of table ~a not accessable", 31);
  /* Byte-vector with size: 5 is_init: 0 index: 20 binding: (method-table-keys) */
  static const void *G007499[] = {I(aa,23,00,00),B(table1 ,19),I(1c,24,00,00),B(boot ,22),I(3d,02,01,00)};

  /* Byte-vector with size: 10 is_init: 0 index: 21 binding: anonymous */
  static const void *G007502[] = {I(aa,1b,12,1b),I(34,00,00,00),I(00,00,00,10),I(86,32,00,00),I(00,00,00,17),I(1c,10,1b,47),I(00,00,0f,1b),I(48,00,00,47),I(00,00,22,02),I(45,02,00,00)};

  /* Byte-vector with size: 20 is_init: 0 index: 23 binding: (method-table-keys) */
  static const void *G007504[] = {I(aa,46,01,26),I(00,00,00,03),I(24,00,00,00),B(table1 ,4),I(08,86,1b,48),I(00,00,1c,24),B(vector ,5),I(3c,01,1b,34),I(00,00,00,2d),I(23,00,00,00),B(table1 ,22),I(23,00,00,00),B(table1 ,21),I(3b,01,1f,03),I(24,00,00,00),B(vector ,13),I(3c,02,2a,47),I(00,00,32,00),I(00,00,00,07),I(86,45,03,00)};

  /* Byte-vector with size: 10 is_init: 0 index: 24 binding: anonymous */
  static const void *G007507[] = {I(aa,1b,12,1b),I(34,00,00,00),I(00,00,00,10),I(86,32,00,00),I(00,00,00,17),I(1c,11,1b,47),I(00,00,0f,1b),I(48,00,00,47),I(00,00,22,02),I(45,02,00,00)};

  /* Byte-vector with size: 20 is_init: 0 index: 25 binding: (method-table-values) */
  static const void *G007509[] = {I(aa,46,01,26),I(00,00,00,03),I(24,00,00,00),B(table1 ,4),I(08,86,1b,48),I(00,00,1c,24),B(vector ,5),I(3c,01,1b,34),I(00,00,00,2d),I(23,00,00,00),B(table1 ,22),I(23,00,00,00),B(table1 ,24),I(3b,01,1f,03),I(24,00,00,00),B(vector ,13),I(3c,02,2a,47),I(00,00,32,00),I(00,00,00,07),I(86,45,03,00)};

  /* Byte-vector with size: 3 is_init: 0 index: 26 binding: (method-size) */
  static const void *G007511[] = {I(aa,83,24,00),B(table1 ,4),I(08,45,00,00)};

  /* Byte-vector with size: 3 is_init: 0 index: 27 binding: (method-reset) */
  static const void *G007513[] = {I(aa,24,00,00),B(table1 ,10),I(3d,01,00,00)};

  /* Byte-vector with size: 19 is_init: 0 index: 28 binding: (method-clear-table) */
  static const void *G007515[] = {I(aa,1b,86,1c),I(26,00,00,00),I(00,00,00,03),I(1d,24,00,00),B(table1 ,4),I(09,22,02,2a),I(1b,82,1c,83),I(1d,24,00,00),B(table1 ,4),I(09,22,02,2a),I(26,00,00,00),I(00,00,00,10),I(26,00,00,00),I(00,00,00,04),I(15,1c,1c,1c),I(82,1d,24,00),B(table1 ,4),I(09,22,02,2a),I(1c,45,02,00)};

  eul_allocate_static_cons(cons_7522, NULL, NULL);
  eul_allocate_static_cons(cons_7521, NULL, eul_as_static(cons_7522));
  eul_allocate_static_string(str_7523, "table initialization of ~a without hash function", 48);
  /* Byte-vector with size: 69 is_init: 0 index: 33 binding: (method-initialize) */
  static const void *G007517[] = {I(ab,1c,04,24),B(table1 ,4),I(50,1b,34,00),I(00,00,01,02),I(1c,23,00,00),B(table1 ,29),I(24,00,00,00),B(boot ,28),I(3c,02,1d,23),B(table1 ,30),I(24,00,00,00),B(boot ,28),I(3c,02,24,00),B(mop_inspect ,11),I(3c,01,1b,34),I(00,00,00,25),I(24,00,00,00),B(mop_gf ,2),I(24,00,00,00),B(table1 ,9),I(1f,05,24,00),B(boot ,9),I(3d,03,05,32),I(00,00,00,a8),I(1c,24,00,00),B(compare ,9),I(50,1b,34,00),I(00,00,00,26),I(24,00,00,00),B(mop_gf ,2),I(24,00,00,00),B(table1 ,9),I(1f,06,24,00),B(boot ,9),I(3d,03,06,32),I(00,00,00,76),I(86,24,00,00),B(boot1 ,21),I(24,00,00,00),B(boot1 ,43),I(24,00,00,00),B(boot1 ,24),I(3c,03,1f,03),I(1c,86,6c,1b),I(34,00,00,00),I(00,00,00,3c),I(1f,06,23,00),B(table1 ,31),I(24,00,00,00),B(mop_key ,3),I(3c,02,24,00),B(mop_gf ,2),I(24,00,00,00),B(table1 ,14),I(1d,24,00,00),B(boot ,9),I(3d,03,09,22),I(01,32,00,00),I(00,00,00,1a),I(23,00,00,00),B(table1 ,32),I(1f,08,24,00),B(boot ,22),I(3d,02,08,22),I(02,22,01,22),I(02,32,00,00),I(00,00,00,0a),I(38,02,01,45),I(03,00,00,00)};

  /* Byte-vector with size: 1 is_init: 0 index: 34 binding: (method-hash-table?) */
  static const void *G007524[] = {I(aa,1b,45,01)};

  /* Byte-vector with size: 1 is_init: 0 index: 35 binding: (method-hash-table?) */
  static const void *G007526[] = {I(aa,86,45,01)};

  /* Byte-vector with size: 4 is_init: 0 index: 36 binding: (setter-table-comparator) */
  static const void *G007528[] = {I(ab,1c,83,1d),I(24,00,00,00),B(table1 ,9),I(09,45,02,00)};

  /* Byte-vector with size: 4 is_init: 0 index: 37 binding: (setter-table-hash-function) */
  static const void *G007530[] = {I(ab,1c,82,1d),I(24,00,00,00),B(table1 ,9),I(09,45,02,00)};

  /* Byte-vector with size: 1 is_init: 0 index: 38 binding: (method-simple-hash-table?) */
  static const void *G007532[] = {I(aa,1b,45,01)};

  /* Byte-vector with size: 1 is_init: 0 index: 39 binding: (method-simple-hash-table?) */
  static const void *G007534[] = {I(aa,86,45,01)};

  /* Byte-vector with size: 1 is_init: 0 index: 40 binding: (method-table?) */
  static const void *G007536[] = {I(aa,1b,45,01)};

  /* Byte-vector with size: 1 is_init: 0 index: 41 binding: (method-table?) */
  static const void *G007538[] = {I(aa,86,45,01)};

  /* Byte-vector with size: 5 is_init: 0 index: 42 binding: (setter-table-entries) */
  static const void *G007540[] = {I(ab,1c,26,00),I(00,00,00,03),I(1d,24,00,00),B(table1 ,4),I(09,45,02,00)};

  /* Byte-vector with size: 4 is_init: 0 index: 43 binding: (setter-table-size) */
  static const void *G007542[] = {I(ab,1c,83,1d),I(24,00,00,00),B(table1 ,4),I(09,45,02,00)};

  /* Byte-vector with size: 4 is_init: 0 index: 44 binding: (setter-table-threshold) */
  static const void *G007544[] = {I(ab,1c,82,1d),I(24,00,00,00),B(table1 ,4),I(09,45,02,00)};

  /* Byte-vector with size: 3 is_init: 0 index: 45 binding: anonymous */
  static const void *G007546[] = {I(a9,24,00,00),B(table1 ,3),I(45,00,00,00)};

  /* Byte-vector with size: 3 is_init: 0 index: 46 binding: anonymous */
  static const void *G007548[] = {I(a9,24,00,00),B(boot1 ,43),I(45,00,00,00)};

  /* Byte-vector with size: 5 is_init: 0 index: 47 binding: anonymous */
  static const void *G007550[] = {I(a9,26,00,00),I(00,00,00,10),I(26,00,00,00),I(00,00,00,04),I(15,45,00,00)};

  /* Byte-vector with size: 1 is_init: 0 index: 48 binding: anonymous */
  static const void *G007552[] = {I(a9,82,45,00)};

  /* Byte-vector with size: 3 is_init: 0 index: 49 binding: anonymous */
  static const void *G007554[] = {I(aa,41,00,00),B(table1 ,18),I(45,01,00,00)};

  eul_allocate_static_cons(cons_7570, NULL, NULL);
  eul_allocate_static_cons(cons_7575, NULL, NULL);
  eul_allocate_static_cons(cons_7574, NULL, eul_as_static(cons_7575));
  /* Byte-vector with size: 711 is_init: 0 index: 88 binding: top-level */
  static const void *G007556[] = {I(a9,23,00,00),B(table1 ,22),I(23,00,00,00),B(table1 ,49),I(3b,01,89,00),B(table1 ,3),I(2a,24,00,00),B(collect ,24),I(24,00,00,00),B(boot1 ,24),I(3c,01,23,00),B(table1 ,50),I(23,00,00,00),B(table1 ,51),I(24,00,00,00),B(boot1 ,24),I(3c,02,23,00),B(table1 ,50),I(23,00,00,00),B(table1 ,52),I(23,00,00,00),B(table1 ,53),I(23,00,00,00),B(table1 ,54),I(24,00,00,00),B(boot1 ,24),I(3c,04,23,00),B(table1 ,50),I(23,00,00,00),B(table1 ,55),I(23,00,00,00),B(table1 ,56),I(23,00,00,00),B(table1 ,22),I(23,00,00,00),B(table1 ,48),I(3b,00,24,00),B(boot1 ,24),I(3c,04,23,00),B(table1 ,50),I(23,00,00,00),B(table1 ,57),I(23,00,00,00),B(table1 ,56),I(23,00,00,00),B(table1 ,22),I(23,00,00,00),B(table1 ,47),I(3b,00,24,00),B(boot1 ,24),I(3c,04,1f,03),I(1f,03,1f,03),I(1f,03,24,00),B(boot1 ,24),I(3c,04,24,00),B(mop_class ,70),I(23,00,00,00),B(table1 ,50),I(23,00,00,00),B(table1 ,58),I(23,00,00,00),B(table1 ,59),I(1f,09,23,00),B(table1 ,60),I(1f,06,23,00),B(table1 ,61),I(23,00,00,00),B(table1 ,62),I(24,00,00,00),B(mop_gf ,2),I(3c,09,1b,89),B(table1 ,4),I(2a,28,1c,1b),I(89,00,00,00),B(table1 ,14),I(2a,24,00,00),B(table1 ,4),I(24,00,00,00),B(boot1 ,24),I(3c,01,23,00),B(table1 ,50),I(23,00,00,00),B(table1 ,63),I(23,00,00,00),B(table1 ,56),I(23,00,00,00),B(table1 ,22),I(23,00,00,00),B(table1 ,46),I(3b,00,23,00),B(table1 ,53),I(23,00,00,00),B(table1 ,29),I(24,00,00,00),B(boot1 ,24),I(3c,06,23,00),B(table1 ,50),I(23,00,00,00),B(table1 ,64),I(23,00,00,00),B(table1 ,56),I(23,00,00,00),B(table1 ,22),I(23,00,00,00),B(table1 ,45),I(3b,00,23,00),B(table1 ,53),I(23,00,00,00),B(table1 ,30),I(24,00,00,00),B(boot1 ,24),I(3c,06,1c,1c),I(24,00,00,00),B(boot1 ,24),I(3c,02,24,00),B(mop_class ,70),I(23,00,00,00),B(table1 ,50),I(23,00,00,00),B(table1 ,65),I(23,00,00,00),B(table1 ,59),I(1f,07,23,00),B(table1 ,60),I(1f,06,23,00),B(table1 ,61),I(23,00,00,00),B(table1 ,66),I(24,00,00,00),B(mop_gf ,2),I(3c,09,1b,89),B(table1 ,9),I(2a,83,24,00),B(mop_class ,20),I(24,00,00,00),B(boot1 ,38),I(3c,02,24,00),B(boot1 ,24),I(3c,00,24,00),B(boot1 ,24),I(3c,00,23,00),B(table1 ,67),I(1f,03,24,00),B(mop_class ,15),I(24,00,00,00),B(mop_class ,55),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,1b,89),B(table1 ,7),I(2a,83,24,00),B(mop_class ,20),I(24,00,00,00),B(boot1 ,38),I(3c,02,24,00),B(boot1 ,24),I(3c,00,24,00),B(boot1 ,24),I(3c,00,23,00),B(table1 ,68),I(1f,03,24,00),B(mop_class ,15),I(24,00,00,00),B(mop_class ,55),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,1b,89),B(table1 ,6),I(2a,83,24,00),B(mop_class ,20),I(24,00,00,00),B(boot1 ,38),I(3c,02,24,00),B(boot1 ,24),I(3c,00,24,00),B(boot1 ,24),I(3c,00,23,00),B(table1 ,69),I(1f,03,24,00),B(mop_class ,15),I(24,00,00,00),B(mop_class ,55),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,1b,89),B(table1 ,13),I(2a,83,24,00),B(mop_class ,20),I(24,00,00,00),B(boot1 ,38),I(3c,02,24,00),B(boot1 ,24),I(3c,00,24,00),B(boot1 ,24),I(3c,00,23,00),B(table1 ,70),I(1f,03,24,00),B(mop_class ,15),I(24,00,00,00),B(mop_class ,55),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,1b,89),B(table1 ,10),I(2a,83,24,00),B(mop_class ,20),I(24,00,00,00),B(boot1 ,38),I(3c,02,24,00),B(boot1 ,24),I(3c,00,24,00),B(boot1 ,24),I(3c,00,23,00),B(table1 ,71),I(1f,03,24,00),B(mop_class ,15),I(24,00,00,00),B(mop_class ,55),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,1b,89),B(table1 ,16),I(2a,83,24,00),B(mop_class ,20),I(24,00,00,00),B(boot1 ,38),I(3c,02,24,00),B(boot1 ,24),I(3c,00,24,00),B(boot1 ,24),I(3c,00,23,00),B(table1 ,72),I(1f,03,24,00),B(mop_class ,15),I(24,00,00,00),B(mop_class ,55),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,1b,89),B(table1 ,2),I(2a,24,00,00),B(boot1 ,40),I(24,00,00,00),B(boot1 ,40),I(3c,01,24,00),B(table1 ,12),I(23,00,00,00),B(table1 ,73),I(23,00,00,00),B(table1 ,44),I(3b,02,1d,3c),I(02,2a,24,00),B(boot1 ,40),I(24,00,00,00),B(boot1 ,40),I(3c,01,24,00),B(table1 ,5),I(23,00,00,00),B(table1 ,74),I(23,00,00,00),B(table1 ,43),I(3b,02,1d,3c),I(02,2a,24,00),B(boot1 ,40),I(24,00,00,00),B(boot1 ,40),I(3c,01,24,00),B(table1 ,15),I(23,00,00,00),B(table1 ,75),I(23,00,00,00),B(table1 ,42),I(3b,02,1d,3c),I(02,2a,24,00),B(table1 ,7),I(26,00,00,00),I(00,00,00,03),I(02,83,24,00),B(mop_class ,20),I(24,00,00,00),B(boot1 ,38),I(3c,02,24,00),B(boot1 ,24),I(3c,00,24,00),B(table1 ,7),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,11),I(3c,02,1f,04),I(1f,04,23,00),B(table1 ,76),I(23,00,00,00),B(table1 ,41),I(3b,01,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(table1 ,7),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(table1 ,7),I(26,00,00,00),I(00,00,00,03),I(02,83,24,00),B(table1 ,4),I(24,00,00,00),B(boot1 ,38),I(3c,02,24,00),B(boot1 ,24),I(3c,00,24,00),B(table1 ,7),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,11),I(3c,02,1f,04),I(1f,04,23,00),B(table1 ,76),I(23,00,00,00),B(table1 ,40),I(3b,01,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(table1 ,7),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(table1 ,7),I(2a,24,00,00),B(table1 ,4),I(2a,24,00,00),B(table1 ,14),I(24,00,00,00),B(mop_class ,70),I(05,2a,24,00),B(table1 ,4),I(24,00,00,00),B(boot1 ,24),I(3c,01,24,00),B(boot1 ,24),I(3c,00,23,00),B(table1 ,50),I(23,00,00,00),B(table1 ,77),I(23,00,00,00),B(table1 ,59),I(1f,04,23,00),B(table1 ,60),I(1f,05,23,00),B(table1 ,61),I(86,24,00,00),B(boot1 ,24),I(3c,08,24,00),B(table1 ,14),I(1c,24,00,00),B(mop_gf ,12),I(3c,02,2a,24),B(table1 ,6),I(26,00,00,00),I(00,00,00,03),I(02,83,24,00),B(mop_class ,20),I(24,00,00,00),B(boot1 ,38),I(3c,02,24,00),B(boot1 ,24),I(3c,00,24,00),B(table1 ,6),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,11),I(3c,02,1f,04),I(1f,04,23,00),B(table1 ,78),I(23,00,00,00),B(table1 ,39),I(3b,01,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(table1 ,6),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(table1 ,6),I(26,00,00,00),I(00,00,00,03),I(02,83,24,00),B(table1 ,14),I(24,00,00,00),B(boot1 ,38),I(3c,02,24,00),B(boot1 ,24),I(3c,00,24,00),B(table1 ,6),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,11),I(3c,02,1f,04),I(1f,04,23,00),B(table1 ,78),I(23,00,00,00),B(table1 ,38),I(3b,01,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(table1 ,6),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(table1 ,6),I(2a,24,00,00),B(table1 ,14),I(2a,24,00,00),B(boot1 ,40),I(24,00,00,00),B(boot1 ,40),I(3c,01,24,00),B(table1 ,11),I(23,00,00,00),B(table1 ,79),I(23,00,00,00),B(table1 ,37),I(3b,02,1d,3c),I(02,2a,24,00),B(boot1 ,40),I(24,00,00,00),B(boot1 ,40),I(3c,01,24,00),B(table1 ,8),I(23,00,00,00),B(table1 ,80),I(23,00,00,00),B(table1 ,36),I(3b,02,1d,3c),I(02,2a,24,00),B(table1 ,13),I(26,00,00,00),I(00,00,00,03),I(02,83,24,00),B(mop_class ,20),I(24,00,00,00),B(boot1 ,38),I(3c,02,24,00),B(boot1 ,24),I(3c,00,24,00),B(table1 ,13),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,11),I(3c,02,1f,04),I(1f,04,23,00),B(table1 ,81),I(23,00,00,00),B(table1 ,35),I(3b,01,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(table1 ,13),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(table1 ,13),I(26,00,00,00),I(00,00,00,03),I(02,83,24,00),B(table1 ,9),I(24,00,00,00),B(boot1 ,38),I(3c,02,24,00),B(boot1 ,24),I(3c,00,24,00),B(table1 ,13),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,11),I(3c,02,1f,04),I(1f,04,23,00),B(table1 ,81),I(23,00,00,00),B(table1 ,34),I(3b,01,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(table1 ,13),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(table1 ,13),I(2a,24,00,00),B(table1 ,9),I(2a,24,00,00),B(mop_gf ,12),I(26,00,00,00),I(00,00,00,03),I(02,84,24,00),B(table1 ,4),I(86,24,00,00),B(boot1 ,38),I(3c,03,24,00),B(boot1 ,24),I(3c,00,24,00),B(mop_gf ,12),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,11),I(3c,02,1f,04),I(1f,04,23,00),B(table1 ,82),I(23,00,00,00),B(table1 ,33),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(mop_gf ,12),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(table1 ,10),I(2a,24,00,00),B(table1 ,10),I(26,00,00,00),I(00,00,00,03),I(02,83,24,00),B(table1 ,4),I(24,00,00,00),B(boot1 ,38),I(3c,02,24,00),B(boot1 ,24),I(3c,00,24,00),B(table1 ,10),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,11),I(3c,02,1f,04),I(1f,04,23,00),B(table1 ,83),I(23,00,00,00),B(table1 ,28),I(3b,01,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(table1 ,10),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(collect ,20),I(26,00,00,00),I(00,00,00,03),I(02,83,24,00),B(table1 ,4),I(24,00,00,00),B(boot1 ,38),I(3c,02,24,00),B(boot1 ,24),I(3c,00,24,00),B(collect ,20),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,11),I(3c,02,1f,04),I(1f,04,23,00),B(table1 ,84),I(23,00,00,00),B(table1 ,27),I(3b,01,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(collect ,20),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(collect ,9),I(26,00,00,00),I(00,00,00,03),I(02,83,24,00),B(table1 ,4),I(24,00,00,00),B(boot1 ,38),I(3c,02,24,00),B(boot1 ,24),I(3c,00,24,00),B(collect ,9),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,11),I(3c,02,1f,04),I(1f,04,23,00),B(table1 ,85),I(23,00,00,00),B(table1 ,26),I(3b,01,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(collect ,9),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(table1 ,16),I(2a,24,00,00),B(table1 ,16),I(26,00,00,00),I(00,00,00,03),I(02,83,24,00),B(table1 ,4),I(24,00,00,00),B(boot1 ,38),I(3c,02,24,00),B(boot1 ,24),I(3c,00,24,00),B(table1 ,16),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,11),I(3c,02,1f,04),I(1f,04,23,00),B(table1 ,86),I(23,00,00,00),B(table1 ,25),I(3b,01,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(table1 ,16),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(table1 ,2),I(2a,24,00,00),B(table1 ,2),I(26,00,00,00),I(00,00,00,03),I(02,83,24,00),B(table1 ,4),I(24,00,00,00),B(boot1 ,38),I(3c,02,24,00),B(boot1 ,24),I(3c,00,24,00),B(table1 ,2),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,11),I(3c,02,1f,04),I(1f,04,23,00),B(table1 ,87),I(23,00,00,00),B(table1 ,23),I(3b,01,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(table1 ,2),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(table1 ,2),I(26,00,00,00),I(00,00,00,03),I(02,83,24,00),B(table1 ,14),I(24,00,00,00),B(boot1 ,38),I(3c,02,24,00),B(boot1 ,24),I(3c,00,24,00),B(table1 ,2),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,11),I(3c,02,1f,04),I(1f,04,23,00),B(table1 ,87),I(23,00,00,00),B(table1 ,20),I(3b,01,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(table1 ,2),I(1c,24,00,00),B(mop_meth ,5),I(3d,02,7b,45),I(7b,00,00,00)};

  /* Byte-vector with size: 3 is_init: 0 index: 89 binding: table-size */
  static const void *G007597[] = {I(aa,83,24,00),B(table1 ,4),I(08,45,00,00)};

  /* Byte-vector with size: 3 is_init: 0 index: 90 binding: table-comparator */
  static const void *G007599[] = {I(aa,83,24,00),B(table1 ,9),I(08,45,00,00)};

  /* Byte-vector with size: 3 is_init: 0 index: 91 binding: table-hash-function */
  static const void *G007601[] = {I(aa,82,24,00),B(table1 ,9),I(08,45,00,00)};

  /* Byte-vector with size: 3 is_init: 0 index: 92 binding: table-threshold */
  static const void *G007603[] = {I(aa,82,24,00),B(table1 ,4),I(08,45,00,00)};

  /* Byte-vector with size: 5 is_init: 0 index: 93 binding: table-entries */
  static const void *G007605[] = {I(aa,26,00,00),I(00,00,00,03),I(24,00,00,00),B(table1 ,4),I(08,45,00,00)};

  /* Byte-vector with size: 3 is_init: 0 index: 94 binding: table-fill-value */
  static const void *G007607[] = {I(aa,84,24,00),B(table1 ,4),I(08,45,00,00)};

  /* Byte-vector with size: 109 is_init: 1 index: 0 binding: initialize-table1 */
  static const void *G007609[] = {I(87,25,00,00),B(table1 ,1),I(24,00,00,00),B(vector ,1),I(3e,0b,24,00),B(vector ,0),I(3c,00,21,01),I(24,00,00,00),B(string ,1),I(3e,0b,24,00),B(string ,0),I(3c,00,21,01),I(24,00,00,00),B(fpi ,1),I(3e,0b,24,00),B(fpi ,0),I(3c,00,21,01),I(24,00,00,00),B(list ,1),I(3e,0b,24,00),B(list ,0),I(3c,00,21,01),I(24,00,00,00),B(compare ,1),I(3e,0b,24,00),B(compare ,0),I(3c,00,21,01),I(24,00,00,00),B(collect ,1),I(3e,0b,24,00),B(collect ,0),I(3c,00,21,01),I(24,00,00,00),B(copy ,1),I(3e,0b,24,00),B(copy ,0),I(3c,00,21,01),I(24,00,00,00),B(convert ,1),I(3e,0b,24,00),B(convert ,0),I(3c,00,21,01),I(24,00,00,00),B(telos ,1),I(3e,0b,24,00),B(telos ,0),I(3c,00,21,01),I(23,00,00,00),B(table1 ,95),I(23,00,00,00),B(table1 ,94),I(3b,01,25,00),B(table1 ,17),I(86,25,00,00),B(table1 ,16),I(23,00,00,00),B(table1 ,96),I(23,00,00,00),B(table1 ,93),I(3b,01,25,00),B(table1 ,15),I(86,25,00,00),B(table1 ,14),I(86,25,00,00),B(table1 ,13),I(23,00,00,00),B(table1 ,97),I(23,00,00,00),B(table1 ,92),I(3b,01,25,00),B(table1 ,12),I(23,00,00,00),B(table1 ,98),I(23,00,00,00),B(table1 ,91),I(3b,01,25,00),B(table1 ,11),I(86,25,00,00),B(table1 ,10),I(86,25,00,00),B(table1 ,9),I(23,00,00,00),B(table1 ,99),I(23,00,00,00),B(table1 ,90),I(3b,01,25,00),B(table1 ,8),I(86,25,00,00),B(table1 ,7),I(86,25,00,00),B(table1 ,6),I(23,00,00,00),B(table1 ,100),I(23,00,00,00),B(table1 ,89),I(3b,01,25,00),B(table1 ,5),I(86,25,00,00),B(table1 ,4),I(86,25,00,00),B(table1 ,3),I(86,25,00,00),B(table1 ,2),I(23,00,00,00),B(table1 ,101),I(23,00,00,00),B(table1 ,88),I(3b,00,3d,00),I(00,ac,00,00)};


  /* Initializations */
  object_class(str_7501) = eul_static_string_class;
  eul_allocate_bytevector( G007500,G007499);
  eul_allocate_bytevector( G007503,G007502);
  eul_intern_symbol(sym_7506,"anonymous");
  eul_allocate_bytevector( G007505,G007504);
  eul_allocate_bytevector( G007508,G007507);
  eul_allocate_bytevector( G007510,G007509);
  eul_allocate_bytevector( G007512,G007511);
  eul_allocate_bytevector( G007514,G007513);
  eul_allocate_bytevector( G007516,G007515);
  eul_intern_keyword(key_7519,"comparator");
  eul_intern_keyword(key_7520,"hash-function");
  object_class(cons_7522) = eul_static_cons_class;
  eul_car(cons_7522) = key_7520;
  eul_cdr(cons_7522) = eul_nil;
  object_class(cons_7521) = eul_static_cons_class;
  eul_car(cons_7521) = key_7519;
  object_class(str_7523) = eul_static_string_class;
  eul_allocate_bytevector( G007518,G007517);
  eul_allocate_bytevector( G007525,G007524);
  eul_allocate_bytevector( G007527,G007526);
  eul_allocate_bytevector( G007529,G007528);
  eul_allocate_bytevector( G007531,G007530);
  eul_allocate_bytevector( G007533,G007532);
  eul_allocate_bytevector( G007535,G007534);
  eul_allocate_bytevector( G007537,G007536);
  eul_allocate_bytevector( G007539,G007538);
  eul_allocate_bytevector( G007541,G007540);
  eul_allocate_bytevector( G007543,G007542);
  eul_allocate_bytevector( G007545,G007544);
  eul_allocate_bytevector( G007547,G007546);
  eul_allocate_bytevector( G007549,G007548);
  eul_allocate_bytevector( G007551,G007550);
  eul_allocate_bytevector( G007553,G007552);
  eul_allocate_bytevector( G007555,G007554);
  eul_intern_keyword(key_7558,"name");
  eul_intern_symbol(sym_7559,"entries");
  eul_intern_symbol(sym_7560,"fill-value");
  eul_intern_keyword(key_7561,"keyword");
  eul_intern_keyword(key_7562,"fill-value");
  eul_intern_symbol(sym_7563,"size");
  eul_intern_keyword(key_7564,"default");
  eul_intern_symbol(sym_7565,"threshold");
  eul_intern_symbol(sym_7566,"table");
  eul_intern_keyword(key_7567,"direct-superclasses");
  eul_intern_keyword(key_7568,"direct-slots");
  eul_intern_keyword(key_7569,"direct-keywords");
  object_class(cons_7570) = eul_static_cons_class;
  eul_car(cons_7570) = key_7562;
  eul_cdr(cons_7570) = eul_nil;
  eul_intern_symbol(sym_7571,"comparator");
  eul_intern_symbol(sym_7572,"hash-function");
  eul_intern_symbol(sym_7573,"hash-table");
  object_class(cons_7575) = eul_static_cons_class;
  eul_car(cons_7575) = key_7519;
  eul_cdr(cons_7575) = eul_nil;
  object_class(cons_7574) = eul_static_cons_class;
  eul_car(cons_7574) = key_7520;
  eul_intern_symbol(sym_7576,"table?");
  eul_intern_symbol(sym_7577,"simple-hash-table?");
  eul_intern_symbol(sym_7578,"hash-table?");
  eul_intern_symbol(sym_7579,"clear-table");
  eul_intern_symbol(sym_7580,"table-values");
  eul_intern_symbol(sym_7581,"table-keys");
  eul_intern_symbol(sym_7582,"(setter table-threshold)");
  eul_intern_symbol(sym_7583,"(setter table-size)");
  eul_intern_symbol(sym_7584,"(setter table-entries)");
  eul_intern_symbol(sym_7585,"(method table?)");
  eul_intern_symbol(sym_7586,"simple-hash-table");
  eul_intern_symbol(sym_7587,"(method simple-hash-table?)");
  eul_intern_symbol(sym_7588,"(setter table-hash-function)");
  eul_intern_symbol(sym_7589,"(setter table-comparator)");
  eul_intern_symbol(sym_7590,"(method hash-table?)");
  eul_intern_symbol(sym_7591,"(method initialize)");
  eul_intern_symbol(sym_7592,"(method clear-table)");
  eul_intern_symbol(sym_7593,"(method reset)");
  eul_intern_symbol(sym_7594,"(method size)");
  eul_intern_symbol(sym_7595,"(method table-values)");
  eul_intern_symbol(sym_7596,"(method table-keys)");
  eul_allocate_bytevector( G007557,G007556);
  eul_allocate_bytevector( G007598,G007597);
  eul_allocate_bytevector( G007600,G007599);
  eul_allocate_bytevector( G007602,G007601);
  eul_allocate_bytevector( G007604,G007603);
  eul_allocate_bytevector( G007606,G007605);
  eul_allocate_bytevector( G007608,G007607);
  eul_intern_symbol(sym_7611,"table-fill-value");
  eul_intern_symbol(sym_7612,"table-entries");
  eul_intern_symbol(sym_7613,"table-threshold");
  eul_intern_symbol(sym_7614,"table-hash-function");
  eul_intern_symbol(sym_7615,"table-comparator");
  eul_intern_symbol(sym_7616,"table-size");
  eul_intern_symbol(sym_7617,"top-level");
  eul_allocate_bytevector( G007610,G007609);

  /* Set local bindings */
  {
    int i;
    for (i = 2; i < 18; i++)
      table1_bindings[i] = eul_nil;
  }

  table1_bindings[ 18] = (LispRef) (LispRef (*) (Stack *, LispRef *, LispRef *)) ff_stub_eul_hash_object7498;
  table1_bindings[ 19] = str_7501;
  table1_bindings[ 20] = G007500;
  table1_bindings[ 21] = G007503;
  table1_bindings[ 22] = sym_7506;
  table1_bindings[ 23] = G007505;
  table1_bindings[ 24] = G007508;
  table1_bindings[ 25] = G007510;
  table1_bindings[ 26] = G007512;
  table1_bindings[ 27] = G007514;
  table1_bindings[ 28] = G007516;
  table1_bindings[ 29] = key_7519;
  table1_bindings[ 30] = key_7520;
  table1_bindings[ 31] = cons_7521;
  table1_bindings[ 32] = str_7523;
  table1_bindings[ 33] = G007518;
  table1_bindings[ 34] = G007525;
  table1_bindings[ 35] = G007527;
  table1_bindings[ 36] = G007529;
  table1_bindings[ 37] = G007531;
  table1_bindings[ 38] = G007533;
  table1_bindings[ 39] = G007535;
  table1_bindings[ 40] = G007537;
  table1_bindings[ 41] = G007539;
  table1_bindings[ 42] = G007541;
  table1_bindings[ 43] = G007543;
  table1_bindings[ 44] = G007545;
  table1_bindings[ 45] = G007547;
  table1_bindings[ 46] = G007549;
  table1_bindings[ 47] = G007551;
  table1_bindings[ 48] = G007553;
  table1_bindings[ 49] = G007555;
  table1_bindings[ 50] = key_7558;
  table1_bindings[ 51] = sym_7559;
  table1_bindings[ 52] = sym_7560;
  table1_bindings[ 53] = key_7561;
  table1_bindings[ 54] = key_7562;
  table1_bindings[ 55] = sym_7563;
  table1_bindings[ 56] = key_7564;
  table1_bindings[ 57] = sym_7565;
  table1_bindings[ 58] = sym_7566;
  table1_bindings[ 59] = key_7567;
  table1_bindings[ 60] = key_7568;
  table1_bindings[ 61] = key_7569;
  table1_bindings[ 62] = cons_7570;
  table1_bindings[ 63] = sym_7571;
  table1_bindings[ 64] = sym_7572;
  table1_bindings[ 65] = sym_7573;
  table1_bindings[ 66] = cons_7574;
  table1_bindings[ 67] = sym_7576;
  table1_bindings[ 68] = sym_7577;
  table1_bindings[ 69] = sym_7578;
  table1_bindings[ 70] = sym_7579;
  table1_bindings[ 71] = sym_7580;
  table1_bindings[ 72] = sym_7581;
  table1_bindings[ 73] = sym_7582;
  table1_bindings[ 74] = sym_7583;
  table1_bindings[ 75] = sym_7584;
  table1_bindings[ 76] = sym_7585;
  table1_bindings[ 77] = sym_7586;
  table1_bindings[ 78] = sym_7587;
  table1_bindings[ 79] = sym_7588;
  table1_bindings[ 80] = sym_7589;
  table1_bindings[ 81] = sym_7590;
  table1_bindings[ 82] = sym_7591;
  table1_bindings[ 83] = sym_7592;
  table1_bindings[ 84] = sym_7593;
  table1_bindings[ 85] = sym_7594;
  table1_bindings[ 86] = sym_7595;
  table1_bindings[ 87] = sym_7596;
  table1_bindings[ 88] = G007557;
  table1_bindings[ 89] = G007598;
  table1_bindings[ 90] = G007600;
  table1_bindings[ 91] = G007602;
  table1_bindings[ 92] = G007604;
  table1_bindings[ 93] = G007606;
  table1_bindings[ 94] = G007608;
  table1_bindings[ 1] = eul_nil;
  table1_bindings[ 95] = sym_7611;
  table1_bindings[ 96] = sym_7612;
  table1_bindings[ 97] = sym_7613;
  table1_bindings[ 98] = sym_7614;
  table1_bindings[ 99] = sym_7615;
  table1_bindings[ 100] = sym_7616;
  table1_bindings[ 101] = sym_7617;
  eul_allocate_lambda( table1_bindings[0], "initialize-table1", 0, G007610);

  }
}


/* eof */
