##############################################################################
###   Copyright 2003 and onward LASMEA UMR 6602 CNRS/U.B.P Clermont-Ferrand
###   Copyright 2009 and onward LRI    UMR 8623 CNRS/Univ Paris Sud XI
###
###          Distributed under the Boost Software License, Version 1.0
###                 See accompanying file LICENSE.txt or copy at
###                     http://www.boost.org/LICENSE_1_0.txt
##############################################################################

set( SOURCES
  inc.cpp
  dec.cpp
  abs.cpp
  arg.cpp
  average.cpp
  ceil.cpp
  conj.cpp
  dist.cpp
  floor.cpp
  fma.cpp
  fms.cpp
  fnms.cpp
  fnma.cpp
  hypot.cpp
  trunc.cpp
  round.cpp
  round2even.cpp
  max.cpp
  meanof.cpp
  min.cpp
  minusone.cpp
  oneminus.cpp
  oneplus.cpp
  rec.cpp
  rsqrt.cpp
  sqr.cpp
  sqrt.cpp
  )

nt2_module_add_tests(type.complex.base.arithmetic.simd.unit ${SOURCES})
