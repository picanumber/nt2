/*******************************************************************************
 *         Copyright 2003 & onward LASMEA UMR 6602 CNRS/Univ. Clermont II
 *         Copyright 2009 & onward LRI    UMR 8623 CNRS/Univ Paris Sud XI
 *
 *          Distributed under the Boost Software License, Version 1.0.
 *                 See accompanying file LICENSE.txt or copy at
 *                     http://www.boost.org/LICENSE_1_0.txt
 ******************************************************************************/
#ifndef NT2_SDK_SIMD_EXTENSIONS_VMX_ALTIVEC_HPP_INCLUDED
#define NT2_SDK_SIMD_EXTENSIONS_VMX_ALTIVEC_HPP_INCLUDED

#include <nt2/sdk/error/warning.hpp>

#if defined(__ALTIVEC__) || defined(__VEC__)
#  ifndef NT2_HAS_VMX_SUPPORT
#    define NT2_HAS_VMX_SUPPORT
#  endif
#elif defined(NT2_HAS_VMX_SUPPORT)
#  undef NT2_HAS_VMX_SUPPORT
#endif

#if !defined(NT2_SIMD_DETECTED) && defined(NT2_HAS_VMX_SUPPORT)

////////////////////////////////////////////////////////////////////////////////
// Report discovery of Altivec support
////////////////////////////////////////////////////////////////////////////////
NT2_WARNING(AltiVec SIMD extension detected)

////////////////////////////////////////////////////////////////////////////////
// Include the proper intrinsic include. Depending of the option used by the
// compiler (-faltivec or -maltivec), we need to include altivec.h or not.
////////////////////////////////////////////////////////////////////////////////
#if !defined(__APPLE_CC__) || __APPLE_CC__ <= 1 || __GNUC__ >= 4
#include <altivec.h>
#endif

#ifdef bool
#undef bool
#endif
#ifdef pixel
#undef pixel
#endif
#ifdef vector
#undef vector
#endif

#if defined(__IBMCPP__) || defined(__MWERKS__)
#define __bool bool
#endif

////////////////////////////////////////////////////////////////////////////////
// Altivec PPC extensions flags
////////////////////////////////////////////////////////////////////////////////
#define NT2_SIMD_DETECTED
#define NT2_SIMD_ALTIVEC
#define NT2_SIMD_STRING             "Altivec"
#define NT2_SIMD_STRING_LIST        "Altivec"
#define NT2_SIMD_VMX_FAMILY
#define NT2_SIMD_BYTES              16
#define NT2_SIMD_BITS               128
#define NT2_SIMD_CARDINALS          (4)(8)(16)
#define NT2_SIMD_TAG_SEQ            (::nt2::tag::altivec_)
#define NT2_SIMD_DEFAULT_EXTENSION  ::nt2::tag::altivec_
#define NT2_SIMD_DEFAULT_SITE       ::nt2::tag::altivec_

#include <nt2/sdk/simd/extensions/meta/altivec.hpp>

#endif
#endif
