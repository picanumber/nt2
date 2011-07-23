/*******************************************************************************
 *         Copyright 2003 & onward LASMEA UMR 6602 CNRS/Univ. Clermont II
 *         Copyright 2009 & onward LRI    UMR 8623 CNRS/Univ Paris Sud XI
 *
 *          Distributed under the Boost Software License, Version 1.0.
 *                 See accompanying file LICENSE.txt or copy at
 *                     http://www.boost.org/LICENSE_1_0.txt
 ******************************************************************************/
#ifndef NT2_SDK_SIMD_EXTENSIONS_SSE_XOP_HPP_INCLUDED
#define NT2_SDK_SIMD_EXTENSIONS_SSE_XOP_HPP_INCLUDED

#if defined(__XOP__)
#  ifndef NT2_HAS_XOP_SUPPORT
#    define NT2_HAS_XOP_SUPPORT
#  endif
#elif defined(NT2_HAS_XOP_SUPPORT) && !defined(_MSC_VER)
#  undef NT2_HAS_XOP_SUPPORT
#endif

#if defined(NT2_HAS_XOP_SUPPORT) && !defined(NT2_HAS_FMA4_SUPPORT)
#  define NT2_HAS_FMA4_SUPPORT
#endif

#if !defined(NT2_SIMD_DETECTED) && defined(NT2_HAS_XOP_SUPPORT)

////////////////////////////////////////////////////////////////////////////////
// Report XOP discovery
////////////////////////////////////////////////////////////////////////////////
NT2_WARNING(XOP SIMD extension detected)

////////////////////////////////////////////////////////////////////////////////
// XOP extensions flags
////////////////////////////////////////////////////////////////////////////////
#define NT2_SIMD_DETECTED
#define NT2_SIMD_XOP
#define NT2_SIMD_SSE_FAMILY
#define NT2_SIMD_STRING             "XOP"
#define NT2_SIMD_STRING_LIST        "SSE2 SSE3 SSE4A SSSE3 SSE4_1 SSE4_2 AVX FMA4 XOP"
#define NT2_SIMD_BYTES              32
#define NT2_SIMD_BITS               256
#define NT2_SIMD_CARDINALS          (2)(4)(8)(16)(32)
#define NT2_SIMD_TAG_SEQ            (::nt2::tag::xop_)(::nt2::tag::sse_)
#define NT2_SIMD_DEFAULT_EXTENSION  ::nt2::tag::xop_
#define NT2_SIMD_DEFAULT_SITE       ::nt2::tag::xop_

#include <immintrin.h>

#include <nt2/sdk/simd/extensions/meta/sse.hpp>
#include <nt2/sdk/simd/extensions/meta/xop.hpp>

#endif
#endif
