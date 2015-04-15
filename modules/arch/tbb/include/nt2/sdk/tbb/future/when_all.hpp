//==============================================================================
//         Copyright 2003 - 2011   LASMEA UMR 6602 CNRS/Univ. Clermont II
//         Copyright 2009 - 2013   LRI    UMR 8623 CNRS/Univ Paris Sud XI
//         Copyright 2012 - 2013   MetaScale SAS
//
//          Distributed under the Boost Software License, Version 1.0.
//                 See accompanying file LICENSE.txt or copy at
//                     http://www.boost.org/LICENSE_1_0.txt
//==============================================================================
#ifndef NT2_SDK_TBB_FUTURE_WHEN_ALL_HPP_INCLUDED
#define NT2_SDK_TBB_FUTURE_WHEN_ALL_HPP_INCLUDED

#if defined(NT2_USE_TBB)

#include <tbb/tbb.h>
#include <tbb/flow_graph.h>

#include <nt2/sdk/shared_memory/future.hpp>
#include <nt2/sdk/tbb/future/details/tbb_future.hpp>

#include <cstdio>
#include <tuple>

namespace nt2
{

  namespace details
  {
    template<std::size_t N>
    struct link_nodes
    {
      template <typename Node_raw, typename Tuple>
      static void call( Node_raw c
                      , Tuple && a
                      )
      {

        tbb::flow::make_edge( *( std::get<N-1>(a).node_ )
                            , *c
                            );
        link_nodes<N-1>().call(c,a);
      }
    };

    template<>
    struct link_nodes<1ul>
    {
      template <typename Node_raw, typename Tuple>
      static void call( Node_raw c
                      , Tuple && a
                      )
      {
        tbb::flow::make_edge( *( std::get<0>(a).node_ )
                            , *c
                            );
      }
    };
  }

  template<class Site>
  struct when_all_impl< tag::tbb_<Site> >
  {
    typedef typename tbb::flow::continue_node<
    tbb::flow::continue_msg> node_type;

    typedef typename details::tbb_future<int>
    whenall_future;

    template <typename Future>
    whenall_future static call( std::vector<Future> & lazy_values )
    {
      details::tbb_task_wrapper< std::function<int()>, int >
      packaged_task( [](){ return 0; } );

      whenall_future future_res( packaged_task.get_future() );

      node_type * c = new node_type( *(future_res.getWork()),
                                     std::move(packaged_task)
                                   );

      future_res.getTaskQueue()->push_back(c);

      for (std::size_t i=0; i<lazy_values.size(); i++)
      {
        tbb::flow::make_edge(*(lazy_values[i].node_),*c);
      }

      future_res.attach_task(c);
      return future_res;
    }

    template< typename ... A >
    whenall_future static call( details::tbb_future<A> & ...a )
    {
      details::tbb_task_wrapper< std::function<int()>, int >
      packaged_task( [](){ return 0; } );

      whenall_future future_res (packaged_task.get_future());

      node_type * c
      = new node_type( *future_res.getWork(), std::move(packaged_task) );

      future_res.getTaskQueue()->push_back(c);
      future_res.attach_task(c);

      details::link_nodes< sizeof...(A) >()
      .call(c,std::tie(a...));

      return future_res;
    }
  };
}

#endif
#endif
