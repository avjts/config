//  This file was automatically generated on Sat Sep  9 19:03:28 2023
//  by libs/config/tools/generate.cpp
//  Copyright John Maddock 2002-21.
//  Use, modification and distribution are subject to the 
//  Boost Software License, Version 1.0. (See accompanying file 
//  LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)

//  See http://www.boost.org/libs/config for the most recent version.//
//  Revision $Id$
//

#ifdef __has_include
#if __has_include(<version>)
#include <version>
#endif
#endif

#include <shared_mutex>

#ifndef __cpp_lib_shared_timed_mutex
#error "Macro << __cpp_lib_shared_timed_mutex is not set"
#endif

#if __cpp_lib_shared_timed_mutex < 201402
#error "Macro __cpp_lib_shared_timed_mutex had too low a value"
#endif

int main( int, char *[] )
{
   return 0;
}

