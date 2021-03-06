/// Copyright 1996 A. Kind & University of Bath
/// Copyright 2010 Henry G. Weller
///-----------------------------------------------------------------------------
//  This file is part of
/// ---                         EuLisp System 'Youtoo'
///-----------------------------------------------------------------------------
//
//  Youtoo is free software: you can redistribute it and/or modify it under the
//  terms of the GNU General Public License version 2 as published by the Free
//  Software Foundation.
//
//  Youtoo is distributed in the hope that it will be useful, but WITHOUT ANY
//  WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
//  FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more
//  details.
//
//  You should have received a copy of the GNU General Public License along with
//  this program.  If not, see <http://www.gnu.org/licenses/>.
//
///-----------------------------------------------------------------------------
/// Title: fast method caching
///  Library: eulvm (Bytecode Interpreter -- Eutopia)
///  Authors: Andreas Kind
///  Maintainer: Henry G. Weller
///-----------------------------------------------------------------------------
#ifndef CACHE_H
#define CACHE_H

///-----------------------------------------------------------------------------

#define GF_GET_VALUE_DOMAIN(loc, gf_dom, n)                                    \
    {                                                                          \
        eul_allocate_object(loc, PGLOBAL(glob_vector_class), n, eul_nil);      \
        for (int i=0; i<n; i++)                                                \
        {                                                                      \
            if (slot_ref(gf_dom, i) != eul_nil)                                \
            {                                                                  \
                LispRef arg;                                                   \
                REFVAL(reg_arg_count - i - 1, arg);                            \
                slot_ref(loc, i) = eul_class_of(arg);                          \
            }                                                                  \
        }                                                                      \
    }

#define GF_GET_VALUE_DOMAIN0(loc)                                              \
    eul_allocate_object(loc, PGLOBAL(glob_vector_class), 0, eul_nil)

#define GF_GET_VALUE_DOMAIN1(loc)                                              \
    eul_allocate_object(loc, PGLOBAL(glob_vector_class), 1, eul_nil);          \
    slot_ref(loc, 0) = eul_class_of(c_arg1)

#define GF_GET_VALUE_DOMAIN2(loc)                                              \
    eul_allocate_object(loc, PGLOBAL(glob_vector_class), 2, eul_nil);          \
    slot_ref(loc, 0) = eul_class_of(c_arg1);                                   \
    slot_ref(loc, 1) = eul_class_of(c_arg2)

#define GF_GET_VALUE_DOMAIN3(loc)                                              \
    eul_allocate_object(loc, PGLOBAL(glob_vector_class), 3, eul_nil);          \
    slot_ref(loc, 0) = eul_class_of(c_arg1);                                   \
    slot_ref(loc, 1) = eul_class_of(c_arg2);                                   \
    slot_ref(loc, 2) = eul_class_of(c_arg3)

#define GF_GET_VALUE_DOMAIN4(loc)                                              \
    eul_allocate_object(loc, PGLOBAL(glob_vector_class), 4, eul_nil);          \
    slot_ref(loc, 0) = eul_class_of(c_arg1);                                   \
    slot_ref(loc, 1) = eul_class_of(c_arg2);                                   \
    slot_ref(loc, 2) = eul_class_of(c_arg3);                                   \
    slot_ref(loc, 3) = eul_class_of(c_arg4)

#define GF_GET_VALUE_DOMAIN5(loc)                                              \
    eul_allocate_object(loc, PGLOBAL(glob_vector_class), 5, eul_nil);          \
    slot_ref(loc, 0) = eul_class_of(c_arg1);                                   \
    slot_ref(loc, 1) = eul_class_of(c_arg2);                                   \
    slot_ref(loc, 2) = eul_class_of(c_arg3);                                   \
    slot_ref(loc, 3) = eul_class_of(c_arg4);                                   \
    slot_ref(loc, 4) = eul_class_of(c_arg5)

#define GF_GET_METHOD_CACHE(loc, n, gf, min)                                   \
    {                                                                          \
        loc = GF_METHOD_CACHE(gf);                                             \
        if (loc == eul_nil)                                                    \
        {                                                                      \
            /* Allocate method cache */                                        \
            n = min;                                                           \
            eul_allocate_object                                                \
            (                                                                  \
                loc,                                                           \
                PGLOBAL(glob_vector_class),                                    \
                (min + GF_METHOD_CACHE_HEADER_SIZE),                           \
                eul_nil                                                        \
            );                                                                 \
            GF_METHOD_CACHE(gf) = loc;                                         \
        }                                                                      \
        else                                                                   \
        {                                                                      \
            n = eul_fpi_as_c_int(object_size(loc))                             \
              - GF_METHOD_CACHE_HEADER_SIZE;                                   \
        }                                                                      \
    }

