//==============================================================================
//         Copyright 2003 - 2011   LASMEA UMR 6602 CNRS/Univ. Clermont II
//         Copyright 2009 - 2011   LRI    UMR 8623 CNRS/Univ Paris Sud XI
//
//          Distributed under the Boost Software License, Version 1.0.
//                 See accompanying file LICENSE.txt or copy at
//                     http://www.boost.org/LICENSE_1_0.txt
//==============================================================================
#ifndef BOOST_SIMD_CONSTANT_CONSTANTS_PIO_2_HPP_INCLUDED
#define BOOST_SIMD_CONSTANT_CONSTANTS_PIO_2_HPP_INCLUDED

#include <boost/simd/include/functor.hpp>
#include <boost/simd/constant/register.hpp>
#include <boost/simd/constant/hierarchy.hpp>


namespace boost { namespace simd
{
  namespace tag
  {
   /*!
     @brief Pio_2 generic tag

     Represents the Pio_2 constant in generic contexts.

     @par Models:
        Hierarchy
   **/
    BOOST_SIMD_CONSTANT_REGISTER( Pio_2, double, 2, 0x3fc90fdb, 0x3ff921fb54442d18ll)
  }
  namespace ext
  {
   template<class Site>
   BOOST_FORCEINLINE generic_dispatcher<tag::Pio_2, Site> dispatching_Pio_2(adl_helper, boost::dispatch::meta::unknown_<Site>, ...)
   {
     return generic_dispatcher<tag::Pio_2, Site>();
   }
   template<class... Args>
   struct impl_Pio_2;
  }
  /*!
    Generates value \f$\frac\pi{2}\f$.

    @par Semantic:

    @code
    T r = Pio_2<T>();
    @endcode

    is similar to:

    @code
    T r = T(2*atan(1));
    @endcode
  **/
  BOOST_SIMD_CONSTANT_IMPLEMENTATION(boost::simd::tag::Pio_2, Pio_2)
} }

#include <boost/simd/constant/common.hpp>

#endif
