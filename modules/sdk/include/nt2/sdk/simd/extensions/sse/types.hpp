/*******************************************************************************
 *         Copyright 2003 & onward LASMEA UMR 6602 CNRS/Univ. Clermont II
 *         Copyright 2009 & onward LRI    UMR 8623 CNRS/Univ Paris Sud XI
 *
 *          Distributed under the Boost Software License, Version 1.0.
 *                 See accompanying file LICENSE.txt or copy at
 *                     http://www.boost.org/LICENSE_1_0.txt
 ******************************************************************************/
#ifndef NT2_SDK_SIMD_EXTENSIONS_SSE_TYPES_HPP_INCLUDED
#define NT2_SDK_SIMD_EXTENSIONS_SSE_TYPES_HPP_INCLUDED

#include <nt2/sdk/config/type_lists.hpp>

#define NT2_SIMD_TYPES  (double)(nt2::uint64_t)(nt2::int64_t) \
                        (float)(nt2::uint32_t)(nt2::int32_t)  \
                        (nt2::uint16_t)(nt2::int16_t)         \
                        (nt2::uint8_t)(nt2::int8_t)           \
/**/

#define NT2_SIMD_REAL_TYPES (double)(float)
/**/

#define NT2_SIMD_UNSIGNED_TYPES (nt2::uint64_t)(nt2::uint32_t)  \
                                (nt2::uint16_t)(nt2::uint8_t)   \
/**/

#define NT2_SIMD_INTEGRAL_TYPES (nt2::uint64_t)(nt2::uint32_t)  \
                                (nt2::uint16_t)(nt2::uint8_t)   \
                                (nt2::int64_t)(nt2::int32_t)    \
                                (nt2::int16_t)(nt2::int8_t)     \
/**/

#define NT2_SIMD_SIGNED_TYPES (double)(nt2::int64_t)(nt2::int32_t)  \
                              (float)(nt2::int16_t)(nt2::int8_t)    \
/**/

#define NT2_SIMD_INTEGRAL_UNSIGNED_TYPES  (nt2::uint64_t)(nt2::uint32_t)  \
                                          (nt2::uint16_t)(nt2::uint8_t)   \
/**/

#define NT2_SIMD_INTEGRAL_SIGNED_TYPES  (nt2::int64_t)(nt2::int32_t)  \
                                        (nt2::int16_t)(nt2::int8_t)   \
/**/

#define NT2_SIMD_REAL_CONVERTIBLE_TYPES  (nt2::int64_t)(nt2::int32_t)   \
                                         (nt2::uint64_t)(nt2::uint32_t) \
                                         (double)(float)                \
/**/

#define NT2_SIMD_INT_CONVERT_TYPES  (nt2::int32_t)(nt2::int64_t) \
/**/

#define NT2_SIMD_UINT_CONVERT_TYPES  (nt2::uint32_t)(nt2::uint64_t) \
/**/


#define NT2_SIMD_SIGNED_INT_GT_8  (nt2::int16_t)(nt2::int32_t)(nt2::int64_t) \
/**/

#define NT2_SIMD_UNSIGNED_INT_GT_8  (nt2::int16_t)(nt2::int32_t)(nt2::int64_t) \
/**/


#define NT2_SIMD__INT_CONVERT_TYPES  (nt2::int32_t)(nt2::int64_t) \
/**/

#define NT2_SIMD__UINT_CONVERT_TYPES  (nt2::uint32_t)(nt2::uint64_t) \
/**/

#define NT2_SIMD_SIGNED_INT_GT_8  (nt2::int16_t)(nt2::int32_t)(nt2::int64_t) \
/**/

#define NT2_SIMD_UNSIGNED_INT_GT_8  (nt2::int16_t)(nt2::int32_t)(nt2::int64_t) \
/**/

#define NT2_SIMD_INT_64_TYPES (nt2::int64_t)(nt2::uint64_t) \
/**/

#define NT2_SIMD_INT_32_TYPES  (nt2::int32_t)(nt2::uint32_t) \
/**/

#define NT2_SIMD_INT_16_TYPES  (nt2::int16_t)(nt2::uint16_t) \
/**/

#define NT2_SIMD_INT_8_TYPES  (nt2::int8_t)(nt2::uint8_t) \
/**/

#define NT2_SIMD_GROUPABLE_TYPES  (nt2::int16_t)(nt2::uint16_t)(nt2::int32_t)(nt2::uint32_t)(nt2::int64_t)(nt2::uint64_t)(double)\
/**/

#define NT2_SIMD_SPLITABLE_TYPES  (nt2::int8_t)(nt2::uint8_t)(nt2::int16_t)(nt2::uint16_t)(nt2::int32_t)(nt2::uint32_t)(float) \
/**/

#define NT2_SIMD_INT_GT8_TYPES  (nt2::int16_t)(nt2::uint16_t)(nt2::int32_t)(nt2::uint32_t)(nt2::int64_t)(nt2::uint64_t)\
/**/

#define NT2_SIMD_SIGNED_INT_GT_8_TYPES  (nt2::int16_t)(nt2::int32_t)(nt2::int64_t) \
/**/

#define NT2_SIMD_UNSIGNED_INT_GT_8_TYPES  (nt2::uint16_t)(nt2::uint32_t)(nt2::uint64_t) \
/**/

#define NT2_SIMD_LT64_TYPES  (nt2::int16_t)(nt2::uint16_t)(nt2::int32_t)(nt2::uint32_t)(nt2::int8_t)(nt2::uint8_t)(float) \
/**/

#define NT2_SIMD_GT16_TYPES  (nt2::int32_t)(nt2::uint32_t)(nt2::int64_t)(nt2::uint64_t)(float)(double) \
/**/

#define NT2_SIMD_SIGNED_INT_GT_16_TYPES  (nt2::int32_t)(nt2::int64_t) \
/**/

#define NT2_SIMD_UNSIGNED_INT_GT_16_TYPES  (nt2::uint32_t)(nt2::uint64_t) \
/**/

#endif