#define GF_SIG_EQ(res, dom1, dom2, n)                                          \
    {                                                                          \
        res = 1;                                                               \
        for (int i=0; i<n; i++)                                                \
        {                                                                      \
            if (slot_ref(dom1, i) != eul_nil)                                  \
            {                                                                  \
                if (slot_ref(dom1, i) != slot_ref(dom2, i))                    \
                {                                                              \
                    res = 0;                                                   \
                    break;                                                     \
                }                                                              \
            }                                                                  \
        }                                                                      \
    }                                                                          \


///-----------------------------------------------------------------------------
/// Method caching using reg_pc to hash
///   vec: method cache
///   n: cache size (without header, i.e. val_com, i)
///   key: arg to hash function
///   i: cache index
///   k: first hash index
///   m: gf domain arity
///-----------------------------------------------------------------------------

#define GF_DEFAULT_METHOD_CACHE_SIZE 4
#define GF_METHOD_CACHE_HEADER_SIZE 2
#define GF_METHOD_CACHE_VALUE_DOMAIN(vec) slot_ref(vec, 0)
#define GF_METHOD_CACHE_INDEX(vec) slot_ref(vec, 1)

#define FAST_METHOD_LOOKUP(gf, key, next_methods)                              \
    {                                                                          \
        WHEN_INSTRUMENTED(int probe_depth=0; )                                 \
                                                                               \
        LispRef gf_dom = GF_DOMAIN(gf);                                        \
        ptrInt m = eul_fpi_as_c_int(object_size(gf_dom));                      \
        LispRef vec, val_dom;                                                  \
        ptrInt n;                                                              \
        GF_GET_METHOD_CACHE(vec, n, gf, GF_DEFAULT_METHOD_CACHE_SIZE);         \
        GF_GET_VALUE_DOMAIN(val_dom, gf_dom, m);                               \
        ptrInt i = (((ptrInt) key)&(n - 1)) + GF_METHOD_CACHE_HEADER_SIZE;     \
        ptrInt k = i;                                                          \
                                                                               \
        ptrInt res;                                                            \
        LispRef tab_val_dom, meth_funs, entry=eul_nil;                         \
                                                                               \
        while (1)                                                              \
        {                                                                      \
            WHEN_INSTRUMENTED(probe_depth++; )                                 \
            if ((entry = slot_ref(vec, i)) != eul_nil)                         \
            {                                                                  \
                tab_val_dom = TABLE_ENTRY_KEY(entry);                          \
                GF_SIG_EQ(res, tab_val_dom, val_dom, m);                       \
                if (res)                                                       \
                {                                                              \
                    break;                                                     \
                }                                                              \
                i++;                                                           \
            }                                                                  \
            else                                                               \
            {                                                                  \
                break;                                                         \
            }                                                                  \
            if (i == n + GF_METHOD_CACHE_HEADER_SIZE)                          \
            {                                                                  \
                i = 0 + GF_METHOD_CACHE_HEADER_SIZE;                           \
            }                                                                  \
            if (i == k)                                                        \
            {                                                                  \
                eul_allocate_object                                            \
                (                                                              \
                    vec,                                                       \
                    PGLOBAL(glob_vector_class),                                \
                    (2*n) + GF_METHOD_CACHE_HEADER_SIZE,                       \
                    eul_nil                                                    \
                );                                                             \
                GF_METHOD_CACHE(gf) = vec;                                     \
                WHEN_INSTRUMENTED(eul_gf_cache_exts++; )                       \
                i = (((ptrInt) key)&((2*n) - 1)) + GF_METHOD_CACHE_HEADER_SIZE;  \
                entry = eul_nil;                                               \
                break;                                                         \
            }                                                                  \
        }                                                                      \
        if (entry != eul_nil)                                                  \
        {                                                                      \
            WHEN_INSTRUMENTED(instrument_cache("fast", "hit", gf, key); )      \
            meth_funs = TABLE_ENTRY_VALUE(entry);                              \
            gf = eul_car(meth_funs);                                           \
            next_methods = eul_cdr(meth_funs);                                 \
        }                                                                      \
        else                                                                   \
        {                                                                      \
            WHEN_INSTRUMENTED(eul_gf_cache_misses++; )                         \
            WHEN_INSTRUMENTED(instrument_cache("fast", "miss", gf, key); )     \
            GF_METHOD_CACHE_VALUE_DOMAIN(vec) = val_dom;                       \
            GF_METHOD_CACHE_INDEX(vec) = c_int_as_eul_fpi(i);                  \
            gf = GF_DISC_FN(gf);                                               \
        }                                                                      \
    }

