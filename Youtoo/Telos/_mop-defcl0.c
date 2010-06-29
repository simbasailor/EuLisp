/** ----------------------------------------------------------------------- **
 **                 Generated by EuLisp System 'youtoo'
 ** ----------------------------------------------------------------------- **
 **  Description: C source file of EuLisp module _mop-defcl0
 **  Copyright: See file _mop-defcl0.em
 ** ----------------------------------------------------------------------- **/

#include "eulisp.h"


/* Imported modules */
extern void initialize_module_level1();
extern LispRef level1_bindings[];
extern LispRef string_bindings[];
extern LispRef symbol_bindings[];
extern LispRef boot1_bindings[];
extern LispRef collect_bindings[];
extern LispRef boot_bindings[];
extern LispRef mop_key_bindings[];

/* Module bindings with size 95 */
LispRef _mop_defcl0_bindings[95];

/* Foreign functions */

/* Initialize module only once */
static int is_initialized = 0;

/* Initialize module _mop-defcl0 */
void initialize_module__mop_defcl0()
{
  if (is_initialized) return;
  initialize_module_level1();
  eul_fast_table_set(eul_modules,"_mop_defcl0",(LispRef) _mop_defcl0_bindings);
  is_initialized = 1;
  {
  /* Declarations */
  LispRef sym_1381, sym_1380, sym_1379, sym_1378, sym_1377, sym_1376, sym_1375, sym_1374, sym_1373, sym_1372, sym_1371, sym_1370, G001369, sym_1367, sym_1366, sym_1365, sym_1364, G001363, G001361, G001359, G001351, G001349, sym_1347, sym_1346, sym_1345, G001344, G001342, G001340, sym_1338, key_1337, G001336, sym_1334, sym_1333, G001332, sym_1330, G001329, G001327, sym_1325, sym_1324, key_1323, key_1322, key_1321, key_1320, key_1318, key_1316, key_1314, key_1311, sym_1310, sym_1308, sym_1307, sym_1306, sym_1305, sym_1304, G001303, sym_1301, sym_1300, sym_1299, sym_1298, sym_1297, sym_1296, sym_1295, sym_1294, sym_1293, G001292, G001290, key_1288, key_1286, key_1283, sym_1280, key_1279, key_1278, sym_1277, sym_1275, key_1274, sym_1273, G001272;

  /* Code vector and literal definitions */
  eul_allocate_static_cons(cons_1276, NULL, NULL);
  eul_allocate_static_cons(cons_1287, NULL, NULL);
  eul_allocate_static_cons(cons_1285, NULL, eul_as_static(cons_1287));
  eul_allocate_static_cons(cons_1284, NULL, eul_as_static(cons_1285));
  eul_allocate_static_cons(cons_1282, NULL, eul_as_static(cons_1284));
  eul_allocate_static_cons(cons_1281, NULL, eul_as_static(cons_1282));
  /* Byte-vector with size: 81 is_init: 0 index: 26 binding: do-direct-slotds */
  static const void *G001271[] = {I(aa,1b,12,1b),I(34,00,00,00),I(00,00,00,10),I(86,32,00,00),I(00,00,01,34),I(1c,10,7a,12),I(1b,34,00,00),I(00,00,00,3f),I(1d,10,1b,86),I(0f,23,00,00),B(_mop_defcl0 ,14),I(1c,0f,1b,86),I(0f,23,00,00),B(_mop_defcl0 ,15),I(1c,0f,23,00),B(_mop_defcl0 ,16),I(1c,0f,1f,08),I(11,1b,24,00),B(_mop_defcl0 ,2),I(3c,01,1d,1c),I(0f,22,08,32),I(00,00,00,ec),I(23,00,00,00),B(_mop_defcl0 ,18),I(1f,03,74,23),B(_mop_defcl0 ,19),I(1c,1f,03,24),B(mop_key ,2),I(3c,03,1f,05),I(74,23,00,00),B(_mop_defcl0 ,20),I(1c,1f,05,24),B(mop_key ,2),I(3c,03,1f,07),I(72,1b,86,0f),I(23,00,00,00),B(_mop_defcl0 ,14),I(1c,0f,1f,05),I(1f,08,50,1b),I(34,00,00,00),I(00,00,00,10),I(86,32,00,00),I(00,00,00,23),I(1f,06,86,0f),I(86,1c,0f,23),B(_mop_defcl0 ,21),I(1c,0f,1b,86),I(0f,23,00,00),B(_mop_defcl0 ,19),I(1c,0f,22,04),I(1f,05,1f,0a),I(50,1b,34,00),I(00,00,00,0e),I(86,32,00,00),I(00,00,00,17),I(1f,06,86,0f),I(23,00,00,00),B(_mop_defcl0 ,20),I(1c,0f,22,01),I(1f,0e,74,1b),I(23,00,00,00),B(_mop_defcl0 ,25),I(24,00,00,00),B(mop_key ,3),I(3c,02,1d,1c),I(24,00,00,00),B(boot ,7),I(3c,02,1f,05),I(1c,24,00,00),B(boot ,7),I(3c,02,1f,08),I(1c,0f,23,00),B(_mop_defcl0 ,15),I(1c,0f,23,00),B(_mop_defcl0 ,16),I(1c,0f,1f,15),I(11,1b,24,00),B(_mop_defcl0 ,2),I(3c,01,1d,1c),I(0f,22,15,22),I(01,45,02,00)};

  /* Byte-vector with size: 74 is_init: 0 index: 27 binding: do-accessor */
  static const void *G001289[] = {I(43,04,1c,12),I(1b,34,00,00),I(00,00,00,0f),I(86,32,00,00),I(00,00,01,16),I(1d,10,23,00),B(_mop_defcl0 ,22),I(50,1b,34,00),I(00,00,00,52),I(1f,03,73,1b),I(1f,07,1f,07),I(1f,06,24,00),B(_mop_defcl0 ,4),I(3c,04,1c,1f),I(08,1f,08,1f),I(07,24,00,00),B(_mop_defcl0 ,7),I(3c,04,1f,06),I(75,1f,09,1f),I(09,1d,1f,09),I(24,00,00,00),B(_mop_defcl0 ,3),I(3c,04,1f,03),I(1f,03,1d,24),B(collect ,19),I(3d,03,0b,22),I(05,32,00,00),I(00,00,00,b8),I(1f,03,10,23),B(_mop_defcl0 ,23),I(50,1b,34,00),I(00,00,00,42),I(1f,04,73,1b),I(1f,08,1f,08),I(1f,07,24,00),B(_mop_defcl0 ,4),I(3c,04,1f,06),I(75,1f,09,1f),I(09,1d,1f,09),I(24,00,00,00),B(_mop_defcl0 ,3),I(3c,04,1d,1c),I(24,00,00,00),B(boot ,7),I(3d,02,0b,22),I(04,32,00,00),I(00,00,00,6a),I(1f,04,10,23),B(_mop_defcl0 ,24),I(50,1b,34,00),I(00,00,00,42),I(1f,05,73,1b),I(1f,09,1f,09),I(1f,08,87,24),B(_mop_defcl0 ,7),I(3c,05,1f,07),I(75,1f,0a,1f),I(0a,1d,1f,0a),I(24,00,00,00),B(_mop_defcl0 ,3),I(3c,04,1d,1c),I(24,00,00,00),B(boot ,7),I(3d,02,0c,22),I(04,32,00,00),I(00,00,00,1c),I(1f,05,75,1f),I(08,1f,08,1d),I(1f,08,24,00),B(_mop_defcl0 ,3),I(3d,04,09,22),I(01,22,01,22),I(01,22,01,45),I(05,00,00,00)};

  /* Byte-vector with size: 33 is_init: 0 index: 37 binding: do-reader */
  static const void *G001291[] = {I(43,04,23,00),B(_mop_defcl0 ,28),I(86,0f,23,00),B(_mop_defcl0 ,29),I(86,0f,23,00),B(_mop_defcl0 ,30),I(1c,0f,1f,05),I(86,0f,23,00),B(_mop_defcl0 ,31),I(1c,0f,23,00),B(_mop_defcl0 ,32),I(1c,0f,23,00),B(_mop_defcl0 ,33),I(86,0f,1b,86),I(0f,1d,1c,0f),I(1f,06,1c,0f),I(23,00,00,00),B(_mop_defcl0 ,34),I(1c,0f,1f,0b),I(86,0f,23,00),B(_mop_defcl0 ,28),I(1c,0f,1d,1c),I(0f,1b,86,0f),I(1f,0e,1c,0f),I(1f,13,1c,0f),I(23,00,00,00),B(_mop_defcl0 ,35),I(1c,0f,1f,15),I(86,0f,23,00),B(_mop_defcl0 ,36),I(1c,0f,1b,86),I(0f,1f,03,1c),I(0f,45,19,00)};

  eul_allocate_static_cons(cons_1309, NULL, NULL);
  eul_allocate_static_cons(cons_1319, NULL, NULL);
  eul_allocate_static_cons(cons_1317, NULL, eul_as_static(cons_1319));
  eul_allocate_static_cons(cons_1315, NULL, eul_as_static(cons_1317));
  eul_allocate_static_cons(cons_1313, NULL, eul_as_static(cons_1315));
  eul_allocate_static_cons(cons_1312, NULL, eul_as_static(cons_1313));
  /* Byte-vector with size: 102 is_init: 0 index: 56 binding: defprimclass */
  static const void *G001302[] = {I(43,fb,1f,04),I(24,00,00,00),B(_mop_defcl0 ,10),I(3c,01,1f,04),I(86,0f,23,00),B(_mop_defcl0 ,38),I(1c,0f,1b,86),I(0f,1f,08,1c),I(0f,23,00,00),B(_mop_defcl0 ,39),I(1c,0f,23,00),B(_mop_defcl0 ,40),I(86,0f,23,00),B(_mop_defcl0 ,41),I(1c,0f,23,00),B(_mop_defcl0 ,42),I(86,0f,1f,0d),I(1c,0f,1d,1c),I(0f,1f,0a,86),I(0f,23,00,00),B(_mop_defcl0 ,14),I(1c,0f,1f,0f),I(1b,34,00,00),I(00,00,00,0f),I(1b,32,00,00),I(00,00,00,0f),I(23,00,00,00),B(_mop_defcl0 ,44),I(23,00,00,00),B(_mop_defcl0 ,16),I(1c,0f,1f,11),I(24,00,00,00),B(_mop_defcl0 ,2),I(3c,01,23,00),B(_mop_defcl0 ,16),I(1c,0f,23,00),B(_mop_defcl0 ,45),I(1f,13,86,24),B(mop_key ,2),I(3c,03,1f,14),I(24,00,00,00),B(_mop_defcl0 ,6),I(3c,01,1c,1c),I(24,00,00,00),B(boot ,7),I(3c,02,1b,86),I(0f,23,00,00),B(_mop_defcl0 ,14),I(1c,0f,1f,17),I(23,00,00,00),B(_mop_defcl0 ,50),I(24,00,00,00),B(mop_key ,3),I(3c,02,1c,1c),I(0f,23,00,00),B(_mop_defcl0 ,51),I(1c,0f,1f,08),I(1c,0f,23,00),B(_mop_defcl0 ,52),I(1c,0f,1f,0c),I(1c,0f,23,00),B(_mop_defcl0 ,53),I(1c,0f,1f,11),I(1c,0f,23,00),B(_mop_defcl0 ,15),I(1c,0f,23,00),B(_mop_defcl0 ,16),I(1c,0f,1b,86),I(0f,1f,26,1c),I(0f,23,00,00),B(_mop_defcl0 ,54),I(1c,0f,1f,28),I(1f,26,24,00),B(_mop_defcl0 ,12),I(3c,02,1f,29),I(1f,26,24,00),B(_mop_defcl0 ,8),I(3c,02,1f,2a),I(1f,27,24,00),B(_mop_defcl0 ,9),I(3c,02,1f,2b),I(1f,28,24,00),B(_mop_defcl0 ,13),I(3c,02,1f,2c),I(86,0f,1c,1c),I(24,00,00,00),B(boot ,7),I(3c,02,1f,03),I(1c,24,00,00),B(boot ,7),I(3c,02,1f,05),I(1c,24,00,00),B(boot ,7),I(3c,02,1f,07),I(1c,24,00,00),B(boot ,7),I(3c,02,1f,09),I(1c,0f,1f,23),I(1c,0f,1f,29),I(1c,0f,23,00),B(_mop_defcl0 ,55),I(1c,0f,45,35)};

  /* Byte-vector with size: 30 is_init: 0 index: 57 binding: anonymous */
  static const void *G001326[] = {I(ab,1c,12,1b),I(34,00,00,00),I(00,00,00,10),I(1c,32,00,00),I(00,00,00,68),I(1d,10,1b,7a),I(12,1b,34,00),I(00,00,00,1a),I(1f,04,11,1b),I(1f,05,47,00),I(00,3d,02,06),I(22,01,32,00),I(00,00,00,45),I(1c,11,23,00),B(_mop_defcl0 ,20),I(1c,86,24,00),B(mop_key ,2),I(3c,03,1b,12),I(1b,34,00,00),I(00,00,00,1b),I(1f,07,11,1b),I(1f,08,47,00),I(00,3d,02,09),I(22,01,32,00),I(00,00,00,13),I(1f,07,11,1d),I(1f,08,0f,47),I(00,00,3d,02),I(08,22,03,22),I(02,45,03,00)};

  /* Byte-vector with size: 10 is_init: 0 index: 59 binding: find-slot-keywords */
  static const void *G001328[] = {I(aa,46,01,86),I(1b,48,00,00),I(23,00,00,00),B(_mop_defcl0 ,58),I(23,00,00,00),B(_mop_defcl0 ,57),I(3b,02,48,00),I(00,1c,86,47),I(00,00,3d,02),I(02,45,02,00)};

  /* Byte-vector with size: 82 is_init: 0 index: 62 binding: do-writer */
  static const void *G001331[] = {I(43,fb,12,1b),I(34,00,00,00),I(00,00,00,a4),I(1f,04,86,0f),I(23,00,00,00),B(_mop_defcl0 ,41),I(1c,0f,23,00),B(_mop_defcl0 ,60),I(86,0f,23,00),B(_mop_defcl0 ,28),I(1c,0f,23,00),B(_mop_defcl0 ,60),I(86,0f,23,00),B(_mop_defcl0 ,29),I(1c,0f,23,00),B(_mop_defcl0 ,28),I(1c,0f,1f,0a),I(86,0f,23,00),B(_mop_defcl0 ,31),I(1c,0f,23,00),B(_mop_defcl0 ,32),I(1c,0f,23,00),B(_mop_defcl0 ,61),I(86,0f,1b,86),I(0f,1d,1c,0f),I(1f,06,1c,0f),I(23,00,00,00),B(_mop_defcl0 ,34),I(1c,0f,23,00),B(_mop_defcl0 ,60),I(86,0f,1f,11),I(1c,0f,23,00),B(_mop_defcl0 ,28),I(1c,0f,1f,03),I(1c,0f,1b,86),I(0f,1f,10,1c),I(0f,1f,13,1c),I(0f,23,00,00),B(_mop_defcl0 ,35),I(1c,0f,86,0f),I(22,16,32,00),I(00,00,00,a1),I(23,00,00,00),B(_mop_defcl0 ,60),I(86,0f,23,00),B(_mop_defcl0 ,28),I(1c,0f,23,00),B(_mop_defcl0 ,60),I(86,0f,23,00),B(_mop_defcl0 ,29),I(1c,0f,23,00),B(_mop_defcl0 ,28),I(1c,0f,1f,08),I(86,0f,23,00),B(_mop_defcl0 ,31),I(1c,0f,23,00),B(_mop_defcl0 ,32),I(1c,0f,23,00),B(_mop_defcl0 ,61),I(86,0f,1b,86),I(0f,1d,1c,0f),I(1f,06,1c,0f),I(23,00,00,00),B(_mop_defcl0 ,34),I(1c,0f,23,00),B(_mop_defcl0 ,60),I(86,0f,1f,0f),I(1c,0f,23,00),B(_mop_defcl0 ,28),I(1c,0f,1f,03),I(1c,0f,1b,86),I(0f,1f,10,1c),I(0f,1f,17,1c),I(0f,23,00,00),B(_mop_defcl0 ,35),I(1c,0f,1f,19),I(86,0f,23,00),B(_mop_defcl0 ,36),I(1c,0f,1b,86),I(0f,1f,03,1c),I(0f,22,18,45),I(05,00,00,00)};

  /* Byte-vector with size: 53 is_init: 0 index: 65 binding: do-predicates */
  static const void *G001335[] = {I(ab,1b,12,1b),I(34,00,00,00),I(00,00,00,10),I(86,32,00,00),I(00,00,00,c2),I(1c,10,23,00),B(_mop_defcl0 ,46),I(50,1b,34,00),I(00,00,00,9e),I(1d,73,23,00),B(_mop_defcl0 ,43),I(86,0f,23,00),B(_mop_defcl0 ,28),I(1c,0f,1b,86),I(0f,23,00,00),B(_mop_defcl0 ,43),I(86,0f,23,00),B(_mop_defcl0 ,28),I(1c,0f,1b,86),I(0f,86,86,0f),I(1c,1c,0f,1f),I(0c,86,0f,23),B(_mop_defcl0 ,28),I(1c,0f,1b,86),I(0f,23,00,00),B(_mop_defcl0 ,28),I(86,0f,1c,1c),I(0f,1b,86,0f),I(23,00,00,00),B(_mop_defcl0 ,63),I(1c,0f,1f,07),I(1c,0f,23,00),B(_mop_defcl0 ,63),I(1c,0f,1f,0e),I(1c,0f,1f,12),I(1c,0f,23,00),B(_mop_defcl0 ,64),I(1c,0f,1b,86),I(0f,1f,18,75),I(1f,1a,1c,24),B(_mop_defcl0 ,8),I(3c,02,1d,1c),I(24,00,00,00),B(boot ,7),I(3d,02,1c,22),I(18,32,00,00),I(00,00,00,18),I(1d,75,1f,04),I(1c,24,00,00),B(_mop_defcl0 ,8),I(3d,02,05,22),I(01,22,01,45),I(03,00,00,00)};

  /* Byte-vector with size: 18 is_init: 0 index: 66 binding: anonymous */
  static const void *G001339[] = {I(43,03,1d,12),I(1b,34,00,00),I(00,00,00,0f),I(1c,32,00,00),I(00,00,00,36),I(1f,03,11,1f),I(03,11,1f,05),I(10,1f,05,10),I(1c,1c,24,00),B(boot1 ,26),I(3c,02,1f,06),I(1c,24,00,00),B(boot ,7),I(3c,02,1f,05),I(1f,05,1d,47),I(00,00,3d,03),I(0a,22,06,45),I(04,00,00,00)};

  /* Byte-vector with size: 3 is_init: 0 index: 67 binding: anonymous */
  static const void *G001341[] = {I(aa,24,00,00),B(symbol ,6),I(3d,00,01,00)};

  /* Byte-vector with size: 66 is_init: 0 index: 71 binding: do-constructors */
  static const void *G001343[] = {I(ab,46,08,1b),I(12,1b,34,00),I(00,00,00,0e),I(86,32,00,00),I(00,00,00,f6),I(1c,10,23,00),B(_mop_defcl0 ,48),I(50,1b,34,00),I(00,00,00,d2),I(1d,73,1b,7a),I(12,1b,34,00),I(00,00,00,46),I(23,00,00,00),B(_mop_defcl0 ,68),I(86,0f,1f,06),I(1c,0f,23,00),B(_mop_defcl0 ,69),I(1c,0f,23,00),B(_mop_defcl0 ,70),I(1c,0f,1b,86),I(0f,23,00,00),B(_mop_defcl0 ,68),I(1c,0f,1f,07),I(1c,0f,23,00),B(_mop_defcl0 ,35),I(1c,0f,22,07),I(32,00,00,00),I(00,00,00,70),I(1c,11,23,00),B(_mop_defcl0 ,58),I(23,00,00,00),B(_mop_defcl0 ,67),I(3b,01,1c,24),B(collect ,2),I(3c,02,1f,03),I(10,86,1b,48),I(00,00,23,00),B(_mop_defcl0 ,58),I(23,00,00,00),B(_mop_defcl0 ,66),I(3b,03,48,00),I(00,47,00,00),I(1f,06,11,1b),I(1f,05,86,47),I(00,00,3c,03),I(1f,0c,1c,0f),I(23,00,00,00),B(_mop_defcl0 ,69),I(1c,0f,1b,86),I(0f,1f,08,1c),I(0f,1f,08,1c),I(0f,23,00,00),B(_mop_defcl0 ,35),I(1c,0f,22,0c),I(1f,05,75,1f),I(07,1c,24,00),B(_mop_defcl0 ,9),I(3c,02,1d,1c),I(0f,22,05,32),I(00,00,00,16),I(1d,75,1f,04),I(1c,24,00,00),B(_mop_defcl0 ,9),I(3d,02,05,22),I(01,22,01,45),I(03,00,00,00)};

  /* Byte-vector with size: 13 is_init: 0 index: 72 binding: strip-<> */
  static const void *G001348[] = {I(aa,1b,82,02),I(1b,82,0b,27),I(3c,50,1b,34),I(00,00,00,25),I(1c,06,1b,2c),I(1f,03,83,1d),I(24,00,00,00),B(string ,6),I(3c,03,41,00),B(boot1 ,55),I(22,03,32,00),I(00,00,00,07),I(1d,45,03,00)};

  eul_allocate_static_cons(cons_1352, NULL, NULL);
  eul_allocate_static_cons(cons_1357, NULL, NULL);
  eul_allocate_static_cons(cons_1356, NULL, eul_as_static(cons_1357));
  eul_allocate_static_cons(cons_1355, NULL, eul_as_static(cons_1356));
  eul_allocate_static_cons(cons_1354, NULL, eul_as_static(cons_1355));
  eul_allocate_static_cons(cons_1353, NULL, eul_as_static(cons_1354));
  /* Byte-vector with size: 92 is_init: 0 index: 75 binding: defclass */
  static const void *G001350[] = {I(43,fc,1f,03),I(24,00,00,00),B(_mop_defcl0 ,10),I(3c,01,23,00),B(_mop_defcl0 ,47),I(1d,23,00,00),B(_mop_defcl0 ,42),I(24,00,00,00),B(mop_key ,2),I(3c,03,1c,86),I(0f,23,00,00),B(_mop_defcl0 ,14),I(1c,0f,1f,06),I(1b,34,00,00),I(00,00,00,0f),I(1b,32,00,00),I(00,00,00,0f),I(23,00,00,00),B(_mop_defcl0 ,73),I(23,00,00,00),B(_mop_defcl0 ,16),I(1c,0f,1f,08),I(24,00,00,00),B(_mop_defcl0 ,2),I(3c,01,23,00),B(_mop_defcl0 ,16),I(1c,0f,23,00),B(_mop_defcl0 ,45),I(1f,0a,86,24),B(mop_key ,2),I(3c,03,1f,0b),I(24,00,00,00),B(_mop_defcl0 ,6),I(3c,01,1c,1c),I(24,00,00,00),B(boot ,7),I(3c,02,1b,86),I(0f,23,00,00),B(_mop_defcl0 ,14),I(1c,0f,1f,0e),I(23,00,00,00),B(_mop_defcl0 ,74),I(24,00,00,00),B(mop_key ,3),I(3c,02,1c,1c),I(0f,23,00,00),B(_mop_defcl0 ,51),I(1c,0f,1f,08),I(1c,0f,23,00),B(_mop_defcl0 ,52),I(1c,0f,1f,0c),I(1c,0f,23,00),B(_mop_defcl0 ,53),I(1c,0f,1f,11),I(1c,0f,23,00),B(_mop_defcl0 ,15),I(1c,0f,1f,15),I(1c,0f,23,00),B(_mop_defcl0 ,69),I(1c,0f,1b,86),I(0f,1f,1d,1c),I(0f,23,00,00),B(_mop_defcl0 ,39),I(1c,0f,1f,1f),I(1f,1e,24,00),B(_mop_defcl0 ,12),I(3c,02,1f,20),I(1f,1e,24,00),B(_mop_defcl0 ,8),I(3c,02,1f,21),I(1f,1f,24,00),B(_mop_defcl0 ,9),I(3c,02,1f,22),I(1f,20,24,00),B(_mop_defcl0 ,13),I(3c,02,1f,23),I(86,0f,1c,1c),I(24,00,00,00),B(boot ,7),I(3c,02,1f,03),I(1c,24,00,00),B(boot ,7),I(3c,02,1f,05),I(1c,24,00,00),B(boot ,7),I(3c,02,1f,07),I(1c,24,00,00),B(boot ,7),I(3c,02,1f,09),I(1c,0f,23,00),B(_mop_defcl0 ,55),I(1c,0f,45,2a)};

  /* Byte-vector with size: 28 is_init: 0 index: 76 binding: anonymous */
  static const void *G001358[] = {I(43,03,1d,12),I(1b,34,00,00),I(00,00,00,0f),I(1d,32,00,00),I(00,00,00,5e),I(1f,03,10,1b),I(7a,12,1b,34),I(00,00,00,1d),I(1f,05,11,1f),I(04,2c,1c,1f),I(07,1d,47,00),I(01,3d,03,08),I(22,02,32,00),I(00,00,00,37),I(1f,05,11,1d),I(10,1f,03,11),I(47,00,00,1d),I(1d,1f,09,24),B(_mop_defcl0 ,3),I(3c,04,1b,1f),I(09,24,00,00),B(boot ,7),I(3c,02,1f,08),I(2c,1f,05,1d),I(1d,47,00,01),I(3d,03,0c,22),I(06,22,02,45),I(04,00,00,00)};

  /* Byte-vector with size: 14 is_init: 0 index: 77 binding: do-accessors */
  static const void *G001360[] = {I(ab,46,02,1c),I(48,00,00,86),I(1b,48,00,01),I(23,00,00,00),B(_mop_defcl0 ,58),I(23,00,00,00),B(_mop_defcl0 ,76),I(3b,03,48,00),I(01,1c,24,00),B(boot ,18),I(3c,01,1b,2c),I(1f,03,86,1d),I(47,00,01,3d),I(03,05,45,05)};

  /* Byte-vector with size: 28 is_init: 0 index: 82 binding: do-printfn */
  static const void *G001362[] = {I(ab,23,00,00),B(_mop_defcl0 ,49),I(1c,86,24,00),B(mop_key ,2),I(3c,03,1b,12),I(1b,34,00,00),I(00,00,00,0f),I(86,32,00,00),I(00,00,00,51),I(1f,03,86,0f),I(23,00,00,00),B(_mop_defcl0 ,78),I(1c,0f,23,00),B(_mop_defcl0 ,79),I(86,0f,1c,1c),I(0f,23,00,00),B(_mop_defcl0 ,79),I(86,0f,23,00),B(_mop_defcl0 ,78),I(1c,0f,1f,07),I(1c,0f,1b,86),I(0f,1f,04,1c),I(0f,23,00,00),B(_mop_defcl0 ,80),I(1c,0f,23,00),B(_mop_defcl0 ,81),I(1c,0f,86,0f),I(22,0a,45,04)};

  /* Byte-vector with size: 80 is_init: 1 index: 0 binding: initialize-_mop-defcl0 */
  static const void *G001368[] = {I(87,25,00,00),B(_mop_defcl0 ,1),I(24,00,00,00),B(level1 ,1),I(3e,0b,24,00),B(level1 ,0),I(3c,00,21,01),I(23,00,00,00),B(_mop_defcl0 ,83),I(23,00,00,00),B(_mop_defcl0 ,82),I(3b,02,25,00),B(_mop_defcl0 ,13),I(23,00,00,00),B(_mop_defcl0 ,84),I(23,00,00,00),B(_mop_defcl0 ,77),I(3b,02,25,00),B(_mop_defcl0 ,12),I(23,00,00,00),B(_mop_defcl0 ,85),I(23,00,00,00),B(_mop_defcl0 ,75),I(3b,fc,25,00),B(_mop_defcl0 ,11),I(23,00,00,00),B(_mop_defcl0 ,86),I(23,00,00,00),B(_mop_defcl0 ,72),I(3b,01,25,00),B(_mop_defcl0 ,10),I(23,00,00,00),B(_mop_defcl0 ,87),I(23,00,00,00),B(_mop_defcl0 ,71),I(3b,02,25,00),B(_mop_defcl0 ,9),I(23,00,00,00),B(_mop_defcl0 ,88),I(23,00,00,00),B(_mop_defcl0 ,65),I(3b,02,25,00),B(_mop_defcl0 ,8),I(23,00,00,00),B(_mop_defcl0 ,89),I(23,00,00,00),B(_mop_defcl0 ,62),I(3b,fb,25,00),B(_mop_defcl0 ,7),I(23,00,00,00),B(_mop_defcl0 ,90),I(23,00,00,00),B(_mop_defcl0 ,59),I(3b,01,25,00),B(_mop_defcl0 ,6),I(23,00,00,00),B(_mop_defcl0 ,91),I(23,00,00,00),B(_mop_defcl0 ,56),I(3b,fb,25,00),B(_mop_defcl0 ,5),I(23,00,00,00),B(_mop_defcl0 ,92),I(23,00,00,00),B(_mop_defcl0 ,37),I(3b,04,25,00),B(_mop_defcl0 ,4),I(23,00,00,00),B(_mop_defcl0 ,93),I(23,00,00,00),B(_mop_defcl0 ,27),I(3b,04,25,00),B(_mop_defcl0 ,3),I(23,00,00,00),B(_mop_defcl0 ,94),I(23,00,00,00),B(_mop_defcl0 ,26),I(3b,01,25,00),B(_mop_defcl0 ,2),I(86,ac,00,00)};


  /* Initializations */
  eul_intern_symbol(sym_1273,"quote");
  eul_intern_keyword(key_1274,"name");
  eul_intern_symbol(sym_1275,"list");
  eul_intern_symbol(sym_1277,"absent");
  object_class(cons_1276) = eul_static_cons_class;
  eul_car(cons_1276) = sym_1277;
  eul_cdr(cons_1276) = eul_nil;
  eul_intern_keyword(key_1278,"default");
  eul_intern_keyword(key_1279,"keyword");
  eul_intern_symbol(sym_1280,"lambda");
  eul_intern_keyword(key_1283,"accessor");
  eul_intern_keyword(key_1286,"reader");
  eul_intern_keyword(key_1288,"writer");
  object_class(cons_1287) = eul_static_cons_class;
  eul_car(cons_1287) = key_1288;
  eul_cdr(cons_1287) = eul_nil;
  object_class(cons_1285) = eul_static_cons_class;
  eul_car(cons_1285) = key_1286;
  object_class(cons_1284) = eul_static_cons_class;
  eul_car(cons_1284) = key_1279;
  object_class(cons_1282) = eul_static_cons_class;
  eul_car(cons_1282) = key_1283;
  object_class(cons_1281) = eul_static_cons_class;
  eul_car(cons_1281) = key_1278;
  eul_allocate_bytevector( G001272,G001271);
  eul_allocate_bytevector( G001290,G001289);
  eul_intern_symbol(sym_1293,"x");
  eul_intern_symbol(sym_1294,"i");
  eul_intern_symbol(sym_1295,"o");
  eul_intern_symbol(sym_1296,"?");
  eul_intern_symbol(sym_1297,"binding-ref");
  eul_intern_symbol(sym_1298,"primitive-relative-ref");
  eul_intern_symbol(sym_1299,"opencoded-lambda");
  eul_intern_symbol(sym_1300,"defun");
  eul_intern_symbol(sym_1301,"declare-inline");
  eul_allocate_bytevector( G001292,G001291);
  eul_intern_symbol(sym_1304,"get-global-register");
  eul_intern_symbol(sym_1305,"defconstant");
  eul_intern_symbol(sym_1306,"primitive-class-of");
  eul_intern_symbol(sym_1307,"setter");
  eul_intern_symbol(sym_1308,"<simple-class>");
  eul_intern_symbol(sym_1310,"<object>");
  object_class(cons_1309) = eul_static_cons_class;
  eul_car(cons_1309) = sym_1310;
  eul_cdr(cons_1309) = eul_nil;
  eul_intern_keyword(key_1311,"keywords");
  eul_intern_keyword(key_1314,"predicate");
  eul_intern_keyword(key_1316,"class");
  eul_intern_keyword(key_1318,"constructor");
  eul_intern_keyword(key_1320,"print-function");
  object_class(cons_1319) = eul_static_cons_class;
  eul_car(cons_1319) = key_1320;
  eul_cdr(cons_1319) = eul_nil;
  object_class(cons_1317) = eul_static_cons_class;
  eul_car(cons_1317) = key_1318;
  object_class(cons_1315) = eul_static_cons_class;
  eul_car(cons_1315) = key_1316;
  object_class(cons_1313) = eul_static_cons_class;
  eul_car(cons_1313) = key_1314;
  object_class(cons_1312) = eul_static_cons_class;
  eul_car(cons_1312) = key_1311;
  eul_intern_keyword(key_1321,"direct-keywords");
  eul_intern_keyword(key_1322,"direct-slots");
  eul_intern_keyword(key_1323,"direct-superclasses");
  eul_intern_symbol(sym_1324,"initialize");
  eul_intern_symbol(sym_1325,"progn");
  eul_allocate_bytevector( G001303,G001302);
  eul_allocate_bytevector( G001327,G001326);
  eul_intern_symbol(sym_1330,"anonymous");
  eul_allocate_bytevector( G001329,G001328);
  eul_intern_symbol(sym_1333,"v");
  eul_intern_symbol(sym_1334,"set-primitive-relative-ref");
  eul_allocate_bytevector( G001332,G001331);
  eul_intern_keyword(key_1337,"method");
  eul_intern_symbol(sym_1338,"defgeneric");
  eul_allocate_bytevector( G001336,G001335);
  eul_allocate_bytevector( G001340,G001339);
  eul_allocate_bytevector( G001342,G001341);
  eul_intern_symbol(sym_1345,"inits");
  eul_intern_symbol(sym_1346,"make");
  eul_intern_symbol(sym_1347,"apply");
  eul_allocate_bytevector( G001344,G001343);
  eul_allocate_bytevector( G001349,G001348);
  object_class(cons_1352) = eul_static_cons_class;
  eul_car(cons_1352) = sym_1310;
  eul_cdr(cons_1352) = eul_nil;
  object_class(cons_1357) = eul_static_cons_class;
  eul_car(cons_1357) = key_1320;
  eul_cdr(cons_1357) = eul_nil;
  object_class(cons_1356) = eul_static_cons_class;
  eul_car(cons_1356) = key_1318;
  object_class(cons_1355) = eul_static_cons_class;
  eul_car(cons_1355) = key_1316;
  object_class(cons_1354) = eul_static_cons_class;
  eul_car(cons_1354) = key_1314;
  object_class(cons_1353) = eul_static_cons_class;
  eul_car(cons_1353) = key_1311;
  eul_allocate_bytevector( G001351,G001350);
  eul_allocate_bytevector( G001359,G001358);
  eul_allocate_bytevector( G001361,G001360);
  eul_intern_symbol(sym_1364,"obj");
  eul_intern_symbol(sym_1365,"str");
  eul_intern_symbol(sym_1366,"generic-prin");
  eul_intern_symbol(sym_1367,"defmethod");
  eul_allocate_bytevector( G001363,G001362);
  eul_intern_symbol(sym_1370,"do-printfn");
  eul_intern_symbol(sym_1371,"do-accessors");
  eul_intern_symbol(sym_1372,"defclass");
  eul_intern_symbol(sym_1373,"strip-<>");
  eul_intern_symbol(sym_1374,"do-constructors");
  eul_intern_symbol(sym_1375,"do-predicates");
  eul_intern_symbol(sym_1376,"do-writer");
  eul_intern_symbol(sym_1377,"find-slot-keywords");
  eul_intern_symbol(sym_1378,"defprimclass");
  eul_intern_symbol(sym_1379,"do-reader");
  eul_intern_symbol(sym_1380,"do-accessor");
  eul_intern_symbol(sym_1381,"do-direct-slotds");
  eul_allocate_bytevector( G001369,G001368);

  /* Set local bindings */
  {
    int i;
    for (i = 2; i < 14; i++)
      _mop_defcl0_bindings[i] = eul_nil;
  }

  _mop_defcl0_bindings[ 14] = sym_1273;
  _mop_defcl0_bindings[ 15] = key_1274;
  _mop_defcl0_bindings[ 16] = sym_1275;
  _mop_defcl0_bindings[ 17] = sym_1277;
  _mop_defcl0_bindings[ 18] = cons_1276;
  _mop_defcl0_bindings[ 19] = key_1278;
  _mop_defcl0_bindings[ 20] = key_1279;
  _mop_defcl0_bindings[ 21] = sym_1280;
  _mop_defcl0_bindings[ 22] = key_1283;
  _mop_defcl0_bindings[ 23] = key_1286;
  _mop_defcl0_bindings[ 24] = key_1288;
  _mop_defcl0_bindings[ 25] = cons_1281;
  _mop_defcl0_bindings[ 26] = G001272;
  _mop_defcl0_bindings[ 27] = G001290;
  _mop_defcl0_bindings[ 28] = sym_1293;
  _mop_defcl0_bindings[ 29] = sym_1294;
  _mop_defcl0_bindings[ 30] = sym_1295;
  _mop_defcl0_bindings[ 31] = sym_1296;
  _mop_defcl0_bindings[ 32] = sym_1297;
  _mop_defcl0_bindings[ 33] = sym_1298;
  _mop_defcl0_bindings[ 34] = sym_1299;
  _mop_defcl0_bindings[ 35] = sym_1300;
  _mop_defcl0_bindings[ 36] = sym_1301;
  _mop_defcl0_bindings[ 37] = G001292;
  _mop_defcl0_bindings[ 38] = sym_1304;
  _mop_defcl0_bindings[ 39] = sym_1305;
  _mop_defcl0_bindings[ 40] = sym_1306;
  _mop_defcl0_bindings[ 41] = sym_1307;
  _mop_defcl0_bindings[ 42] = sym_1308;
  _mop_defcl0_bindings[ 43] = sym_1310;
  _mop_defcl0_bindings[ 44] = cons_1309;
  _mop_defcl0_bindings[ 45] = key_1311;
  _mop_defcl0_bindings[ 46] = key_1314;
  _mop_defcl0_bindings[ 47] = key_1316;
  _mop_defcl0_bindings[ 48] = key_1318;
  _mop_defcl0_bindings[ 49] = key_1320;
  _mop_defcl0_bindings[ 50] = cons_1312;
  _mop_defcl0_bindings[ 51] = key_1321;
  _mop_defcl0_bindings[ 52] = key_1322;
  _mop_defcl0_bindings[ 53] = key_1323;
  _mop_defcl0_bindings[ 54] = sym_1324;
  _mop_defcl0_bindings[ 55] = sym_1325;
  _mop_defcl0_bindings[ 56] = G001303;
  _mop_defcl0_bindings[ 57] = G001327;
  _mop_defcl0_bindings[ 58] = sym_1330;
  _mop_defcl0_bindings[ 59] = G001329;
  _mop_defcl0_bindings[ 60] = sym_1333;
  _mop_defcl0_bindings[ 61] = sym_1334;
  _mop_defcl0_bindings[ 62] = G001332;
  _mop_defcl0_bindings[ 63] = key_1337;
  _mop_defcl0_bindings[ 64] = sym_1338;
  _mop_defcl0_bindings[ 65] = G001336;
  _mop_defcl0_bindings[ 66] = G001340;
  _mop_defcl0_bindings[ 67] = G001342;
  _mop_defcl0_bindings[ 68] = sym_1345;
  _mop_defcl0_bindings[ 69] = sym_1346;
  _mop_defcl0_bindings[ 70] = sym_1347;
  _mop_defcl0_bindings[ 71] = G001344;
  _mop_defcl0_bindings[ 72] = G001349;
  _mop_defcl0_bindings[ 73] = cons_1352;
  _mop_defcl0_bindings[ 74] = cons_1353;
  _mop_defcl0_bindings[ 75] = G001351;
  _mop_defcl0_bindings[ 76] = G001359;
  _mop_defcl0_bindings[ 77] = G001361;
  _mop_defcl0_bindings[ 78] = sym_1364;
  _mop_defcl0_bindings[ 79] = sym_1365;
  _mop_defcl0_bindings[ 80] = sym_1366;
  _mop_defcl0_bindings[ 81] = sym_1367;
  _mop_defcl0_bindings[ 82] = G001363;
  _mop_defcl0_bindings[ 1] = eul_nil;
  _mop_defcl0_bindings[ 83] = sym_1370;
  _mop_defcl0_bindings[ 84] = sym_1371;
  _mop_defcl0_bindings[ 85] = sym_1372;
  _mop_defcl0_bindings[ 86] = sym_1373;
  _mop_defcl0_bindings[ 87] = sym_1374;
  _mop_defcl0_bindings[ 88] = sym_1375;
  _mop_defcl0_bindings[ 89] = sym_1376;
  _mop_defcl0_bindings[ 90] = sym_1377;
  _mop_defcl0_bindings[ 91] = sym_1378;
  _mop_defcl0_bindings[ 92] = sym_1379;
  _mop_defcl0_bindings[ 93] = sym_1380;
  _mop_defcl0_bindings[ 94] = sym_1381;
  eul_allocate_lambda( _mop_defcl0_bindings[0], "initialize-_mop-defcl0", 0, G001369);

  }
}


/* eof */
