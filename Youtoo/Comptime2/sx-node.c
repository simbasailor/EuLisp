/** ----------------------------------------------------------------------- **
 **                 Generated by EuLisp System 'youtoo'
 ** ----------------------------------------------------------------------- **
 **  Description: C source file of EuLisp module sx-node
 **  Copyright: See file sx-node.em
 ** ----------------------------------------------------------------------- **/

#include "eulisp.h"


/* Imported modules */
extern void initialize_module_i_all();
extern void initialize_module_i_ffi();
extern void initialize_module_sx_obj();
extern void initialize_module_p_env();
extern LispRef i_all_bindings[];
extern LispRef i_ffi_bindings[];
extern LispRef mop_defcl_bindings[];
extern LispRef number_bindings[];
extern LispRef sx_obj2_bindings[];
extern LispRef mop_inspect_bindings[];
extern LispRef thread_bindings[];
extern LispRef list_bindings[];
extern LispRef i_notify_bindings[];
extern LispRef p_env_bindings[];
extern LispRef aux_table_bindings[];
extern LispRef dynamic_bindings[];
extern LispRef mop_meth_bindings[];
extern LispRef boot_bindings[];
extern LispRef boot1_bindings[];
extern LispRef mop_class_bindings[];
extern LispRef i_param_bindings[];
extern LispRef sx_obj_bindings[];
extern LispRef mop_gf_bindings[];
extern LispRef sx_obj1_bindings[];

/* Module bindings with size 124 */
LispRef sx_node_bindings[124];

/* Foreign functions */

/* Initialize module only once */
static int is_initialized = 0;

