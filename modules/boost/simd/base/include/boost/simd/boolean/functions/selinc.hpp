//==============================================================================
//         Copyright 2003 - 2012   LASMEA UMR 6602 CNRS/Univ. Clermont II
//         Copyright 2009 - 2012   LRI    UMR 8623 CNRS/Univ Paris Sud XI
//
//          Distributed under the Boost Software License, Version 1.0.
//                 See accompanying file LICENSE.txt or copy at
//                     http://www.boost.org/LICENSE_1_0.txt
//==============================================================================
#ifndef BOOST_SIMD_BOOLEAN_FUNCTIONS_SELINC_HPP_INCLUDED
#define BOOST_SIMD_BOOLEAN_FUNCTIONS_SELINC_HPP_INCLUDED

#include <boost/simd/include/functor.hpp>


namespace boost { namespace simd {
  namespace tag
  {
   /*!
     @brief selinc generic tag

     Represents the selinc function in generic contexts.

     @par Models:
        Hierarchy
   **/
    struct selinc_ : ext::elementwise_<selinc_>
    {
      /// @brief Parent hierarchy
      typedef ext::elementwise_<selinc_> parent;
      template<class... Args>
      static BOOST_FORCEINLINE BOOST_AUTO_DECLTYPE dispatch(Args&&... args)
      BOOST_AUTO_DECLTYPE_BODY( dispatching_selinc_( ext::adl_helper(), static_cast<Args&&>(args)... ) )
    };
  }
  namespace ext
  {
   template<class Site>
   BOOST_FORCEINLINE generic_dispatcher<tag::selinc_, Site> dispatching_selinc_(adl_helper, boost::dispatch::meta::unknown_<Site>, ...)
   {
     return generic_dispatcher<tag::selinc_, Site>();
   }
   template<class... Args>
   struct impl_selinc_;
  }
  /*!
    Increments a value by 1 if a predicate is true.

    @par Semantic:

    For every parameters of types respectively T0, T1:

    @code
    T1 r = selinc(a0,a1);
    @endcode

    is similar to:

    @code
    T1 r = a0 ? a1+one : a1;
    @endcode

    @par Alias:
    @c ifinc

    @param a0

    @param a1

    @return a value of the same type as the second parameter
  **/
  BOOST_DISPATCH_FUNCTION_IMPLEMENTATION(tag::selinc_, selinc, 2)
  BOOST_DISPATCH_FUNCTION_IMPLEMENTATION(tag::selinc_, ifinc,  2)
} }

#endif
