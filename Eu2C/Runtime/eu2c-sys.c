/// Copyright 1994-2010 Fraunhofer ISST
/// Copyright 2010 Henry G. Weller
///-----------------------------------------------------------------------------
//  This file is part of
/// ---                           EuLisp System 'Eu2C'
///-----------------------------------------------------------------------------
//
//  Eu2C is free software: you can redistribute it and/or modify it under the
//  terms of the GNU General Public License version 2 as published by the Free
//  Software Foundation.
//
//  Eu2C is distributed in the hope that it will be useful, but WITHOUT ANY
//  WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
//  FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more
//  details.
//
//  You should have received a copy of the GNU General Public License along with
//  this program.  If not, see <http://www.gnu.org/licenses/>.
//
///-----------------------------------------------------------------------------
/// Title:
///  Library: Xalloc
///  Maintainer: Henry G. Weller
///-----------------------------------------------------------------------------
#include "eu2c-sys.h"

#ifndef LSHIFTR
#include <limits.h>
long LSHIFTR(long i, long s)
{
    return (i >> s) & (LONG_MAX >> (s - 1));
}
#endif


#ifndef ASHIFTR
long ASHIFTR(long i, long s)
{
    //***HGW return (i < 0) ? -((-i) >> s) : i >> s;
    return i >> s;
}
#endif


///-----------------------------------------------------------------------------
