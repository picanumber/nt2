//==============================================================================
//         Copyright 2003 - 2012 LASMEA UMR 6602 CNRS/Univ. Clermont II
//         Copyright 2009 - 2012 LRI    UMR 8623 CNRS/Univ Paris Sud XI
//
//          Distributed under the Boost Software License, Version 1.0.
//                 See accompanying file LICENSE.txt or copy at
//                     http://www.boost.org/LICENSE_1_0.txt
//==============================================================================
#ifndef BOOST_SIMD_SWAR_FUNCTIONS_SIMD_SSE_SSE_INTERLEAVE_ODD_HPP_INCLUDED
#define BOOST_SIMD_SWAR_FUNCTIONS_SIMD_SSE_SSE_INTERLEAVE_ODD_HPP_INCLUDED
#ifdef BOOST_SIMD_HAS_SSE_SUPPORT

#include <boost/simd/swar/functions/interleave_odd.hpp>
#include <boost/simd/swar/functions/details/shuffle.hpp>

namespace boost { namespace simd { namespace ext
{
  BOOST_DISPATCH_IMPLEMENT         ( interleave_odd_
                                   , boost::simd::tag::sse_
                                   , (A0)(A1)
                                   , ((simd_<single_<A0>,boost::simd::tag::sse_>))
                                     ((simd_<single_<A1>,boost::simd::tag::sse_>))
                                   )
  {
    typedef A0 result_type;

    BOOST_FORCEINLINE result_type operator()(__m128 const a0, __m128 const a1) const
    {
      return _mm_unpackhi_ps( details::shuffle<1, 3, 1, 3>(a0,a0)
                            , details::shuffle<1, 3, 1, 3>(a1,a1)
                            );
    }
  };

} } }

#endif
#endif