#define SLOW_METHOD_LOOKUP(gf, next_methods)                                   \
    {                                                                          \
        ptrInt i, n, m, k, res;                                                \
        LispRef vec, gf_dom, val_dom, tab_val_dom, meth_funs, entry=eul_nil;   \
        WHEN_INSTRUMENTED(int probe_depth=0; )                                 \
                                                                               \
        gf_dom = GF_DOMAIN(gf);                                                \
        m = eul_fpi_as_c_int(object_size(gf_dom));                             \
        GF_GET_METHOD_CACHE(vec, n, gf, GF_DEFAULT_METHOD_CACHE_SIZE);         \
        GF_GET_VALUE_DOMAIN(val_dom, gf_dom, m);                               \
        if (GF_METHOD_CACHE_INDEX(vec) == eul_nil)                             \
        {                                                                      \
            k = i = 0 + GF_METHOD_CACHE_HEADER_SIZE;                           \
        }                                                                      \
        else                                                                   \
        {                                                                      \
            i = eul_fpi_as_c_int(GF_METHOD_CACHE_INDEX(vec));                  \
            /* First check the entry previously used */                        \
            if ((entry = slot_ref(vec, i)) != eul_nil)                         \
            {                                                                  \
                tab_val_dom = TABLE_ENTRY_KEY(entry);                          \
                GF_SIG_EQ(res, tab_val_dom, val_dom, m);                       \
                if (res)                                                       \
                {                                                              \
                    goto goon;                                                 \
                }                                                              \
                k = i = 0 + GF_METHOD_CACHE_HEADER_SIZE;                       \
            }                                                                  \
        }                                                                      \
        while (1)                                                              \
        {                                                                      \
            WHEN_INSTRUMENTED(probe_depth++; )                                 \
            if ((entry = slot_ref(vec, i)) != eul_nil)                         \
            {                                                                  \
                tab_val_dom = TABLE_ENTRY_KEY(entry);                          \
                GF_SIG_EQ(res, tab_val_dom, val_dom, m);                       \
                if (res)                                                       \
                {                                                              \
                    break;                                                     \
                }                                                              \
                i++;                                                           \
            }                                                                  \
            else                                                               \
            {                                                                  \
                break;                                                         \
            }                                                                  \
            if (i == n + GF_METHOD_CACHE_HEADER_SIZE)                          \
            {                                                                  \
                i = 0 + GF_METHOD_CACHE_HEADER_SIZE;                           \
            }                                                                  \
            if (i == k)                                                        \
            {                                                                  \
                WHEN_INSTRUMENTED(eul_gf_cache_exts++; )                       \
                eul_allocate_object(vec, PGLOBAL(glob_vector_class),           \
                (2*n) + GF_METHOD_CACHE_HEADER_SIZE, eul_nil);                 \
                GF_METHOD_CACHE(gf) = vec;                                     \
                i = 0 + GF_METHOD_CACHE_HEADER_SIZE;                           \
                entry = eul_nil;                                               \
                break;                                                         \
            }                                                                  \
        }                                                                      \
goon:                                                                          \
        GF_METHOD_CACHE_INDEX(vec) = c_int_as_eul_fpi(i);                      \
        if (entry != eul_nil)                                                  \
        {                                                                      \
            WHEN_INSTRUMENTED(instrument_cache("slow", "hit", gf, key); )      \
            meth_funs = TABLE_ENTRY_VALUE(entry);                              \
            gf = eul_car(meth_funs);                                           \
            next_methods = eul_cdr(meth_funs);                                 \
        }                                                                      \
        else                                                                   \
        {                                                                      \
            WHEN_INSTRUMENTED(eul_gf_cache_misses++; )                         \
            WHEN_INSTRUMENTED(instrument_cache("slow", "miss", gf, key); )     \
            GF_METHOD_CACHE_VALUE_DOMAIN(vec) = val_dom;                       \
            gf = GF_DISC_FN(gf);                                               \
        }                                                                      \
    }

