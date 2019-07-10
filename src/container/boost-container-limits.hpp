//
// Copyright (c) 2019 INRIA
//

#ifndef __pinocchio_container_boost_container_limits_hpp__
#define __pinocchio_container_boost_container_limits_hpp__

#define PINOCCHIO_BOOST_MPL_LIMIT_CONTAINER_SIZE_DEFAULT 30

#ifndef PINOCCHIO_BOOST_MPL_LIMIT_CONTAINER_SIZE
#define PINOCCHIO_BOOST_MPL_LIMIT_CONTAINER_SIZE PINOCCHIO_BOOST_MPL_LIMIT_CONTAINER_SIZE_DEFAULT
#endif

#define BOOST_MPL_CFG_NO_PREPROCESSED_HEADERS

#ifndef BOOST_MPL_LIMIT_LIST_SIZE
  #define BOOST_MPL_LIMIT_LIST_SIZE PINOCCHIO_BOOST_MPL_LIMIT_CONTAINER_SIZE
#endif

#ifndef BOOST_MPL_LIMIT_VECTOR_SIZE
  #define BOOST_MPL_LIMIT_VECTOR_SIZE PINOCCHIO_BOOST_MPL_LIMIT_CONTAINER_SIZE
#endif

#endif // ifndef __pinocchio_container_boost_container_limits_hpp__
