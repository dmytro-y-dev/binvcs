/********************************************************************************************
Author of this file is
    __________ _______   __   _____ __ __________ _____ __ __ _____ ______   __ ____
   / _   _   // ___  /__/ /_ / ___ / // _   _   // ___ / // //____// ____ \ / //___ \
  / / / / / // /__/_//_  __// /  /  // / / / / // /  /  //   /    / /___/_//   /__/_/
 / / / / / // /_____  / /_ / /__/  // / / / / // /__/  // /\ \__ / /_____ / /\ \__
/_/ /_/ /_/ \______/  \__/ \____/_//_/ /_/ /_/ \____/_//_/  \___/\______//_/  \___/

metamaker's personal webpage: http://www.goblinov.net

This file is provided under certain circumstances. For more details see LICENSE file in
the project's root folder.

This file contains build configuration for `binvcs` project. This configuration includes
definition of pointer types, definition of string type, compile-time specific flags, etc. 

********************************************************************************************/

#ifndef METAMAKER_BINVCS_BUILD_CONFIG
#define METAMAKER_BINVCS_BUILD_CONFIG

#include <memory>
#include <string>

typedef std::string string;

namespace binvcs_core {
  class IRepositoryFactory;
}

typedef std::unique_ptr<binvcs_core::IRepositoryFactory> IRepositoryFactoryPtr;

#endif //METAMAKER_BINVCS_BUILD_CONFIG
