//////////////////////////////////////////////////////////////////////////////
///   Copyright 2003 and onward LASMEA UMR 6602 CNRS/U.B.P Clermont-Ferrand
///   Copyright 2009 and onward LRI    UMR 8623 CNRS/Univ Paris Sud XI
///
///          Distributed under the Boost Software License, Version 1.0
///                 See accompanying file LICENSE.txt or copy at
///                     http://www.boost.org/LICENSE_1_0.txt
//////////////////////////////////////////////////////////////////////////////
#define BOOST_SIMD_UNIT_MODULE "nt2 operator toolbox - store/scalar Mode"

//////////////////////////////////////////////////////////////////////////////
// unit test behavior of operator components in scalar mode
//////////////////////////////////////////////////////////////////////////////
/// created  by jt the 18/02/2011
/// 
#include <boost/simd/toolbox/operator/include/store.hpp>
#include <boost/simd/include/functions/ulpdist.hpp>

#include <boost/type_traits/is_same.hpp>
#include <boost/dispatch/functor/meta/call.hpp>
#include <boost/simd/sdk/unit/tests.hpp>
#include <boost/simd/sdk/unit/module.hpp>
#include <boost/simd/sdk/memory/buffer.hpp>
#include <boost/simd/include/constants/real.hpp>
#include <boost/simd/include/constants/infinites.hpp>
//COMMENTED

BOOST_SIMD_TEST_CASE_TPL ( store_integer__2_0,  BOOST_SIMD_INTEGRAL_TYPES)
{
  
//   using boost::simd::store;
//   using boost::simd::tag::store_;
//   typedef typename boost::dispatch::meta::as_integer<T>::type iT;
//   typedef typename boost::dispatch::meta::call<store_(T,T)>::type r_t;
//   typedef typename boost::dispatch::meta::upgrade<T>::type u_t;
//   typedef T wished_r_t;


//   // return type conformity test 
//   BOOST_SIMD_TEST( (boost::is_same < r_t, wished_r_t >::value) );
//   std::cout << std::endl; 
//   double ulpd;
//   ulpd=0.0;


//   // specific values tests
//   BOOST_SIMD_TEST_EQUAL(store(boost::simd::One<T>(), boost::simd::One<T>()), boost::simd::One<r_t>());
//   BOOST_SIMD_TEST_EQUAL(store(boost::simd::One<T>(),boost::simd::Zero<T>()), boost::simd::Zero<r_t>());
//   BOOST_SIMD_TEST_EQUAL(store(boost::simd::Zero<T>(), boost::simd::Zero<T>()), boost::simd::Zero<r_t>());
// } // end of test for integer_

// BOOST_SIMD_TEST_CASE_TPL ( store_real__2_0,  BOOST_SIMD_REAL_TYPES)
// {
  
//   using boost::simd::store;
//   using boost::simd::tag::store_;
//   typedef typename boost::dispatch::meta::as_integer<T>::type iT;
//   typedef typename boost::dispatch::meta::call<store_(T,T)>::type r_t;
//   typedef typename boost::dispatch::meta::upgrade<T>::type u_t;
//   typedef T wished_r_t;


//   // return type conformity test 
//   BOOST_SIMD_TEST( (boost::is_same < r_t, wished_r_t >::value) );
//   std::cout << std::endl; 
//   double ulpd;
//   ulpd=0.0;


//   // specific values tests
//   BOOST_SIMD_TEST_EQUAL(store(boost::simd::Inf<T>(), boost::simd::Inf<T>()), boost::simd::Inf<r_t>());
//   BOOST_SIMD_TEST_EQUAL(store(boost::simd::Minf<T>(), boost::simd::Minf<T>()), boost::simd::Minf<r_t>());
//   BOOST_SIMD_TEST_EQUAL(store(boost::simd::Nan<T>(), boost::simd::Nan<T>()), boost::simd::Nan<r_t>());
//   BOOST_SIMD_TEST_EQUAL(store(boost::simd::One<T>(),boost::simd::Zero<T>()), boost::simd::Zero<r_t>());
//   BOOST_SIMD_TEST_EQUAL(store(boost::simd::Zero<T>(), boost::simd::Zero<T>()), boost::simd::Zero<r_t>());
} // end of test for real_
