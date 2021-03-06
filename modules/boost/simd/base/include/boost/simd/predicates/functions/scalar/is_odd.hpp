//==============================================================================
//         Copyright 2003 - 2011 LASMEA UMR 6602 CNRS/Univ. Clermont II
//         Copyright 2009 - 2011 LRI    UMR 8623 CNRS/Univ Paris Sud XI
//
//          Distributed under the Boost Software License, Version 1.0.
//                 See accompanying file LICENSE.txt or copy at
//                     http://www.boost.org/LICENSE_1_0.txt
//==============================================================================
#ifndef BOOST_SIMD_PREDICATES_FUNCTIONS_SCALAR_IS_ODD_HPP_INCLUDED
#define BOOST_SIMD_PREDICATES_FUNCTIONS_SCALAR_IS_ODD_HPP_INCLUDED
#include <boost/simd/predicates/functions/is_odd.hpp>
#include <boost/simd/include/constants/one.hpp>
#include <boost/simd/include/functions/scalar/minusone.hpp>
#include <boost/simd/include/functions/scalar/is_even.hpp>
#include <boost/simd/sdk/meta/as_logical.hpp>

namespace boost { namespace simd { namespace ext
{
  BOOST_DISPATCH_IMPLEMENT( is_odd_, tag::cpu_
                            , (A0)
                            , (scalar_< bool_<A0> >)
                            )
  {
    typedef bool result_type;
    BOOST_SIMD_FUNCTOR_CALL(1)
    {
      return a0;
    }
  };
  BOOST_DISPATCH_IMPLEMENT( is_odd_, tag::cpu_
                            , (A0)
                            , (scalar_< arithmetic_<A0> >)
                            )
  {
    typedef typename meta::as_logical<A0>::type result_type;
    BOOST_SIMD_FUNCTOR_CALL(1)
    {
      return result_type(b_and(a0,One<A0>()) != 0);
    }
  };

  BOOST_DISPATCH_IMPLEMENT( is_odd_, tag::cpu_
                            , (A0)
                            , (scalar_< floating_<A0> >)
                            )
  {
    typedef typename meta::as_logical<A0>::type result_type;
    BOOST_SIMD_FUNCTOR_CALL(1)
    {
      return is_even(minusone(a0));
    }
  };
} } }


#endif
