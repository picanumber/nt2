//==============================================================================
//         Copyright 2003 - 2011   LASMEA UMR 6602 CNRS/Univ. Clermont II
//         Copyright 2009 - 2011   LRI    UMR 8623 CNRS/Univ Paris Sud XI
//
//          Distributed under the Boost Software License, Version 1.0.
//                 See accompanying file LICENSE.txt or copy at
//                     http://www.boost.org/LICENSE_1_0.txt
//==============================================================================
#ifndef BOOST_SIMD_CONSTANT_CONSTANTS_MAXINIT_HPP_INCLUDED
#define BOOST_SIMD_CONSTANT_CONSTANTS_MAXINIT_HPP_INCLUDED

#include <boost/simd/include/functor.hpp>
#include <boost/simd/meta/int_c.hpp>
#include <boost/simd/meta/float.hpp>
#include <boost/simd/meta/double.hpp>
#include <boost/simd/constant/hierarchy.hpp>

#ifdef BOOST_MSVC
#pragma warning(push)
#pragma warning(disable: 4146)
#endif

namespace boost { namespace simd
{
  namespace tag
  {
    /*!
      @brief Maxinit generic tag

      Represents the Maxinit constant in generic contexts.

      @par Models:
      Hierarchy
    **/
    struct Maxinit : ext::pure_constant_<Maxinit>
    {
      typedef double default_type;
      typedef ext::pure_constant_<Maxinit> parent;

      /// INTERNAL ONLY
      template<class Target, class Dummy=void>
      struct  apply
            : meta::int_c < typename Target::type, 0> {};
      template<class... Args>
      static BOOST_FORCEINLINE BOOST_AUTO_DECLTYPE dispatch(Args&&... args)
      BOOST_AUTO_DECLTYPE_BODY( dispatching_Maxinit( ext::adl_helper(), static_cast<Args&&>(args)... ) )
    };

    /// INTERNAL ONLY
    template<class T, class Dummy>
    struct  Maxinit::apply<boost::dispatch::meta::single_<T>,Dummy>
          : meta::single_<0xFF7FFFFFUL> {};

    /// INTERNAL ONLY
    template<class T, class Dummy>
    struct  Maxinit::apply<boost::dispatch::meta::double_<T>,Dummy>
          : meta::double_<0xFFEFFFFFFFFFFFFFULL> {};

    /// INTERNAL ONLY
    template<class T, class Dummy>
    struct  Maxinit::apply<boost::dispatch::meta::int8_<T>,Dummy>
          : meta::int_c<T, T(-128)> {};

    /// INTERNAL ONLY
    template<class T, class Dummy>
    struct  Maxinit::apply<boost::dispatch::meta::int16_<T>,Dummy>
          : meta::int_c<T, T(-32768)> {};

    /// INTERNAL ONLY
    template<class T, class Dummy>
    struct  Maxinit::apply<boost::dispatch::meta::int32_<T>,Dummy>
    : meta::int_c < T
                  , T(-boost::simd::uint32_t(2147483648UL))
                  > {};

    /// INTERNAL ONLY
    template<class T, class Dummy>
    struct  Maxinit::apply<boost::dispatch::meta::int64_<T>,Dummy>
      : meta::int_c < T
                    , T(-boost::simd::uint64_t(9223372036854775808ULL))
                    > {};
  }
  namespace ext
  {
    template<class Site>
    BOOST_FORCEINLINE generic_dispatcher<tag::Maxinit, Site> dispatching_Maxinit(adl_helper, boost::dispatch::meta::unknown_<Site>, ...)
    {
      return generic_dispatcher<tag::Maxinit, Site>();
    }
    template<class... Args>
    struct impl_Maxinit;
  }
  /*!
    Generates the least finite value of a type for the current order,
    value which is used for maximum computations at it is considered as
    the maximum over an empty set for the chosen type.

    @par Semantic:

    @code
    T r = Maxinit<T>();
    @endcode

    for real entries, is similar to:

    @code
    T r = Valmin<T>();
    @endcode

    Complex ordering has to specialize this constant.
  **/
  BOOST_SIMD_CONSTANT_IMPLEMENTATION(boost::simd::tag::Maxinit, Maxinit)

} }

#ifdef BOOST_MSVC
#pragma warning(pop)
#endif

#include <boost/simd/constant/common.hpp>

#endif
