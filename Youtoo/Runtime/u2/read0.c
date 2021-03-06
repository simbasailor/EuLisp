/** ----------------------------------------------------------------------- **
 **                 Generated by EuLisp System 'youtoo'
 ** ----------------------------------------------------------------------- **
 **  Title: C source file of EuLisp module read0
 **  Copyright: See file read0.em
 ** ----------------------------------------------------------------------- **/

#include "eulisp.h"


/* Imported modules */
extern void initialize_module_level_1();
extern LispRef level_1_bindings[];
extern LispRef boot_bindings[];
extern LispRef symbol_bindings[];
extern LispRef collect_bindings[];

/* Module bindings with size 15 */
LispRef read0_bindings[15];

/* Foreign functions */

/* Initialize module only once */
static int is_initialized = 0;

/* Initialize module read0 */
void initialize_module_read0()
{
  if (is_initialized) return;
  initialize_module_level_1();
  eul_fast_table_set(eul_modules,"read0",(LispRef) read0_bindings);
  is_initialized = 1;
  {
  /* Declarations */
  LispRef sym_7019, G007018, sym_7016, sym_7015, G007014, sym_7012, sym_7011, sym_7010, sym_7009, sym_7008, sym_7007, G007006, G007004;

  /* Code vector and literal definitions */
  /* Byte-vector with size: 2 is_init: 0 index: 3 binding: anonymous */
  static const void *G007003[] = {I(aa,10,86,86),I(0f,0f,45,00)};

  /* Byte-vector with size: 40 is_init: 0 index: 10 binding: anonymous */
  static const void *G007005[] = {I(aa,1b,12,1b),I(44,04,86,36),I(94,47,00,01),I(86,0f,23,00),B(read0 ,4),I(1c,0f,1f,03),I(72,1f,04,10),I(1b,73,1b,86),I(0f,1f,03,1c),I(0f,23,00,00),B(read0 ,5),I(1c,0f,1f,09),I(72,47,00,01),I(86,0f,23,00),B(read0 ,6),I(1c,0f,1b,86),I(0f,1f,03,1c),I(0f,23,00,00),B(read0 ,5),I(1c,0f,47,00),I(01,86,0f,23),B(read0 ,7),I(1c,0f,1b,86),I(0f,47,00,01),I(1c,0f,23,00),B(read0 ,5),I(1c,0f,1b,86),I(0f,1f,06,1c),I(0f,23,00,00),B(read0 ,8),I(1c,0f,1b,86),I(0f,1f,0f,1c),I(0f,1f,16,1c),I(0f,23,00,00),B(read0 ,9),I(1c,0f,1f,1b),I(11,1b,47,00),I(00,3c,01,1d),I(1c,0f,22,1c),I(45,02,00,00)};

  /* Byte-vector with size: 61 is_init: 0 index: 13 binding: match-let */
  static const void *G007013[] = {I(43,fd,46,03),I(1c,24,00,00),B(collect ,9),I(3c,01,83,1c),I(51,1b,44,4f),I(1f,03,72,1f),I(05,86,0f,23),B(read0 ,4),I(1c,0f,1f,06),I(10,1b,73,1f),I(09,86,0f,23),B(read0 ,6),I(1c,0f,1b,86),I(0f,1f,03,1c),I(0f,1f,06,1c),I(0f,23,00,00),B(read0 ,9),I(1c,0f,1b,86),I(0f,1f,0b,1c),I(0f,1b,86,0f),I(1b,1f,11,0f),I(23,00,00,00),B(read0 ,11),I(1c,0f,22,0f),I(36,8f,1f,04),I(7c,1b,44,05),I(1f,05,36,0b),I(24,00,00,00),B(symbol ,6),I(3c,00,1b,48),I(00,01,86,1b),I(48,00,00,23),B(read0 ,12),I(23,00,00,00),B(read0 ,10),I(3b,01,48,00),I(00,1f,06,47),I(00,00,3c,01),I(1f,08,7c,1b),I(44,04,86,36),I(0e,1f,09,86),I(0f,47,00,01),I(1c,0f,86,0f),I(22,01,23,00),B(read0 ,12),I(23,00,00,00),B(read0 ,3),I(3b,01,1f,0a),I(24,00,00,00),B(collect ,2),I(3c,02,1c,1c),I(24,00,00,00),B(boot ,8),I(3c,02,23,00),B(read0 ,8),I(1f,05,0f,1b),I(1f,0c,0f,1d),I(1c,0f,23,00),B(read0 ,11),I(1c,0f,22,0b),I(45,05,00,00)};

  /* Byte-vector with size: 14 is_init: 1 index: 0 binding: initialize-read0 */
  static const void *G007017[] = {I(87,25,00,00),B(read0 ,1),I(24,00,00,00),B(level_1 ,1),I(3e,0b,24,00),B(level_1 ,0),I(3c,00,21,01),I(23,00,00,00),B(read0 ,14),I(23,00,00,00),B(read0 ,13),I(3b,fd,25,00),B(read0 ,2),I(86,ac,00,00)};


  /* Initializations */
  eul_allocate_bytevector( G007004,G007003);
  eul_intern_symbol(sym_7007,"null?");
  eul_intern_symbol(sym_7008,"setq");
  eul_intern_symbol(sym_7009,"car");
  eul_intern_symbol(sym_7010,"cdr");
  eul_intern_symbol(sym_7011,"progn");
  eul_intern_symbol(sym_7012,"if");
  eul_allocate_bytevector( G007006,G007005);
  eul_intern_symbol(sym_7015,"let");
  eul_intern_symbol(sym_7016,"anonymous");
  eul_allocate_bytevector( G007014,G007013);
  eul_intern_symbol(sym_7019,"match-let");
  eul_allocate_bytevector( G007018,G007017);

  /* Set local bindings */
  {
    int i;
    for (i = 2; i < 3; i++)
      read0_bindings[i] = eul_nil;
  }

  read0_bindings[ 3] = G007004;
  read0_bindings[ 4] = sym_7007;
  read0_bindings[ 5] = sym_7008;
  read0_bindings[ 6] = sym_7009;
  read0_bindings[ 7] = sym_7010;
  read0_bindings[ 8] = sym_7011;
  read0_bindings[ 9] = sym_7012;
  read0_bindings[ 10] = G007006;
  read0_bindings[ 11] = sym_7015;
  read0_bindings[ 12] = sym_7016;
  read0_bindings[ 13] = G007014;
  read0_bindings[ 1] = eul_nil;
  read0_bindings[ 14] = sym_7019;
  eul_allocate_lambda( read0_bindings[0], "initialize-read0", 0, G007018);

  }
}


/* eof */
