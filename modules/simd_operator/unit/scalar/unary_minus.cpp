//////////////////////////////////////////////////////////////////////////////
///   Copyright 2003 and onward LASMEA UMR 6602 CNRS/U.B.P Clermont-Ferrand
///   Copyright 2009 and onward LRI    UMR 8623 CNRS/Univ Paris Sud XI
///
///          Distributed under the Boost Software License, Version 1.0
///                 See accompanying file LICENSE.txt or copy at
///                     http://www.boost.org/LICENSE_1_0.txt
//////////////////////////////////////////////////////////////////////////////
#define BOOST_SIMD_UNIT_MODULE "nt2 operator toolbox - unary_minus/scalar Mode"

//////////////////////////////////////////////////////////////////////////////
// unit test behavior of operator components in scalar mode
//////////////////////////////////////////////////////////////////////////////
/// created  by jt the 18/02/2011
/// 
#include <boost/simd/toolbox/operator/include/unary_minus.hpp>
#include <boost/simd/include/functions/ulpdist.hpp>
#include <boost/type_traits/is_same.hpp>
#include <boost/dispatch/functor/meta/call.hpp>
#include <boost/simd/sdk/unit/tests.hpp>
#include <boost/simd/sdk/unit/module.hpp>
#include <boost/simd/sdk/memory/buffer.hpp>
#include <boost/simd/include/constants/real.hpp>
#include <boost/simd/include/constants/infinites.hpp>


BOOST_SIMD_TEST_CASE_TPL ( unary_minus_real__1_0,  BOOST_SIMD_REAL_TYPES)
{
  
  using boost::simd::unary_minus;
  using boost::simd::tag::unary_minus_;
  typedef typename boost::dispatch::meta::as_integer<T>::type iT;
  typedef typename boost::dispatch::meta::call<unary_minus_(T)>::type r_t;
  typedef typename boost::dispatch::meta::upgrade<T>::type u_t;
  typedef r_t wished_r_t;


  // return type conformity test 
  BOOST_SIMD_TEST( (boost::is_same < r_t, wished_r_t >::value) );
  std::cout << std::endl; 
  double ulpd;
  ulpd=0.0;


  // specific values tests
  BOOST_SIMD_TEST_EQUAL(unary_minus(boost::simd::Inf<T>()), boost::simd::Minf<r_t>());
  BOOST_SIMD_TEST_EQUAL(unary_minus(boost::simd::Minf<T>()), boost::simd::Inf<r_t>());
  BOOST_SIMD_TEST_EQUAL(unary_minus(boost::simd::Nan<T>()), boost::simd::Nan<r_t>());
  BOOST_SIMD_TEST_EQUAL(unary_minus(boost::simd::One<T>()), boost::simd::Mone<r_t>());
  BOOST_SIMD_TEST_EQUAL(unary_minus(boost::simd::Zero<T>()), boost::simd::Mzero<r_t>());
} // end of test for real_

BOOST_SIMD_TEST_CASE_TPL ( unary_minus_integer__1_0,  BOOST_SIMD_INTEGRAL_TYPES)
{
  
  using boost::simd::unary_minus;
  using boost::simd::tag::unary_minus_;
  typedef typename boost::dispatch::meta::as_integer<T>::type iT;
  typedef typename boost::dispatch::meta::call<unary_minus_(T)>::type r_t;
  typedef typename boost::dispatch::meta::upgrade<T>::type u_t;
  typedef r_t wished_r_t;


  // return type conformity test 
  BOOST_SIMD_TEST( (boost::is_same < r_t, wished_r_t >::value) );
  std::cout << std::endl; 
  double ulpd;
  ulpd=0.0;


  // specific values tests
  BOOST_SIMD_TEST_EQUAL(unary_minus(boost::simd::One<T>()), r_t(-1));
  BOOST_SIMD_TEST_EQUAL(unary_minus(boost::simd::Two<T>()), r_t(-2));
  BOOST_SIMD_TEST_EQUAL(unary_minus(boost::simd::Zero<T>()), boost::simd::Zero<r_t>());
} // end of test for integer_
