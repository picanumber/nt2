//==============================================================================
//         Copyright 2003 - 2012   LASMEA UMR 6602 CNRS/Univ. Clermont II
//         Copyright 2009 - 2012   LRI    UMR 8623 CNRS/Univ Paris Sud XI
//
//          Distributed under the Boost Software License, Version 1.0.
//                 See accompanying file LICENSE.txt or copy at
//                     http://www.boost.org/LICENSE_1_0.txt
//==============================================================================
#ifndef NT2_TRIGONOMETRIC_FUNCTIONS_ACOTD_HPP_INCLUDED
#define NT2_TRIGONOMETRIC_FUNCTIONS_ACOTD_HPP_INCLUDED
#include <nt2/include/functor.hpp>


namespace nt2 { namespace tag
  {
   /*!
     @brief acotd generic tag

     Represents the acotd function in generic contexts.

     @par Models:
        Hierarchy
   **/
    struct acotd_ : ext::elementwise_<acotd_>
    {
      /// @brief Parent hierarchy
      typedef ext::elementwise_<acotd_> parent;
    };
  }
  /*!
    inverse cotangent in degree. The arc \f$x\f$ in the interval
    \f$\[0, 180\[\f$ such that the \f$\cot(\pi \frac{x}{180})\f$
    is equal to the input.

    @par Semantic:

    For every parameter of floating type T0

    @code
    T0 r = acotd(a0);
    @endcode

    @param a0

    @return a value of the same type as the parameter
  **/
  NT2_FUNCTION_IMPLEMENTATION(tag::acotd_, acotd, 1)
}

#endif

///