/* Initialize module sx-node */
void initialize_module_sx_node()
{
  if (is_initialized) return;
  initialize_module_i_all();
  initialize_module_i_ffi();
  initialize_module_sx_obj();
  initialize_module_p_env();
  eul_fast_table_set(eul_modules,"sx_node",(LispRef) sx_node_bindings);
  is_initialized = 1;
  {
  /* Declarations */
  LispRef sym_3404, sym_3403, sym_3402, sym_3401, sym_3400, sym_3399, sym_3398, sym_3397, sym_3396, sym_3395, sym_3394, sym_3393, sym_3392, sym_3391, sym_3390, sym_3389, sym_3388, sym_3387, sym_3386, sym_3385, sym_3384, sym_3383, sym_3382, sym_3381, sym_3380, G003379, G003377, G003375, G003373, G003371, G003369, G003367, G003365, G003363, G003361, G003359, G003357, G003353, sym_3351, G003350, G003348, key_3346, key_3345, G003344, key_3342, G003341, G003339, sym_3337, G003336, sym_3334, sym_3333, sym_3332, sym_3331, sym_3330, G003329, key_3327, key_3326, key_3325, key_3324, sym_3323, G003322, G003320, G003318, sym_3316, G003315, sym_3313, sym_3312, sym_3311, G003309, key_3307, key_3306, key_3305, key_3304, key_3303, G003302, sym_3300, G003299, sym_3297, sym_3296, sym_3295, sym_3294, sym_3293, G003292, G003290, G003288, sym_3286, G003285, key_3283, key_3282, key_3281, key_3280, key_3279, key_3278, key_3277, G003276;

  /* Code vector and literal definitions */
  /* Byte-vector with size: 44 is_init: 0 index: 35 binding: (method-clone-node) */
  static const void *G003275[] = {I(aa,1b,04,1c),I(26,00,00,00),I(00,00,00,06),I(24,00,00,00),B(sx_obj1 ,42),I(08,1d,26,00),I(00,00,00,05),I(24,00,00,00),B(sx_obj1 ,42),I(08,1f,03,26),I(00,00,00,04),I(24,00,00,00),B(sx_obj1 ,42),I(08,1f,04,26),I(00,00,00,03),I(24,00,00,00),B(sx_obj1 ,42),I(08,1f,05,84),I(24,00,00,00),B(sx_obj1 ,42),I(08,1f,06,83),I(24,00,00,00),B(sx_obj1 ,42),I(08,1f,07,82),I(24,00,00,00),B(sx_obj1 ,42),I(08,1f,07,23),B(sx_node ,28),I(1f,08,23,00),B(sx_node ,29),I(1f,09,23,00),B(sx_node ,30),I(1f,0a,23,00),B(sx_node ,31),I(1f,0b,23,00),B(sx_node ,32),I(1f,0c,23,00),B(sx_node ,33),I(1f,0d,23,00),B(sx_node ,34),I(1f,0e,24,00),B(mop_gf ,2),I(3d,0f,09,45),I(09,00,00,00)};

  /* Byte-vector with size: 19 is_init: 0 index: 37 binding: (method-get-named-encl-lambda) */
  static const void *G003284[] = {I(aa,1b,34,00),I(00,00,00,46),I(1b,26,00,00),I(00,00,00,07),I(24,00,00,00),B(sx_obj ,17),I(08,23,00,00),B(sx_node ,36),I(50,1b,34,00),I(00,00,00,1e),I(1c,82,24,00),B(sx_obj1 ,3),I(08,24,00,00),B(i_param ,39),I(3d,01,02,32),I(00,00,00,06),I(1c,22,01,32),I(00,00,00,06),I(86,45,01,00)};

  /* Byte-vector with size: 5 is_init: 0 index: 38 binding: (method-binding-origin-module-name) */
  static const void *G003287[] = {I(aa,26,00,00),I(00,00,00,05),I(24,00,00,00),B(sx_obj1 ,42),I(08,45,00,00)};

  /* Byte-vector with size: 9 is_init: 0 index: 39 binding: (method-binding-origin-module-name) */
  static const void *G003289[] = {I(aa,26,00,00),I(00,00,00,05),I(24,00,00,00),B(sx_obj1 ,42),I(08,26,00,00),I(00,00,00,15),I(24,00,00,00),B(sx_obj1 ,59),I(08,45,00,00)};

  /* Byte-vector with size: 154 is_init: 0 index: 45 binding: top-level */
  static const void *G003291[] = {I(a9,83,24,00),B(mop_class ,20),I(24,00,00,00),B(boot1 ,39),I(3c,02,24,00),B(boot1 ,25),I(3c,00,24,00),B(boot1 ,25),I(3c,00,23,00),B(sx_node ,40),I(1f,03,24,00),B(mop_class ,15),I(24,00,00,00),B(mop_class ,55),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,1b,89),B(sx_node ,27),I(2a,83,24,00),B(sx_obj1 ,27),I(24,00,00,00),B(boot1 ,39),I(3c,02,24,00),B(boot1 ,25),I(3c,00,24,00),B(boot1 ,25),I(3c,00,23,00),B(sx_node ,41),I(1f,03,24,00),B(mop_class ,15),I(24,00,00,00),B(mop_class ,55),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,1b,89),B(sx_node ,21),I(2a,24,00,00),B(sx_node ,27),I(2a,24,00,00),B(sx_node ,27),I(26,00,00,00),I(00,00,00,03),I(02,83,24,00),B(sx_obj1 ,42),I(24,00,00,00),B(boot1 ,39),I(3c,02,24,00),B(boot1 ,25),I(3c,00,24,00),B(sx_node ,27),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,7),I(3c,02,1f,04),I(1f,04,23,00),B(sx_node ,42),I(23,00,00,00),B(sx_node ,39),I(3b,01,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(sx_node ,27),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(sx_node ,27),I(26,00,00,00),I(00,00,00,03),I(02,83,24,00),B(sx_obj1 ,72),I(24,00,00,00),B(boot1 ,39),I(3c,02,24,00),B(boot1 ,25),I(3c,00,24,00),B(sx_node ,27),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,7),I(3c,02,1f,04),I(1f,04,23,00),B(sx_node ,42),I(23,00,00,00),B(sx_node ,38),I(3b,01,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(sx_node ,27),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(i_param ,39),I(26,00,00,00),I(00,00,00,03),I(02,83,86,24),B(boot1 ,39),I(3c,02,24,00),B(boot1 ,25),I(3c,00,24,00),B(i_param ,39),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,7),I(3c,02,1f,04),I(1f,04,23,00),B(sx_node ,43),I(23,00,00,00),B(sx_node ,37),I(3b,01,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(i_param ,39),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(sx_node ,21),I(2a,24,00,00),B(sx_node ,21),I(26,00,00,00),I(00,00,00,03),I(02,83,24,00),B(sx_obj1 ,42),I(24,00,00,00),B(boot1 ,39),I(3c,02,24,00),B(boot1 ,25),I(3c,00,24,00),B(sx_node ,21),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,7),I(3c,02,1f,04),I(1f,04,23,00),B(sx_node ,44),I(23,00,00,00),B(sx_node ,35),I(3b,01,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(sx_node ,21),I(1c,24,00,00),B(mop_meth ,5),I(3d,02,20,45),I(20,00,00,00)};

  /* Byte-vector with size: 19 is_init: 0 index: 47 binding: register-delegated-vars */
  static const void *G003298[] = {I(aa,23,00,00),B(sx_node ,46),I(24,00,00,00),B(dynamic ,3),I(3c,01,23,00),B(sx_node ,46),I(24,00,00,00),B(dynamic ,3),I(3c,01,1b,83),I(24,00,00,00),B(sx_obj ,13),I(08,1b,1f,04),I(24,00,00,00),B(boot ,7),I(3c,02,1f,03),I(1c,1c,83,1d),I(24,00,00,00),B(sx_obj ,13),I(09,45,07,00)};

  /* Byte-vector with size: 34 is_init: 0 index: 53 binding: make-module */
  static const void *G003301[] = {I(aa,24,00,00),B(aux_table ,4),I(3c,00,24,00),B(aux_table ,4),I(3c,00,24,00),B(aux_table ,4),I(3c,00,24,00),B(aux_table ,4),I(3c,00,24,00),B(sx_obj1 ,59),I(23,00,00,00),B(sx_node ,48),I(1f,06,23,00),B(sx_node ,49),I(1f,07,23,00),B(sx_node ,50),I(1f,08,23,00),B(sx_node ,51),I(1f,09,23,00),B(sx_node ,52),I(1f,0a,24,00),B(mop_gf ,2),I(3c,0b,1f,05),I(1c,24,00,00),B(p_env ,16),I(3c,02,2a,1b),I(24,00,00,00),B(i_param ,36),I(1c,26,00,00),I(00,00,00,14),I(1d,24,00,00),B(sx_obj1 ,59),I(09,22,02,2a),I(1b,45,06,00)};

  eul_allocate_static_string(str_3310, "no lexical binding ~a available", 31);
  /* Byte-vector with size: 67 is_init: 0 index: 58 binding: get-imported-inlined-setter-binding */
  static const void *G003308[] = {I(ab,1c,73,1b),I(24,00,00,00),B(p_env ,7),I(3c,01,1b,34),I(00,00,00,0d),I(1b,32,00,00),I(00,00,00,3d),I(1c,1f,03,24),B(p_env ,18),I(3c,02,1b,34),I(00,00,00,0d),I(1b,32,00,00),I(00,00,00,23),I(1d,24,00,00),B(sx_node ,5),I(3c,01,1b,23),B(sx_node ,54),I(1f,05,24,00),B(i_notify ,6),I(3c,03,22,01),I(22,01,1b,23),B(sx_node ,55),I(24,00,00,00),B(sx_node ,20),I(3c,02,1b,34),I(00,00,00,a5),I(1c,26,00,00),I(00,00,00,05),I(24,00,00,00),B(sx_obj1 ,42),I(08,23,00,00),B(sx_node ,56),I(1d,0f,1b,86),I(0f,24,00,00),B(sx_obj1 ,72),I(23,00,00,00),B(sx_node ,28),I(1f,0a,23,00),B(sx_node ,29),I(1f,06,23,00),B(sx_node ,30),I(87,23,00,00),B(sx_node ,32),I(1f,10,23,00),B(sx_node ,31),I(87,23,00,00),B(sx_node ,34),I(1f,0c,24,00),B(mop_gf ,2),I(3c,0d,23,00),B(sx_node ,57),I(24,00,00,00),B(dynamic ,3),I(3c,01,1b,26),I(00,00,00,0a),I(24,00,00,00),B(sx_obj1 ,59),I(08,1d,1c,0f),I(1d,1c,1c,26),I(00,00,00,0a),I(1d,24,00,00),B(sx_obj1 ,59),I(09,22,02,2a),I(1f,03,22,07),I(32,00,00,00),I(00,00,00,09),I(86,45,06,00)};

  /* Byte-vector with size: 23 is_init: 0 index: 60 binding: make-dummy-binding */
  static const void *G003314[] = {I(a8,1b,34,00),I(00,00,00,0e),I(1b,10,32,00),I(00,00,00,07),I(86,1b,34,00),I(00,00,00,0e),I(1b,32,00,00),I(00,00,00,0f),I(23,00,00,00),B(sx_node ,59),I(23,00,00,00),B(sx_node ,57),I(24,00,00,00),B(dynamic ,3),I(3c,01,24,00),B(sx_obj1 ,42),I(23,00,00,00),B(sx_node ,28),I(1f,03,23,00),B(sx_node ,29),I(1f,04,24,00),B(mop_gf ,2),I(3d,05,04,00)};

  /* Byte-vector with size: 11 is_init: 0 index: 61 binding: make-defined-fun */
  static const void *G003317[] = {I(43,03,24,00),B(sx_obj ,13),I(1f,03,1f,03),I(1f,03,24,00),B(sx_node ,8),I(3c,04,1b,24),B(sx_node ,22),I(3c,01,24,00),B(p_env ,5),I(3c,01,2a,1b),I(45,04,00,00)};

  /* Byte-vector with size: 19 is_init: 0 index: 62 binding: compute-arity */
  static const void *G003319[] = {I(aa,1b,24,00),B(list ,25),I(3c,01,1b,34),I(00,00,00,15),I(1c,24,00,00),B(boot ,18),I(3d,01,02,32),I(00,00,00,2d),I(1c,7a,12,1b),I(34,00,00,00),I(00,00,00,10),I(85,32,00,00),I(00,00,00,19),I(1d,24,00,00),B(boot ,18),I(3c,01,1b,83),I(14,82,1c,15),I(22,02,22,01),I(45,02,00,00)};

  /* Byte-vector with size: 99 is_init: 0 index: 68 binding: make-fun */
  static const void *G003321[] = {I(43,fb,1f,03),I(7a,1b,34,00),I(00,00,00,1a),I(1f,04,24,00),B(boot ,18),I(3c,01,83,19),I(32,00,00,00),I(00,00,00,09),I(86,1b,34,00),I(00,00,00,0e),I(1f,05,10,32),I(00,00,00,07),I(1f,05,1f,05),I(7c,1b,34,00),I(00,00,00,16),I(1f,06,24,00),B(boot1 ,25),I(3c,01,32,00),I(00,00,00,08),I(1f,06,1f,07),I(24,00,00,00),B(sx_node ,7),I(3c,01,1f,07),I(24,00,00,00),B(sx_obj1 ,70),I(3c,01,1b,34),I(00,00,00,0d),I(1b,32,00,00),I(00,00,00,12),I(23,00,00,00),B(sx_node ,63),I(1f,09,0f,1f),I(08,34,00,00),I(00,00,00,0f),I(1f,08,10,32),I(00,00,00,06),I(86,1f,0d,23),B(sx_node ,48),I(1f,08,23,00),B(sx_node ,64),I(1f,08,23,00),B(sx_node ,65),I(1f,09,23,00),B(sx_node ,66),I(1f,09,23,00),B(sx_node ,67),I(1f,0a,24,00),B(mop_gf ,2),I(3c,0b,1b,24),B(sx_obj ,44),I(3c,01,1b,34),I(00,00,00,b9),I(1f,0e,23,00),B(sx_node ,36),I(50,1b,34,00),I(00,00,00,0e),I(1b,32,00,00),I(00,00,00,09),I(1f,0a,1b,34),I(00,00,00,4d),I(23,00,00,00),B(sx_node ,57),I(24,00,00,00),B(dynamic ,3),I(3c,01,1b,26),I(00,00,00,08),I(24,00,00,00),B(sx_obj1 ,59),I(08,1b,1f,06),I(24,00,00,00),B(thread ,28),I(3c,02,1d,1c),I(1c,26,00,00),I(00,00,00,08),I(1d,24,00,00),B(sx_obj1 ,59),I(09,22,05,32),I(00,00,00,48),I(23,00,00,00),B(sx_node ,57),I(24,00,00,00),B(dynamic ,3),I(3c,01,1b,26),I(00,00,00,09),I(24,00,00,00),B(sx_obj1 ,59),I(08,1b,1f,06),I(24,00,00,00),B(thread ,28),I(3c,02,1d,1c),I(1c,26,00,00),I(00,00,00,09),I(1d,24,00,00),B(sx_obj1 ,59),I(09,22,05,22),I(02,32,00,00),I(00,00,00,08),I(86,2a,1c,45),I(10,00,00,00)};

  /* Byte-vector with size: 68 is_init: 0 index: 74 binding: true-local-binding? */
  static const void *G003328[] = {I(aa,1b,24,00),B(sx_obj1 ,14),I(3c,01,1b,34),I(00,00,01,01),I(1c,84,24,00),B(sx_obj1 ,42),I(08,1d,24,00),B(sx_obj1 ,10),I(3c,01,1b,34),I(00,00,00,0d),I(1b,32,00,00),I(00,00,00,db),I(1f,03,26,00),I(00,00,00,03),I(24,00,00,00),B(sx_obj1 ,42),I(08,1b,34,00),I(00,00,00,0e),I(1b,32,00,00),I(00,00,00,b9),I(1d,24,00,00),B(sx_obj ,7),I(3c,01,1b,34),I(00,00,00,0d),I(1b,32,00,00),I(00,00,00,9f),I(1f,05,23,00),B(sx_node ,69),I(24,00,00,00),B(sx_node ,20),I(3c,02,1b,34),I(00,00,00,0d),I(1b,32,00,00),I(00,00,00,7d),I(1f,06,23,00),B(sx_node ,70),I(24,00,00,00),B(sx_node ,20),I(3c,02,1b,34),I(00,00,00,0d),I(1b,32,00,00),I(00,00,00,5b),I(1f,07,23,00),B(sx_node ,71),I(24,00,00,00),B(sx_node ,20),I(3c,02,23,00),B(sx_node ,72),I(50,1b,34,00),I(00,00,00,1e),I(1f,08,23,00),B(sx_node ,73),I(24,00,00,00),B(sx_node ,20),I(3c,02,32,00),I(00,00,00,07),I(86,1b,34,00),I(00,00,00,0e),I(1b,32,00,00),I(00,00,00,11),I(1f,07,24,00),B(mop_inspect ,8),I(3c,01,22,02),I(22,01,22,01),I(22,01,22,01),I(12,22,02,32),I(00,00,00,06),I(86,45,02,00)};

  /* Byte-vector with size: 23 is_init: 0 index: 76 binding: make-defined-opencoded-fun */
  static const void *G003335[] = {I(43,03,86,1f),I(03,24,00,00),B(sx_node ,22),I(3c,02,1d,24),B(sx_node ,7),I(3c,01,1c,24),B(p_env ,5),I(3c,01,2a,23),B(sx_node ,71),I(23,00,00,00),B(sx_node ,69),I(0f,23,00,00),B(sx_node ,75),I(1d,0f,23,00),B(sx_node ,69),I(1f,05,0f,1b),I(86,0f,1d,1c),I(0f,1f,04,1c),I(0f,1f,07,1c),I(1c,82,1d,24),B(sx_obj1 ,42),I(09,22,02,2a),I(1f,07,45,0b)};

  /* Byte-vector with size: 7 is_init: 0 index: 77 binding: get-binding-spec-info */
  static const void *G003338[] = {I(ab,1b,1d,1b),I(1d,86,6a,22),I(02,1b,34,00),I(00,00,00,0e),I(1b,11,32,00),I(00,00,00,07),I(86,45,03,00)};

  /* Byte-vector with size: 9 is_init: 0 index: 79 binding: make-setq */
  static const void *G003340[] = {I(ab,24,00,00),B(sx_obj2 ,25),I(23,00,00,00),B(sx_node ,78),I(1f,03,23,00),B(sx_node ,32),I(1f,04,24,00),B(mop_gf ,2),I(3d,05,02,00)};

  /* Byte-vector with size: 18 is_init: 0 index: 82 binding: make-local-static-var */
  static const void *G003343[] = {I(43,fe,1b,34),I(00,00,00,0d),I(1b,10,32,00),I(00,00,00,07),I(86,24,00,00),B(sx_obj2 ,9),I(23,00,00,00),B(sx_node ,48),I(1f,04,23,00),B(sx_node ,80),I(1f,04,23,00),B(sx_node ,81),I(82,24,00,00),B(mop_gf ,2),I(3c,07,1b,24),B(sx_node ,15),I(3c,01,2a,1b),I(45,04,00,00)};

  /* Byte-vector with size: 12 is_init: 0 index: 83 binding: foldable-constant? */
  static const void *G003347[] = {I(aa,1b,24,00),B(number ,24),I(3c,01,1b,34),I(00,00,00,0d),I(1b,32,00,00),I(00,00,00,1b),I(1c,81,1b,34),I(00,00,00,0d),I(1b,32,00,00),I(00,00,00,09),I(1d,12,22,01),I(45,02,00,00)};

  /* Byte-vector with size: 16 is_init: 0 index: 85 binding: make-mutable-binding */
  static const void *G003349[] = {I(43,fe,1b,34),I(00,00,00,0d),I(1b,10,32,00),I(00,00,00,07),I(86,1b,34,00),I(00,00,00,0e),I(1b,32,00,00),I(00,00,00,19),I(1d,23,00,00),B(sx_node ,84),I(24,00,00,00),B(mop_defcl ,7),I(3c,02,1f,03),I(1c,86,24,00),B(sx_node ,23),I(3d,03,04,00)};

  eul_allocate_static_cons(cons_3355, NULL, NULL);
  eul_allocate_static_cons(cons_3354, eul_as_static(cons_3355), NULL);
  /* Byte-vector with size: 70 is_init: 0 index: 87 binding: make-named-const */
  static const void *G003352[] = {I(ab,24,00,00),B(sx_obj2 ,22),I(23,00,00,00),B(sx_node ,48),I(1f,03,23,00),B(sx_node ,80),I(1f,04,24,00),B(mop_gf ,2),I(3c,05,1b,24),B(sx_node ,22),I(3c,01,24,00),B(i_param ,10),I(12,1b,34,00),I(00,00,00,16),I(1f,03,24,00),B(sx_node ,14),I(3c,01,32,00),I(00,00,00,07),I(86,1b,34,00),I(00,00,00,56),I(23,00,00,00),B(sx_node ,71),I(23,00,00,00),B(sx_node ,72),I(0f,1f,05,86),I(0f,23,00,00),B(sx_node ,73),I(1c,0f,1b,86),I(0f,1f,03,1c),I(0f,1f,07,82),I(24,00,00,00),B(sx_obj1 ,42),I(08,1c,1c,24),B(boot ,7),I(3c,02,1f,09),I(1c,1c,82,1d),I(24,00,00,00),B(sx_obj1 ,42),I(09,22,09,32),I(00,00,00,6c),I(23,00,00,00),B(sx_node ,86),I(1f,03,82,24),B(sx_obj1 ,42),I(08,1c,1c,24),B(boot ,7),I(3c,02,1f,05),I(1c,1c,82,1d),I(24,00,00,00),B(sx_obj1 ,42),I(09,22,02,2a),I(23,00,00,00),B(sx_node ,57),I(24,00,00,00),B(dynamic ,3),I(3c,01,1b,26),I(00,00,00,0d),I(24,00,00,00),B(sx_obj1 ,59),I(08,1f,08,1c),I(0f,1d,1c,1c),I(26,00,00,00),I(00,00,00,0d),I(1d,24,00,00),B(sx_obj1 ,59),I(09,22,08,2a),I(1d,24,00,00),B(p_env ,5),I(3c,01,2a,1f),I(03,45,06,00)};

  /* Byte-vector with size: 29 is_init: 0 index: 88 binding: make-global-var */
  static const void *G003356[] = {I(ab,24,00,00),B(sx_obj2 ,28),I(23,00,00,00),B(sx_node ,48),I(1f,03,23,00),B(sx_node ,80),I(1f,04,23,00),B(sx_node ,81),I(82,24,00,00),B(mop_gf ,2),I(3c,07,1b,24),B(sx_node ,15),I(3c,01,24,00),B(p_env ,5),I(3c,01,2a,23),B(sx_node ,57),I(24,00,00,00),B(dynamic ,3),I(3c,01,1b,26),I(00,00,00,0c),I(24,00,00,00),B(sx_obj1 ,59),I(08,1d,1c,0f),I(1d,1c,1c,26),I(00,00,00,0c),I(1d,24,00,00),B(sx_obj1 ,59),I(09,22,02,2a),I(1f,03,45,06)};

  /* Byte-vector with size: 60 is_init: 0 index: 89 binding: make-defined-external-fun */
  static const void *G003358[] = {I(43,04,24,00),B(i_ffi ,7),I(1f,03,24,00),B(boot ,10),I(3c,02,1d,24),B(i_ffi ,3),I(3c,01,86,1f),I(06,24,00,00),B(sx_node ,22),I(3c,02,1f,05),I(24,00,00,00),B(sx_node ,7),I(3c,01,1f,04),I(34,00,00,00),I(00,00,00,10),I(1f,04,10,32),I(00,00,00,06),I(86,1b,34,00),I(00,00,00,0e),I(1b,32,00,00),I(00,00,00,0b),I(1f,08,82,02),I(1f,03,24,00),B(p_env ,5),I(3c,01,2a,23),B(sx_node ,71),I(23,00,00,00),B(sx_node ,70),I(0f,23,00,00),B(sx_node ,75),I(1f,04,0f,1d),I(86,0f,1f,07),I(1c,0f,1f,09),I(1c,0f,23,00),B(sx_node ,70),I(1c,0f,1b,86),I(0f,1f,05,1c),I(0f,1f,07,1c),I(0f,1f,0c,1c),I(1c,82,1d,24),B(sx_obj1 ,42),I(09,22,02,2a),I(23,00,00,00),B(sx_node ,57),I(24,00,00,00),B(dynamic ,3),I(3c,01,1b,26),I(00,00,00,07),I(24,00,00,00),B(sx_obj1 ,59),I(08,1b,1f,0f),I(24,00,00,00),B(thread ,28),I(3c,02,1d,1c),I(1c,26,00,00),I(00,00,00,07),I(1d,24,00,00),B(sx_obj1 ,59),I(09,22,02,2a),I(1f,0f,45,16)};

  /* Byte-vector with size: 5 is_init: 0 index: 90 binding: anonymous */
  static const void *G003360[] = {I(aa,1b,47,00),I(00,1c,83,1d),I(24,00,00,00),B(sx_obj2 ,9),I(09,45,03,00)};

  /* Byte-vector with size: 20 is_init: 0 index: 91 binding: make-let* */
  static const void *G003362[] = {I(ab,46,01,24),B(sx_obj ,2),I(23,00,00,00),B(sx_node ,36),I(1f,03,1f,03),I(24,00,00,00),B(sx_node ,8),I(3c,04,1b,48),I(00,00,23,00),B(sx_node ,36),I(23,00,00,00),B(sx_node ,90),I(3b,01,1f,03),I(24,00,00,00),B(boot ,16),I(3c,02,2a,1d),I(24,00,00,00),B(sx_node ,2),I(3c,01,2a,47),I(00,00,45,03)};

  /* Byte-vector with size: 5 is_init: 0 index: 92 binding: get-binding-info */
  static const void *G003364[] = {I(ab,1c,82,24),B(sx_obj1 ,42),I(08,24,00,00),B(sx_node ,11),I(3d,02,01,00)};

  /* Byte-vector with size: 16 is_init: 0 index: 93 binding: make-immutable-binding */
  static const void *G003366[] = {I(43,fe,1b,34),I(00,00,00,0d),I(1b,10,32,00),I(00,00,00,07),I(86,1b,34,00),I(00,00,00,0e),I(1b,32,00,00),I(00,00,00,19),I(1d,23,00,00),B(sx_node ,84),I(24,00,00,00),B(mop_defcl ,7),I(3c,02,1f,03),I(1c,87,24,00),B(sx_node ,23),I(3d,03,04,00)};

  /* Byte-vector with size: 31 is_init: 0 index: 94 binding: make-binding */
  static const void *G003368[] = {I(43,fd,23,00),B(sx_node ,57),I(24,00,00,00),B(dynamic ,3),I(3c,01,1c,34),I(00,00,00,0d),I(1c,10,32,00),I(00,00,00,07),I(86,24,00,00),B(sx_obj1 ,42),I(23,00,00,00),B(sx_node ,28),I(1f,05,23,00),B(sx_node ,29),I(1f,05,23,00),B(sx_node ,30),I(1f,06,23,00),B(sx_node ,32),I(1f,0c,24,00),B(mop_gf ,2),I(3c,09,1f,05),I(24,00,00,00),B(sx_obj1 ,70),I(3c,01,1b,34),I(00,00,00,15),I(1f,06,1d,24),B(sx_obj ,33),I(3c,02,32,00),I(00,00,00,07),I(86,2a,1c,45),I(07,00,00,00)};

  /* Byte-vector with size: 17 is_init: 0 index: 95 binding: anonymous */
  static const void *G003370[] = {I(aa,1b,34,00),I(00,00,00,3e),I(1b,10,1b,26),I(00,00,00,06),I(24,00,00,00),B(sx_obj1 ,42),I(08,1b,73,1b),I(47,00,01,50),I(1b,34,00,00),I(00,00,00,0f),I(1f,04,10,32),I(00,00,00,0e),I(1f,04,11,47),I(00,00,3d,01),I(05,22,04,32),I(00,00,00,06),I(86,45,01,00)};

  /* Byte-vector with size: 26 is_init: 0 index: 96 binding: get-inlined-setter-binding */
  static const void *G003372[] = {I(ab,46,03,1c),I(73,1b,48,00),I(01,86,1b,48),I(00,00,23,00),B(sx_node ,36),I(23,00,00,00),B(sx_node ,95),I(3b,01,48,00),I(00,1f,03,1f),I(03,24,00,00),B(sx_node ,4),I(3c,02,1b,34),I(00,00,00,0d),I(1b,32,00,00),I(00,00,00,30),I(23,00,00,00),B(sx_node ,57),I(24,00,00,00),B(dynamic ,3),I(3c,01,1b,26),I(00,00,00,0a),I(24,00,00,00),B(sx_obj1 ,59),I(08,47,00,00),I(3d,01,06,22),I(01,45,05,00)};

  /* Byte-vector with size: 30 is_init: 0 index: 97 binding: register-binding-ref */
  static const void *G003374[] = {I(aa,23,00,00),B(sx_node ,46),I(24,00,00,00),B(dynamic ,3),I(3c,01,23,00),B(sx_node ,57),I(24,00,00,00),B(dynamic ,3),I(3c,01,1c,34),I(00,00,00,25),I(1c,82,24,00),B(sx_obj ,13),I(08,1f,03,1c),I(0f,1f,03,1c),I(1c,82,1d,24),B(sx_obj ,13),I(09,22,04,32),I(00,00,00,30),I(1b,26,00,00),I(00,00,00,05),I(24,00,00,00),B(sx_obj1 ,59),I(08,1f,03,1c),I(0f,1d,1c,1c),I(26,00,00,00),I(00,00,00,05),I(1d,24,00,00),B(sx_obj1 ,59),I(09,22,04,45),I(03,00,00,00)};

  /* Byte-vector with size: 29 is_init: 0 index: 98 binding: make-inlined-setter */
  static const void *G003376[] = {I(43,03,24,00),B(sx_obj ,13),I(1f,03,1f,03),I(1f,03,24,00),B(sx_node ,8),I(3c,04,1b,24),B(sx_node ,22),I(3c,01,1c,87),I(1c,84,1d,24),B(sx_obj ,13),I(09,22,02,2a),I(23,00,00,00),B(sx_node ,57),I(24,00,00,00),B(dynamic ,3),I(3c,01,1b,26),I(00,00,00,0a),I(24,00,00,00),B(sx_obj1 ,59),I(08,1b,1f,03),I(24,00,00,00),B(thread ,28),I(3c,02,1d,1c),I(1c,26,00,00),I(00,00,00,0a),I(1d,24,00,00),B(sx_obj1 ,59),I(09,22,02,2a),I(1f,04,45,08)};

  /* Byte-vector with size: 176 is_init: 1 index: 0 binding: initialize-sx-node */
  static const void *G003378[] = {I(87,25,00,00),B(sx_node ,1),I(24,00,00,00),B(p_env ,1),I(3e,0b,24,00),B(p_env ,0),I(3c,00,21,01),I(24,00,00,00),B(sx_obj ,1),I(3e,0b,24,00),B(sx_obj ,0),I(3c,00,21,01),I(24,00,00,00),B(i_ffi ,1),I(3e,0b,24,00),B(i_ffi ,0),I(3c,00,21,01),I(24,00,00,00),B(i_all ,1),I(3e,0b,24,00),B(i_all ,0),I(3c,00,21,01),I(86,25,00,00),B(sx_node ,27),I(23,00,00,00),B(sx_node ,99),I(23,00,00,00),B(sx_node ,98),I(3b,03,25,00),B(sx_node ,26),I(23,00,00,00),B(sx_node ,100),I(23,00,00,00),B(sx_node ,97),I(3b,01,25,00),B(sx_node ,25),I(23,00,00,00),B(sx_node ,101),I(23,00,00,00),B(sx_node ,96),I(3b,02,25,00),B(sx_node ,24),I(23,00,00,00),B(sx_node ,102),I(23,00,00,00),B(sx_node ,94),I(3b,fd,25,00),B(sx_node ,23),I(23,00,00,00),B(sx_node ,103),I(23,00,00,00),B(sx_node ,93),I(3b,fe,25,00),B(sx_node ,22),I(86,25,00,00),B(sx_node ,21),I(23,00,00,00),B(sx_node ,104),I(23,00,00,00),B(sx_node ,92),I(3b,02,25,00),B(sx_node ,20),I(23,00,00,00),B(sx_node ,105),I(23,00,00,00),B(sx_node ,91),I(3b,02,25,00),B(sx_node ,19),I(23,00,00,00),B(sx_node ,106),I(23,00,00,00),B(sx_node ,89),I(3b,04,25,00),B(sx_node ,18),I(23,00,00,00),B(sx_node ,107),I(23,00,00,00),B(sx_node ,88),I(3b,02,25,00),B(sx_node ,17),I(23,00,00,00),B(sx_node ,108),I(23,00,00,00),B(sx_node ,87),I(3b,02,25,00),B(sx_node ,16),I(23,00,00,00),B(sx_node ,109),I(23,00,00,00),B(sx_node ,85),I(3b,fe,25,00),B(sx_node ,15),I(23,00,00,00),B(sx_node ,110),I(23,00,00,00),B(sx_node ,83),I(3b,01,25,00),B(sx_node ,14),I(23,00,00,00),B(sx_node ,111),I(23,00,00,00),B(sx_node ,82),I(3b,fe,25,00),B(sx_node ,13),I(23,00,00,00),B(sx_node ,112),I(23,00,00,00),B(sx_node ,79),I(3b,02,25,00),B(sx_node ,12),I(23,00,00,00),B(sx_node ,113),I(23,00,00,00),B(sx_node ,77),I(3b,02,25,00),B(sx_node ,11),I(23,00,00,00),B(sx_node ,114),I(23,00,00,00),B(sx_node ,76),I(3b,03,25,00),B(sx_node ,10),I(23,00,00,00),B(sx_node ,115),I(23,00,00,00),B(sx_node ,74),I(3b,01,25,00),B(sx_node ,9),I(23,00,00,00),B(sx_node ,116),I(23,00,00,00),B(sx_node ,68),I(3b,fb,25,00),B(sx_node ,8),I(23,00,00,00),B(sx_node ,117),I(23,00,00,00),B(sx_node ,62),I(3b,01,25,00),B(sx_node ,7),I(23,00,00,00),B(sx_node ,118),I(23,00,00,00),B(sx_node ,61),I(3b,03,25,00),B(sx_node ,6),I(23,00,00,00),B(sx_node ,119),I(23,00,00,00),B(sx_node ,60),I(3b,ff,25,00),B(sx_node ,5),I(23,00,00,00),B(sx_node ,120),I(23,00,00,00),B(sx_node ,58),I(3b,02,25,00),B(sx_node ,4),I(23,00,00,00),B(sx_node ,121),I(23,00,00,00),B(sx_node ,53),I(3b,01,25,00),B(sx_node ,3),I(23,00,00,00),B(sx_node ,122),I(23,00,00,00),B(sx_node ,47),I(3b,01,25,00),B(sx_node ,2),I(23,00,00,00),B(sx_node ,123),I(23,00,00,00),B(sx_node ,45),I(3b,00,3d,00),I(00,ac,00,00)};


  /* Initializations */
  eul_intern_keyword(key_3277,"local-name");
  eul_intern_keyword(key_3278,"module");
  eul_intern_keyword(key_3279,"immutable");
  eul_intern_keyword(key_3280,"imported");
  eul_intern_keyword(key_3281,"obj");
  eul_intern_keyword(key_3282,"local-index");
  eul_intern_keyword(key_3283,"info");
  eul_allocate_bytevector( G003276,G003275);
  eul_intern_symbol(sym_3286,"anonymous");
  eul_allocate_bytevector( G003285,G003284);
  eul_allocate_bytevector( G003288,G003287);
  eul_allocate_bytevector( G003290,G003289);
  eul_intern_symbol(sym_3293,"binding-origin-module-name");
  eul_intern_symbol(sym_3294,"clone-node");
  eul_intern_symbol(sym_3295,"(method binding-origin-module-name)");
  eul_intern_symbol(sym_3296,"(method get-named-encl-lambda)");
  eul_intern_symbol(sym_3297,"(method clone-node)");
  eul_allocate_bytevector( G003292,G003291);
  eul_intern_symbol(sym_3300,"*encl-lambda*");
  eul_allocate_bytevector( G003299,G003298);
  eul_intern_keyword(key_3303,"name");
  eul_intern_keyword(key_3304,"lexical-env");
  eul_intern_keyword(key_3305,"interactive-lexical-env");
  eul_intern_keyword(key_3306,"external-env");
  eul_intern_keyword(key_3307,"syntax-env");
  eul_allocate_bytevector( G003302,G003301);
  object_class(str_3310) = eul_static_string_class;
  eul_intern_symbol(sym_3311,"setter");
  eul_intern_symbol(sym_3312,"inline");
  eul_intern_symbol(sym_3313,"*actual-module*");
  eul_allocate_bytevector( G003309,G003308);
  eul_intern_symbol(sym_3316," unbound ");
  eul_allocate_bytevector( G003315,G003314);
  eul_allocate_bytevector( G003318,G003317);
  eul_allocate_bytevector( G003320,G003319);
  eul_intern_symbol(sym_3323,"progn");
  eul_intern_keyword(key_3324,"args");
  eul_intern_keyword(key_3325,"arity");
  eul_intern_keyword(key_3326,"body");
  eul_intern_keyword(key_3327,"has-unknown-appls");
  eul_allocate_bytevector( G003322,G003321);
  eul_intern_symbol(sym_3330,"opencoding");
  eul_intern_symbol(sym_3331,"ff");
  eul_intern_symbol(sym_3332,"class");
  eul_intern_symbol(sym_3333,"constant");
  eul_intern_symbol(sym_3334,"value");
  eul_allocate_bytevector( G003329,G003328);
  eul_intern_symbol(sym_3337,"arity");
  eul_allocate_bytevector( G003336,G003335);
  eul_allocate_bytevector( G003339,G003338);
  eul_intern_keyword(key_3342,"binding");
  eul_allocate_bytevector( G003341,G003340);
  eul_intern_keyword(key_3345,"value");
  eul_intern_keyword(key_3346,"used");
  eul_allocate_bytevector( G003344,G003343);
  eul_allocate_bytevector( G003348,G003347);
  eul_intern_symbol(sym_3351,"name");
  eul_allocate_bytevector( G003350,G003349);
  object_class(cons_3355) = eul_static_cons_class;
  eul_car(cons_3355) = sym_3332;
  eul_cdr(cons_3355) = sym_3333;
  object_class(cons_3354) = eul_static_cons_class;
  eul_cdr(cons_3354) = eul_nil;
  eul_allocate_bytevector( G003353,G003352);
  eul_allocate_bytevector( G003357,G003356);
  eul_allocate_bytevector( G003359,G003358);
  eul_allocate_bytevector( G003361,G003360);
  eul_allocate_bytevector( G003363,G003362);
  eul_allocate_bytevector( G003365,G003364);
  eul_allocate_bytevector( G003367,G003366);
  eul_allocate_bytevector( G003369,G003368);
  eul_allocate_bytevector( G003371,G003370);
  eul_allocate_bytevector( G003373,G003372);
  eul_allocate_bytevector( G003375,G003374);
  eul_allocate_bytevector( G003377,G003376);
  eul_intern_symbol(sym_3380,"make-inlined-setter");
  eul_intern_symbol(sym_3381,"register-binding-ref");
  eul_intern_symbol(sym_3382,"get-inlined-setter-binding");
  eul_intern_symbol(sym_3383,"make-binding");
  eul_intern_symbol(sym_3384,"make-immutable-binding");
  eul_intern_symbol(sym_3385,"get-binding-info");
  eul_intern_symbol(sym_3386,"make-let*");
  eul_intern_symbol(sym_3387,"make-defined-external-fun");
  eul_intern_symbol(sym_3388,"make-global-var");
  eul_intern_symbol(sym_3389,"make-named-const");
  eul_intern_symbol(sym_3390,"make-mutable-binding");
  eul_intern_symbol(sym_3391,"foldable-constant?");
  eul_intern_symbol(sym_3392,"make-local-static-var");
  eul_intern_symbol(sym_3393,"make-setq");
  eul_intern_symbol(sym_3394,"get-binding-spec-info");
  eul_intern_symbol(sym_3395,"make-defined-opencoded-fun");
  eul_intern_symbol(sym_3396,"true-local-binding?");
  eul_intern_symbol(sym_3397,"make-fun");
  eul_intern_symbol(sym_3398,"compute-arity");
  eul_intern_symbol(sym_3399,"make-defined-fun");
  eul_intern_symbol(sym_3400,"make-dummy-binding");
  eul_intern_symbol(sym_3401,"get-imported-inlined-setter-binding");
  eul_intern_symbol(sym_3402,"make-module");
  eul_intern_symbol(sym_3403,"register-delegated-vars");
  eul_intern_symbol(sym_3404,"top-level");
  eul_allocate_bytevector( G003379,G003378);

  /* Set local bindings */
  {
    int i;
    for (i = 2; i < 28; i++)
      sx_node_bindings[i] = eul_nil;
  }

  sx_node_bindings[ 28] = key_3277;
  sx_node_bindings[ 29] = key_3278;
  sx_node_bindings[ 30] = key_3279;
  sx_node_bindings[ 31] = key_3280;
  sx_node_bindings[ 32] = key_3281;
  sx_node_bindings[ 33] = key_3282;
  sx_node_bindings[ 34] = key_3283;
  sx_node_bindings[ 35] = G003276;
  sx_node_bindings[ 36] = sym_3286;
  sx_node_bindings[ 37] = G003285;
  sx_node_bindings[ 38] = G003288;
  sx_node_bindings[ 39] = G003290;
  sx_node_bindings[ 40] = sym_3293;
  sx_node_bindings[ 41] = sym_3294;
  sx_node_bindings[ 42] = sym_3295;
  sx_node_bindings[ 43] = sym_3296;
  sx_node_bindings[ 44] = sym_3297;
  sx_node_bindings[ 45] = G003292;
  sx_node_bindings[ 46] = sym_3300;
  sx_node_bindings[ 47] = G003299;
  sx_node_bindings[ 48] = key_3303;
  sx_node_bindings[ 49] = key_3304;
  sx_node_bindings[ 50] = key_3305;
  sx_node_bindings[ 51] = key_3306;
  sx_node_bindings[ 52] = key_3307;
  sx_node_bindings[ 53] = G003302;
  sx_node_bindings[ 54] = str_3310;
  sx_node_bindings[ 55] = sym_3311;
  sx_node_bindings[ 56] = sym_3312;
  sx_node_bindings[ 57] = sym_3313;
  sx_node_bindings[ 58] = G003309;
  sx_node_bindings[ 59] = sym_3316;
  sx_node_bindings[ 60] = G003315;
  sx_node_bindings[ 61] = G003318;
  sx_node_bindings[ 62] = G003320;
  sx_node_bindings[ 63] = sym_3323;
  sx_node_bindings[ 64] = key_3324;
  sx_node_bindings[ 65] = key_3325;
  sx_node_bindings[ 66] = key_3326;
  sx_node_bindings[ 67] = key_3327;
  sx_node_bindings[ 68] = G003322;
  sx_node_bindings[ 69] = sym_3330;
  sx_node_bindings[ 70] = sym_3331;
  sx_node_bindings[ 71] = sym_3332;
  sx_node_bindings[ 72] = sym_3333;
  sx_node_bindings[ 73] = sym_3334;
  sx_node_bindings[ 74] = G003329;
  sx_node_bindings[ 75] = sym_3337;
  sx_node_bindings[ 76] = G003336;
  sx_node_bindings[ 77] = G003339;
  sx_node_bindings[ 78] = key_3342;
  sx_node_bindings[ 79] = G003341;
  sx_node_bindings[ 80] = key_3345;
  sx_node_bindings[ 81] = key_3346;
  sx_node_bindings[ 82] = G003344;
  sx_node_bindings[ 83] = G003348;
  sx_node_bindings[ 84] = sym_3351;
  sx_node_bindings[ 85] = G003350;
  sx_node_bindings[ 86] = cons_3354;
  sx_node_bindings[ 87] = G003353;
  sx_node_bindings[ 88] = G003357;
  sx_node_bindings[ 89] = G003359;
  sx_node_bindings[ 90] = G003361;
  sx_node_bindings[ 91] = G003363;
  sx_node_bindings[ 92] = G003365;
  sx_node_bindings[ 93] = G003367;
  sx_node_bindings[ 94] = G003369;
  sx_node_bindings[ 95] = G003371;
  sx_node_bindings[ 96] = G003373;
  sx_node_bindings[ 97] = G003375;
  sx_node_bindings[ 98] = G003377;
  sx_node_bindings[ 1] = eul_nil;
  sx_node_bindings[ 99] = sym_3380;
  sx_node_bindings[ 100] = sym_3381;
  sx_node_bindings[ 101] = sym_3382;
  sx_node_bindings[ 102] = sym_3383;
  sx_node_bindings[ 103] = sym_3384;
  sx_node_bindings[ 104] = sym_3385;
  sx_node_bindings[ 105] = sym_3386;
  sx_node_bindings[ 106] = sym_3387;
  sx_node_bindings[ 107] = sym_3388;
  sx_node_bindings[ 108] = sym_3389;
  sx_node_bindings[ 109] = sym_3390;
  sx_node_bindings[ 110] = sym_3391;
  sx_node_bindings[ 111] = sym_3392;
  sx_node_bindings[ 112] = sym_3393;
  sx_node_bindings[ 113] = sym_3394;
  sx_node_bindings[ 114] = sym_3395;
  sx_node_bindings[ 115] = sym_3396;
  sx_node_bindings[ 116] = sym_3397;
  sx_node_bindings[ 117] = sym_3398;
  sx_node_bindings[ 118] = sym_3399;
  sx_node_bindings[ 119] = sym_3400;
  sx_node_bindings[ 120] = sym_3401;
  sx_node_bindings[ 121] = sym_3402;
  sx_node_bindings[ 122] = sym_3403;
  sx_node_bindings[ 123] = sym_3404;
  eul_allocate_lambda( sx_node_bindings[0], "initialize-sx-node", 0, G003379);

  }
}


/* eof */
