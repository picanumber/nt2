//==============================================================================
//         Copyright 2003 - 2011 LASMEA UMR 6602 CNRS/Univ. Clermont II         
//         Copyright 2009 - 2011 LRI    UMR 8623 CNRS/Univ Paris Sud XI         
//                                                                              
//          Distributed under the Boost Software License, Version 1.0.          
//                 See accompanying file LICENSE.txt or copy at                 
//                     http://www.boost.org/LICENSE_1_0.txt                     
//==============================================================================
#ifndef BOOST_SIMD_TOOLBOX_REDUCTION_FUNCTIONS_SIMD_SSE_SSE4_1_ANY_HPP_INCLUDED
#define BOOST_SIMD_TOOLBOX_REDUCTION_FUNCTIONS_SIMD_SSE_SSE4_1_ANY_HPP_INCLUDED
#ifdef BOOST_SIMD_HAS_SSE4_1_SUPPORT
#include <boost/simd/sdk/simd/logical.hpp>
#include <boost/dispatch/meta/as_integer.hpp>
#include <boost/simd/include/constants/allbits.hpp>
#include <boost/simd/include/functions/abs.hpp>

namespace boost { namespace simd { namespace ext
{
  BOOST_SIMD_FUNCTOR_IMPLEMENTATION(boost::simd::tag::any_, boost::simd::tag::sse4_1_,
                        (A0),
                        ((simd_<arithmetic_<A0>,boost::simd::tag::sse_>))
                       )
  {
    typedef typename meta::scalar_of<A0>::type sA0; 
    typedef typename meta::as_logical<sA0>::type result_type;
    BOOST_SIMD_FUNCTOR_CALL_REPEAT(1)
    {
      return result_type(!result_type(_mm_test_all_zeros(a0, Allbits<A0>())));
    }
  };
  
  BOOST_SIMD_FUNCTOR_IMPLEMENTATION(boost::simd::tag::any_, boost::simd::tag::sse4_1_,
                        (A0),
                        ((simd_<floating_<A0>,boost::simd::tag::sse_>))
                       )
  {
    typedef typename meta::scalar_of<A0>::type sA0; 
    typedef typename meta::as_logical<sA0>::type result_type;
    BOOST_SIMD_FUNCTOR_CALL(1)
    {
      typedef typename dispatch::meta::as_integer<A0>::type iA0; 
      return result_type(boost::simd::any(bitwise_cast<iA0>(boost::simd::abs(a0))));
    }
  };
} } }  
#endif
#endif
