//==============================================================================
//         Copyright 2003 - 2012   LASMEA UMR 6602 CNRS/Univ. Clermont II
//         Copyright 2009 - 2013   LRI    UMR 8623 CNRS/Univ Paris Sud XI
//
//          Distributed under the Boost Software License, Version 1.0.
//                 See accompanying file LICENSE.txt or copy at
//                     http://www.boost.org/LICENSE_1_0.txt
//==============================================================================
#ifndef NT2_LINALG_FUNCTIONS_SYSVX_HPP_INCLUDED
#define NT2_LINALG_FUNCTIONS_SYSVX_HPP_INCLUDED

/*!
  @file
  @brief Defines and implements lapack sysvx function that computes the solution
  of real system of linear equations a*x = b for a symmetric matrix with iterative
  refinement
**/

#include <nt2/include/functor.hpp>

namespace nt2
{
  namespace tag
  {
    /// @brief Defines gesv function tag
    struct sysvx_ : ext::abstract_<sysvx_>
    {
      /// INTERNAL ONLY
      typedef ext::abstract_<sysvx_> parent;
      template<class... Args>
      static BOOST_FORCEINLINE BOOST_AUTO_DECLTYPE dispatch(Args&&... args)
      BOOST_AUTO_DECLTYPE_BODY( dispatching_sysvx_( ext::adl_helper(), static_cast<Args&&>(args)... ) )
    };
  }
  namespace ext
  {
    template<class Site>
    BOOST_FORCEINLINE generic_dispatcher<tag::sysvx_, Site> dispatching_sysvx_(adl_helper, boost::dispatch::meta::unknown_<Site>, ...)
    {
      return generic_dispatcher<tag::sysvx_, Site>();
    }
    template<class... Args>
    struct impl_sysvx_;
  }

  /*!
    @brief

    @param
    @param

    @return
  **/
  NT2_FUNCTION_IMPLEMENTATION_TPL (tag::sysvx_, sysvx
                                  , (A0 const&)(A1&)(A2 const&)(A3&)(A4&)
                                  , 5
                                  );

  NT2_FUNCTION_IMPLEMENTATION_TPL (tag::sysvx_, sysvx
                                  , (A0 const&)(A1&)(A2 const&)(A3&)(A4&)(A5&)
                                  , 6
                                  );
}

#endif
