////////////////////////////////////////////////////////////////////////////////
// Register all tag and extension agnostic call for common code sharing
////////////////////////////////////////////////////////////////////////////////
namespace nt2 { namespace meta { template<class A0 , class Tag , class X> nt2::ext:: call< Tag(typename nt2::meta::simd_< unspecified_<A0>, X >::type) , tag::cpu_ > dispatching( Tag const&, tag::cpu_ const& , nt2::meta::simd_< unspecified_<A0>, X > const& , adl_helper = adl_helper() ) { nt2::ext:: call< Tag(typename nt2::meta::simd_< unspecified_<A0>, X >::type) , tag::cpu_ > that; return that; } } } namespace nt2 { namespace meta { template<class A0 , class Tag , class X> nt2::ext:: call< Tag(typename nt2::meta::simd_< unspecified_<A0>, X >::type , typename nt2::meta::simd_< unspecified_<A0>, X >::type) , tag::cpu_ > dispatching( Tag const&, tag::cpu_ const& , nt2::meta::simd_< unspecified_<A0>, X > const& , nt2::meta::simd_< unspecified_<A0>, X > const& , adl_helper = adl_helper() ) { nt2::ext:: call< Tag(typename nt2::meta::simd_< unspecified_<A0>, X >::type , typename nt2::meta::simd_< unspecified_<A0>, X >::type) , tag::cpu_ > that; return that; } } } namespace nt2 { namespace meta { template<class A0 , class Tag , class X> nt2::ext:: call< Tag(typename nt2::meta::simd_< unspecified_<A0>, X >::type , typename nt2::meta::simd_< unspecified_<A0>, X >::type , typename nt2::meta::simd_< unspecified_<A0>, X >::type) , tag::cpu_ > dispatching( Tag const&, tag::cpu_ const& , nt2::meta::simd_< unspecified_<A0>, X > const& , nt2::meta::simd_< unspecified_<A0>, X > const& , nt2::meta::simd_< unspecified_<A0>, X > const& , adl_helper = adl_helper() ) { nt2::ext:: call< Tag(typename nt2::meta::simd_< unspecified_<A0>, X >::type , typename nt2::meta::simd_< unspecified_<A0>, X >::type , typename nt2::meta::simd_< unspecified_<A0>, X >::type) , tag::cpu_ > that; return that; } } } namespace nt2 { namespace meta { template<class A0 , class Tag , class X> nt2::ext:: call< Tag(typename nt2::meta::simd_< unspecified_<A0>, X >::type , typename nt2::meta::simd_< unspecified_<A0>, X >::type , typename nt2::meta::simd_< unspecified_<A0>, X >::type , typename nt2::meta::simd_< unspecified_<A0>, X >::type) , tag::cpu_ > dispatching( Tag const&, tag::cpu_ const& , nt2::meta::simd_< unspecified_<A0>, X > const& , nt2::meta::simd_< unspecified_<A0>, X > const& , nt2::meta::simd_< unspecified_<A0>, X > const& , nt2::meta::simd_< unspecified_<A0>, X > const& , adl_helper = adl_helper() ) { nt2::ext:: call< Tag(typename nt2::meta::simd_< unspecified_<A0>, X >::type , typename nt2::meta::simd_< unspecified_<A0>, X >::type , typename nt2::meta::simd_< unspecified_<A0>, X >::type , typename nt2::meta::simd_< unspecified_<A0>, X >::type) , tag::cpu_ > that; return that; } } } namespace nt2 { namespace meta { template<class A0 , class Tag , class X> nt2::ext:: call< Tag(typename nt2::meta::simd_< unspecified_<A0>, X >::type , typename nt2::meta::simd_< unspecified_<A0>, X >::type , typename nt2::meta::simd_< unspecified_<A0>, X >::type , typename nt2::meta::simd_< unspecified_<A0>, X >::type , typename nt2::meta::simd_< unspecified_<A0>, X >::type) , tag::cpu_ > dispatching( Tag const&, tag::cpu_ const& , nt2::meta::simd_< unspecified_<A0>, X > const& , nt2::meta::simd_< unspecified_<A0>, X > const& , nt2::meta::simd_< unspecified_<A0>, X > const& , nt2::meta::simd_< unspecified_<A0>, X > const& , nt2::meta::simd_< unspecified_<A0>, X > const& , adl_helper = adl_helper() ) { nt2::ext:: call< Tag(typename nt2::meta::simd_< unspecified_<A0>, X >::type , typename nt2::meta::simd_< unspecified_<A0>, X >::type , typename nt2::meta::simd_< unspecified_<A0>, X >::type , typename nt2::meta::simd_< unspecified_<A0>, X >::type , typename nt2::meta::simd_< unspecified_<A0>, X >::type) , tag::cpu_ > that; return that; } } }
////////////////////////////////////////////////////////////////////////////////
// Generate all the common map calls over Tag using nt2::map
////////////////////////////////////////////////////////////////////////////////
namespace nt2 { namespace ext { template<class Tag, class X, class Dummy> struct call<Tag( tag::simd_<tag::unspecified_,X> ), tag::cpu_, Dummy> : callable { template<class Sig> struct result; template<class This,class A0> struct result<This(A0)> : meta::call<tag::map_(functor<Tag>, A0)> {}; template<class A0> inline typename meta::result_of<call(A0 const&)>::type operator()( A0 const& a0 ) const { return nt2::map( functor<Tag>(), a0); } }; } } namespace nt2 { namespace ext { template<class Tag, class X, class Dummy> struct call<Tag( tag::simd_<tag::unspecified_,X> , tag::simd_<tag::unspecified_,X> ), tag::cpu_, Dummy> : callable { template<class Sig> struct result; template<class This,class A0 , class A1> struct result<This(A0 , A1)> : meta::call<tag::map_(functor<Tag>, A0 , A1)> {}; template<class A0 , class A1> inline typename meta::result_of<call(A0 const& , A1 const&)>::type operator()( A0 const& a0 , A1 const& a1 ) const { return nt2::map( functor<Tag>(), a0 , a1); } }; } } namespace nt2 { namespace ext { template<class Tag, class X, class Dummy> struct call<Tag( tag::simd_<tag::unspecified_,X> , tag::simd_<tag::unspecified_,X> , tag::simd_<tag::unspecified_,X> ), tag::cpu_, Dummy> : callable { template<class Sig> struct result; template<class This,class A0 , class A1 , class A2> struct result<This(A0 , A1 , A2)> : meta::call<tag::map_(functor<Tag>, A0 , A1 , A2)> {}; template<class A0 , class A1 , class A2> inline typename meta::result_of<call(A0 const& , A1 const& , A2 const&)>::type operator()( A0 const& a0 , A1 const& a1 , A2 const& a2 ) const { return nt2::map( functor<Tag>(), a0 , a1 , a2); } }; } } namespace nt2 { namespace ext { template<class Tag, class X, class Dummy> struct call<Tag( tag::simd_<tag::unspecified_,X> , tag::simd_<tag::unspecified_,X> , tag::simd_<tag::unspecified_,X> , tag::simd_<tag::unspecified_,X> ), tag::cpu_, Dummy> : callable { template<class Sig> struct result; template<class This,class A0 , class A1 , class A2 , class A3> struct result<This(A0 , A1 , A2 , A3)> : meta::call<tag::map_(functor<Tag>, A0 , A1 , A2 , A3)> {}; template<class A0 , class A1 , class A2 , class A3> inline typename meta::result_of<call(A0 const& , A1 const& , A2 const& , A3 const&)>::type operator()( A0 const& a0 , A1 const& a1 , A2 const& a2 , A3 const& a3 ) const { return nt2::map( functor<Tag>(), a0 , a1 , a2 , a3); } }; } } namespace nt2 { namespace ext { template<class Tag, class X, class Dummy> struct call<Tag( tag::simd_<tag::unspecified_,X> , tag::simd_<tag::unspecified_,X> , tag::simd_<tag::unspecified_,X> , tag::simd_<tag::unspecified_,X> , tag::simd_<tag::unspecified_,X> ), tag::cpu_, Dummy> : callable { template<class Sig> struct result; template<class This,class A0 , class A1 , class A2 , class A3 , class A4> struct result<This(A0 , A1 , A2 , A3 , A4)> : meta::call<tag::map_(functor<Tag>, A0 , A1 , A2 , A3 , A4)> {}; template<class A0 , class A1 , class A2 , class A3 , class A4> inline typename meta::result_of<call(A0 const& , A1 const& , A2 const& , A3 const& , A4 const&)>::type operator()( A0 const& a0 , A1 const& a1 , A2 const& a2 , A3 const& a3 , A4 const& a4 ) const { return nt2::map( functor<Tag>(), a0 , a1 , a2 , a3 , a4); } }; } }
