/** ----------------------------------------------------------------------- **
 **                 Generated by EuLisp System 'youtoo'
 ** ----------------------------------------------------------------------- **
 **  Description: C source file of EuLisp module ex-aux0
 **  Copyright: See file ex-aux0.em
 ** ----------------------------------------------------------------------- **/

#include "eulisp.h"


/* Imported modules */
extern void initialize_module_level1();
extern LispRef level1_bindings[];

/* Module bindings with size 46 */
LispRef ex_aux0_bindings[46];

/* Foreign functions */

/* Initialize module only once */
static int is_initialized = 0;

/* Initialize module ex-aux0 */
void initialize_module_ex_aux0()
{
  if (is_initialized) return;
  initialize_module_level1();
  eul_fast_table_set(eul_modules,"ex_aux0",(LispRef) ex_aux0_bindings);
  is_initialized = 1;
  {
  /* Declarations */
  LispRef sym_1545, sym_1544, sym_1543, sym_1542, sym_1541, sym_1540, sym_1539, sym_1538, G001537, G001535, G001533, G001531, sym_1528, G001527, sym_1524, sym_1523, sym_1522, G001521, G001519, sym_1517, sym_1516, sym_1515, sym_1513, sym_1512, sym_1511, sym_1510, sym_1509, sym_1508, sym_1507, sym_1506, sym_1505, G001504, sym_1502, G001501;

  /* Code vector and literal definitions */
  /* Byte-vector with size: 3 is_init: 0 index: 11 binding: get-params */
  static const void *G001500[] = {I(aa,86,0f,23),B(ex_aux0 ,10),I(1c,0f,45,01)};

  eul_allocate_static_string(str_1514, "bad value ~a", 12);
  /* Byte-vector with size: 53 is_init: 0 index: 25 binding: get-name */
  static const void *G001503[] = {I(aa,86,0f,23),B(ex_aux0 ,12),I(1c,0f,1b,86),I(0f,23,00,00),B(ex_aux0 ,13),I(1c,0f,1b,86),I(0f,23,00,00),B(ex_aux0 ,13),I(86,0f,23,00),B(ex_aux0 ,14),I(1c,0f,23,00),B(ex_aux0 ,13),I(86,0f,23,00),B(ex_aux0 ,15),I(1c,0f,23,00),B(ex_aux0 ,13),I(86,0f,23,00),B(ex_aux0 ,16),I(1c,0f,23,00),B(ex_aux0 ,17),I(86,0f,23,00),B(ex_aux0 ,18),I(1c,0f,1b,86),I(0f,1f,03,1c),I(0f,23,00,00),B(ex_aux0 ,19),I(1c,0f,1b,86),I(0f,1f,08,1c),I(0f,23,00,00),B(ex_aux0 ,20),I(1c,0f,23,00),B(ex_aux0 ,13),I(86,0f,23,00),B(ex_aux0 ,21),I(1c,0f,23,00),B(ex_aux0 ,22),I(1c,0f,1b,86),I(0f,23,00,00),B(ex_aux0 ,13),I(1c,0f,1f,05),I(1c,0f,23,00),B(ex_aux0 ,23),I(1c,0f,1b,86),I(0f,23,00,00),B(ex_aux0 ,13),I(1c,0f,1f,15),I(1c,0f,23,00),B(ex_aux0 ,23),I(1c,0f,1b,86),I(0f,1f,1a,1c),I(0f,23,00,00),B(ex_aux0 ,24),I(1c,0f,45,20)};

  /* Byte-vector with size: 3 is_init: 0 index: 26 binding: get-directives */
  static const void *G001518[] = {I(aa,86,0f,23),B(ex_aux0 ,10),I(1c,0f,45,01)};

  eul_allocate_static_string(str_1525, "body ~a not a list", 18);
  /* Byte-vector with size: 35 is_init: 0 index: 31 binding: get-lambda-body */
  static const void *G001520[] = {I(aa,86,0f,23),B(ex_aux0 ,27),I(1c,0f,1b,86),I(0f,23,00,00),B(ex_aux0 ,13),I(1c,0f,1b,86),I(0f,23,00,00),B(ex_aux0 ,13),I(86,0f,23,00),B(ex_aux0 ,28),I(1c,0f,23,00),B(ex_aux0 ,13),I(86,0f,23,00),B(ex_aux0 ,15),I(1c,0f,1b,86),I(0f,1f,03,1c),I(0f,23,00,00),B(ex_aux0 ,29),I(1c,0f,23,00),B(ex_aux0 ,13),I(86,0f,23,00),B(ex_aux0 ,30),I(1c,0f,23,00),B(ex_aux0 ,22),I(1c,0f,1b,86),I(0f,23,00,00),B(ex_aux0 ,13),I(1c,0f,1f,05),I(1c,0f,23,00),B(ex_aux0 ,23),I(1c,0f,1b,86),I(0f,1f,0f,1c),I(0f,23,00,00),B(ex_aux0 ,24),I(1c,0f,45,15)};

  eul_allocate_static_string(str_1529, "body ~a not a list", 18);
  /* Byte-vector with size: 38 is_init: 0 index: 34 binding: get-body */
  static const void *G001526[] = {I(aa,86,0f,23),B(ex_aux0 ,27),I(1c,0f,1b,86),I(0f,23,00,00),B(ex_aux0 ,32),I(1c,0f,1b,86),I(0f,23,00,00),B(ex_aux0 ,13),I(1c,0f,1b,86),I(0f,23,00,00),B(ex_aux0 ,13),I(86,0f,23,00),B(ex_aux0 ,28),I(1c,0f,23,00),B(ex_aux0 ,13),I(86,0f,23,00),B(ex_aux0 ,15),I(1c,0f,1b,86),I(0f,1f,03,1c),I(0f,23,00,00),B(ex_aux0 ,29),I(1c,0f,23,00),B(ex_aux0 ,13),I(86,0f,23,00),B(ex_aux0 ,33),I(1c,0f,23,00),B(ex_aux0 ,22),I(1c,0f,1b,86),I(0f,23,00,00),B(ex_aux0 ,13),I(1c,0f,1f,05),I(1c,0f,23,00),B(ex_aux0 ,23),I(1c,0f,1b,86),I(0f,1f,0f,1c),I(0f,23,00,00),B(ex_aux0 ,24),I(1c,0f,45,17)};

  /* Byte-vector with size: 3 is_init: 0 index: 35 binding: get-lambda-params */
  static const void *G001530[] = {I(aa,86,0f,23),B(ex_aux0 ,12),I(1c,0f,45,01)};

  /* Byte-vector with size: 6 is_init: 0 index: 36 binding: get-top-level-forms */
  static const void *G001532[] = {I(aa,86,0f,23),B(ex_aux0 ,27),I(1c,0f,1b,86),I(0f,23,00,00),B(ex_aux0 ,32),I(1c,0f,45,03)};

  /* Byte-vector with size: 3 is_init: 0 index: 37 binding: get-value */
  static const void *G001534[] = {I(aa,86,0f,23),B(ex_aux0 ,10),I(1c,0f,45,01)};

  /* Byte-vector with size: 56 is_init: 1 index: 0 binding: initialize-ex-aux0 */
  static const void *G001536[] = {I(87,25,00,00),B(ex_aux0 ,1),I(24,00,00,00),B(level1 ,1),I(3e,0b,24,00),B(level1 ,0),I(3c,00,21,01),I(23,00,00,00),B(ex_aux0 ,38),I(23,00,00,00),B(ex_aux0 ,37),I(3b,01,25,00),B(ex_aux0 ,9),I(23,00,00,00),B(ex_aux0 ,39),I(23,00,00,00),B(ex_aux0 ,36),I(3b,01,25,00),B(ex_aux0 ,8),I(23,00,00,00),B(ex_aux0 ,40),I(23,00,00,00),B(ex_aux0 ,35),I(3b,01,25,00),B(ex_aux0 ,7),I(23,00,00,00),B(ex_aux0 ,41),I(23,00,00,00),B(ex_aux0 ,34),I(3b,01,25,00),B(ex_aux0 ,6),I(23,00,00,00),B(ex_aux0 ,42),I(23,00,00,00),B(ex_aux0 ,31),I(3b,01,25,00),B(ex_aux0 ,5),I(23,00,00,00),B(ex_aux0 ,43),I(23,00,00,00),B(ex_aux0 ,26),I(3b,01,25,00),B(ex_aux0 ,4),I(23,00,00,00),B(ex_aux0 ,44),I(23,00,00,00),B(ex_aux0 ,25),I(3b,01,25,00),B(ex_aux0 ,3),I(23,00,00,00),B(ex_aux0 ,45),I(23,00,00,00),B(ex_aux0 ,11),I(3b,01,25,00),B(ex_aux0 ,2),I(86,ac,00,00)};


  /* Initializations */
  eul_intern_symbol(sym_1502,"caddr");
  eul_allocate_bytevector( G001501,G001500);
  eul_intern_symbol(sym_1505,"cadr");
  eul_intern_symbol(sym_1506,"x");
  eul_intern_symbol(sym_1507,"symbolp");
  eul_intern_symbol(sym_1508,"consp");
  eul_intern_symbol(sym_1509,"car");
  eul_intern_symbol(sym_1510,"setter");
  eul_intern_symbol(sym_1511,"quote");
  eul_intern_symbol(sym_1512,"eq");
  eul_intern_symbol(sym_1513,"and");
  object_class(str_1514) = eul_static_string_class;
  eul_intern_symbol(sym_1515,"error");
  eul_intern_symbol(sym_1516,"if");
  eul_intern_symbol(sym_1517,"let");
  eul_allocate_bytevector( G001504,G001503);
  eul_allocate_bytevector( G001519,G001518);
  eul_intern_symbol(sym_1522,"cddr");
  eul_intern_symbol(sym_1523,"null");
  eul_intern_symbol(sym_1524,"or");
  object_class(str_1525) = eul_static_string_class;
  eul_allocate_bytevector( G001521,G001520);
  eul_intern_symbol(sym_1528,"cdr");
  object_class(str_1529) = eul_static_string_class;
  eul_allocate_bytevector( G001527,G001526);
  eul_allocate_bytevector( G001531,G001530);
  eul_allocate_bytevector( G001533,G001532);
  eul_allocate_bytevector( G001535,G001534);
  eul_intern_symbol(sym_1538,"get-value");
  eul_intern_symbol(sym_1539,"get-top-level-forms");
  eul_intern_symbol(sym_1540,"get-lambda-params");
  eul_intern_symbol(sym_1541,"get-body");
  eul_intern_symbol(sym_1542,"get-lambda-body");
  eul_intern_symbol(sym_1543,"get-directives");
  eul_intern_symbol(sym_1544,"get-name");
  eul_intern_symbol(sym_1545,"get-params");
  eul_allocate_bytevector( G001537,G001536);

  /* Set local bindings */
  {
    int i;
    for (i = 2; i < 10; i++)
      ex_aux0_bindings[i] = eul_nil;
  }

  ex_aux0_bindings[ 10] = sym_1502;
  ex_aux0_bindings[ 11] = G001501;
  ex_aux0_bindings[ 12] = sym_1505;
  ex_aux0_bindings[ 13] = sym_1506;
  ex_aux0_bindings[ 14] = sym_1507;
  ex_aux0_bindings[ 15] = sym_1508;
  ex_aux0_bindings[ 16] = sym_1509;
  ex_aux0_bindings[ 17] = sym_1510;
  ex_aux0_bindings[ 18] = sym_1511;
  ex_aux0_bindings[ 19] = sym_1512;
  ex_aux0_bindings[ 20] = sym_1513;
  ex_aux0_bindings[ 21] = str_1514;
  ex_aux0_bindings[ 22] = sym_1515;
  ex_aux0_bindings[ 23] = sym_1516;
  ex_aux0_bindings[ 24] = sym_1517;
  ex_aux0_bindings[ 25] = G001504;
  ex_aux0_bindings[ 26] = G001519;
  ex_aux0_bindings[ 27] = sym_1522;
  ex_aux0_bindings[ 28] = sym_1523;
  ex_aux0_bindings[ 29] = sym_1524;
  ex_aux0_bindings[ 30] = str_1525;
  ex_aux0_bindings[ 31] = G001521;
  ex_aux0_bindings[ 32] = sym_1528;
  ex_aux0_bindings[ 33] = str_1529;
  ex_aux0_bindings[ 34] = G001527;
  ex_aux0_bindings[ 35] = G001531;
  ex_aux0_bindings[ 36] = G001533;
  ex_aux0_bindings[ 37] = G001535;
  ex_aux0_bindings[ 1] = eul_nil;
  ex_aux0_bindings[ 38] = sym_1538;
  ex_aux0_bindings[ 39] = sym_1539;
  ex_aux0_bindings[ 40] = sym_1540;
  ex_aux0_bindings[ 41] = sym_1541;
  ex_aux0_bindings[ 42] = sym_1542;
  ex_aux0_bindings[ 43] = sym_1543;
  ex_aux0_bindings[ 44] = sym_1544;
  ex_aux0_bindings[ 45] = sym_1545;
  eul_allocate_lambda( ex_aux0_bindings[0], "initialize-ex-aux0", 0, G001537);

  }
}


/* eof */