#define FULL_METHOD_LOOKUP(gf, key)                                            \
    {                                                                          \
        LispRef vec, val_dom;                                                  \
        ptrInt n;                                                              \
        ptrInt i = key + GF_METHOD_CACHE_HEADER_SIZE;                          \
        LispRef gf_dom = GF_DOMAIN(gf);                                        \
        ptrInt m = eul_fpi_as_c_int(object_size(gf_dom));                      \
        GF_GET_METHOD_CACHE(vec, n, gf, 1);                                    \
        /* fprintf(stderr, "dummy cache: "); fprint_ref(stderr, vec); */       \
        GF_GET_VALUE_DOMAIN(val_dom, gf_dom, m);                               \
        i = key + GF_METHOD_CACHE_HEADER_SIZE;                                 \
        GF_METHOD_CACHE_VALUE_DOMAIN(vec) = val_dom;                           \
        GF_METHOD_CACHE_INDEX(vec) = c_int_as_eul_fpi(i);                      \
        gf = GF_DISC_FN(gf);                                                   \
    }

#define EXTERNAL_FAST_METHOD_LOOKUP(gf, m, key, next_methods)                  \
    {                                                                          \
        LispRef vec, val_dom, entry, tab_val_dom, meth_funs;                   \
        ptrInt n, i, res=0;                                                    \
        i = key + GF_METHOD_CACHE_HEADER_SIZE;                                 \
        GF_GET_METHOD_CACHE(vec, n, gf, GF_DEFAULT_METHOD_CACHE_SIZE);         \
        GF_GET_VALUE_DOMAIN##m(val_dom);                                       \
        if ((entry = slot_ref(vec, i)) != eul_nil)                             \
        {                                                                      \
            tab_val_dom = TABLE_ENTRY_KEY(entry);                              \
            GF_SIG_EQ(res, tab_val_dom, val_dom, m);                           \
            if (res)                                                           \
            {                                                                  \
                meth_funs = TABLE_ENTRY_VALUE(entry);                          \
                gf = eul_car(meth_funs);                                       \
                next_methods = eul_cdr(meth_funs);                             \
            }                                                                  \
        }                                                                      \
        if (!res)                                                              \
        {                                                                      \
            GF_METHOD_CACHE_VALUE_DOMAIN(vec) = val_dom;                       \
            GF_METHOD_CACHE_INDEX(vec) = c_int_as_eul_fpi(i);                  \
            gf = GF_DISC_FN(gf);                                               \
        }                                                                      \
    }

#define instrument_cache(key1, key2, gf, hash_key)                             \
    {                                                                          \
        ptrInt cache_entries = 0;                                              \
        ptrInt ii = GF_METHOD_CACHE_HEADER_SIZE;                               \
        LispRef cache = GF_METHOD_CACHE(gf);                                   \
        LispRef gf_name = LAMBDA_NAME(gf);                                     \
        ptrInt nn = eul_fpi_as_c_int(object_size(cache))                       \
                  - GF_METHOD_CACHE_HEADER_SIZE;                               \
        ptrInt arity = eul_fpi_as_c_int(object_size(val_dom));                 \
                                                                               \
        while (ii < nn + GF_METHOD_CACHE_HEADER_SIZE)                          \
        {                                                                      \
            if (slot_ref(cache, ii++) != eul_nil)                              \
            {                                                                  \
                cache_entries++;                                               \
            }                                                                  \
        }                                                                      \
        fprintf(stderr, "%s %s ", key1, key2);                                 \
        if (eul_is_cons(gf_name))                                              \
        {                                                                      \
            fprint_ref(stderr, eul_car(gf_name));                              \
            fprint_ref(stderr, eul_car(eul_cdr(gf_name)));                     \
        }                                                                      \
        else                                                                   \
        {                                                                      \
            fprint_ref(stderr, gf_name);                                       \
        }                                                                      \
        fprintf(stderr, " %d %d ", eul_gf_calls, hash_key);                    \
        for (ii=0; ii<arity; ii++)                                             \
        {                                                                      \
            fprint_ref(stderr, CLASS_NAME(slot_ref(val_dom, ii)));             \
        }                                                                      \
        fprintf(stderr, " %d %d %d %d %d %d\n",                                \
        m, cache_entries, nn, eul_gf_cache_exts, eul_gf_cache_misses,          \
        probe_depth - 1);                                                      \
    }

///-----------------------------------------------------------------------------
#endif // CACHE_H
///-----------------------------------------------------------------------------
