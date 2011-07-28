//////////////////////////////////////////////////////////////////////////////
///   Copyright 2003 and onward LASMEA UMR 6602 CNRS/U.B.P Clermont-Ferrand
///   Copyright 2009 and onward LRI    UMR 8623 CNRS/Univ Paris Sud XI
///
///          Distributed under the Boost Software License, Version 1.0
///                 See accompanying file LICENSE.txt or copy at
///                     http://www.boost.org/LICENSE_1_0.txt
//////////////////////////////////////////////////////////////////////////////
#define BOOST_SIMD_UNIT_MODULE "nt2 predicates toolbox - is_invalid/scalar Mode"

//////////////////////////////////////////////////////////////////////////////
// unit test behavior of predicates components in scalar mode
//////////////////////////////////////////////////////////////////////////////
/// created  by jt the 21/02/2011
/// 
#include <boost/simd/toolbox/predicates/include/is_invalid.hpp>
#include <boost/simd/include/functions/ulpdist.hpp>
#include <boost/simd/sdk/meta/logical.hpp>

#include <boost/type_traits/is_same.hpp>
#include <boost/dispatch/functor/meta/call.hpp>
#include <boost/simd/sdk/unit/tests.hpp>
#include <boost/simd/sdk/unit/module.hpp>
#include <boost/simd/sdk/memory/buffer.hpp>
#include <boost/simd/include/constants/real.hpp>
#include <boost/simd/include/constants/infinites.hpp>


BOOST_SIMD_TEST_CASE_TPL ( is_invalid_real__1_0,  BOOST_SIMD_REAL_TYPES)
{
  
  using boost::simd::is_invalid;
  using boost::simd::tag::is_invalid_;
  typedef typename boost::dispatch::meta::as_integer<T>::type iT;
  typedef typename boost::dispatch::meta::call<is_invalid_(T)>::type r_t;
  typedef typename boost::dispatch::meta::upgrade<T>::type u_t;
  typedef typename boost::simd::meta::logical<T>::type wished_r_t;


  // return type conformity test 
  BOOST_SIMD_TEST( (boost::is_same < r_t, wished_r_t >::value) );
  std::cout << std::endl; 
  double ulpd;
  ulpd=0.0;


  // specific values tests
  BOOST_SIMD_TEST_EQUAL(is_invalid(-boost::simd::Zero<T>()), boost::simd::False<r_t>());
  BOOST_SIMD_TEST_EQUAL(is_invalid(boost::simd::Half<T>()), boost::simd::False<r_t>());
  BOOST_SIMD_TEST_EQUAL(is_invalid(boost::simd::Inf<T>()), boost::simd::True<r_t>());
  BOOST_SIMD_TEST_EQUAL(is_invalid(boost::simd::Minf<T>()), boost::simd::True<r_t>());
  BOOST_SIMD_TEST_EQUAL(is_invalid(boost::simd::Mone<T>()), boost::simd::False<r_t>());
  BOOST_SIMD_TEST_EQUAL(is_invalid(boost::simd::Nan<T>()), boost::simd::True<r_t>());
  BOOST_SIMD_TEST_EQUAL(is_invalid(boost::simd::One<T>()), boost::simd::False<r_t>());
  BOOST_SIMD_TEST_EQUAL(is_invalid(boost::simd::Quarter<T>()), boost::simd::False<r_t>());
  BOOST_SIMD_TEST_EQUAL(is_invalid(boost::simd::Two<T>()), boost::simd::False<r_t>());
  BOOST_SIMD_TEST_EQUAL(is_invalid(boost::simd::Zero<T>()), boost::simd::False<r_t>());
} // end of test for real_

BOOST_SIMD_TEST_CASE_TPL ( is_invalid_signed_int__1_0,  BOOST_SIMD_INTEGRAL_SIGNED_TYPES)
{
  
  using boost::simd::is_invalid;
  using boost::simd::tag::is_invalid_;
  typedef typename boost::dispatch::meta::as_integer<T>::type iT;
  typedef typename boost::dispatch::meta::call<is_invalid_(T)>::type r_t;
  typedef typename boost::dispatch::meta::upgrade<T>::type u_t;
  typedef typename boost::simd::meta::logical<T>::type wished_r_t;


  // return type conformity test 
  BOOST_SIMD_TEST( (boost::is_same < r_t, wished_r_t >::value) );
  std::cout << std::endl; 
  double ulpd;
  ulpd=0.0;


  // specific values tests
  BOOST_SIMD_TEST_EQUAL(is_invalid(boost::simd::Mone<T>()), boost::simd::False<r_t>());
  BOOST_SIMD_TEST_EQUAL(is_invalid(boost::simd::One<T>()), boost::simd::False<r_t>());
  BOOST_SIMD_TEST_EQUAL(is_invalid(boost::simd::Two<T>()), boost::simd::False<r_t>());
  BOOST_SIMD_TEST_EQUAL(is_invalid(boost::simd::Zero<T>()), boost::simd::False<r_t>());
} // end of test for signed_int_

BOOST_SIMD_TEST_CASE_TPL ( is_invalid_unsigned_int__1_0,  BOOST_SIMD_UNSIGNED_TYPES)
{
  
  using boost::simd::is_invalid;
  using boost::simd::tag::is_invalid_;
  typedef typename boost::dispatch::meta::as_integer<T>::type iT;
  typedef typename boost::dispatch::meta::call<is_invalid_(T)>::type r_t;
  typedef typename boost::dispatch::meta::upgrade<T>::type u_t;
  typedef typename boost::simd::meta::logical<T>::type wished_r_t;


  // return type conformity test 
  BOOST_SIMD_TEST( (boost::is_same < r_t, wished_r_t >::value) );
  std::cout << std::endl; 
  double ulpd;
  ulpd=0.0;


  // specific values tests
  BOOST_SIMD_TEST_EQUAL(is_invalid(boost::simd::One<T>()), boost::simd::False<r_t>());
  BOOST_SIMD_TEST_EQUAL(is_invalid(boost::simd::Two<T>()), boost::simd::False<r_t>());
  BOOST_SIMD_TEST_EQUAL(is_invalid(boost::simd::Zero<T>()), boost::simd::False<r_t>());
} // end of test for unsigned_int_
