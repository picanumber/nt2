//==============================================================================
//         Copyright 2003 - 2012   LASMEA UMR 6602 CNRS/Univ. Clermont II
//         Copyright 2009 - 2012   LRI    UMR 8623 CNRS/Univ Paris Sud XI
//
//          Distributed under the Boost Software License, Version 1.0.
//                 See accompanying file LICENSE.txt or copy at
//                     http://www.boost.org/LICENSE_1_0.txt
//==============================================================================
#ifndef BOOST_SIMD_ARITHMETIC_FUNCTIONS_FAST_IROUND2EVEN_HPP_INCLUDED
#define BOOST_SIMD_ARITHMETIC_FUNCTIONS_FAST_IROUND2EVEN_HPP_INCLUDED
#include <boost/simd/include/functor.hpp>
#include <boost/dispatch/include/functor.hpp>

namespace boost { namespace simd { namespace tag
  {
   /*!
      @brief  fast_iround2even generic tag

      Represents the fast_iround2even function in generic contexts.

      @par Models:
      Hierarchy
    **/
    struct fast_iround2even_ : ext::elementwise_<fast_iround2even_> { typedef ext::elementwise_<fast_iround2even_> parent;   template<class... Args>   static BOOST_FORCEINLINE BOOST_AUTO_DECLTYPE dispatch(Args&&... args)   BOOST_AUTO_DECLTYPE_BODY( dispatching_fast_iround2even_( ext::adl_helper(), static_cast<Args&&>(args)... ) ) };
  }
  namespace ext
  {
   template<class Site>
   BOOST_FORCEINLINE generic_dispatcher<tag::fast_iround2even_, Site> dispatching_fast_iround2even_(adl_helper, boost::dispatch::meta::unknown_<Site>, ...)
   {
     return generic_dispatcher<tag::fast_iround2even_, Site>();
   }
   template<class... Args>
   struct impl_fast_iround2even_;
  }
  /*!
    Convert to integer by rounding using round2even.
    large values can be not correctly converted
    The invalid entries lead to undefined results

    @par semantic:
    For any given value @c x of type @c T:

    @code
    as_integer<T> r = fast_iround2even(x);
    @endcode

    is similar to:

    @code
    as_integer<T> r = toint(round2even(a0));
    @endcode

    @param  a0

    @return an integral value of the integral type associated to the input.


  **/
  BOOST_DISPATCH_FUNCTION_IMPLEMENTATION(tag::fast_iround2even_, fast_iround2even, 1)
} }

#endif

