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
  
PLACE UNIT DESCRIPTION HERE
 
********************************************************************************************/

#ifndef METAMAKER_BINVCS_CORE_BRANCHCONTROLLER
#define METAMAKER_BINVCS_CORE_BRANCHCONTROLLER

#include <BuildConfig.h>

namespace binvcs_core
{
	class BranchController
	{
	public:
		BranchController(IRepositoryFactoryPtr repositoryFactory);

		void RemoveBranch(const string& branchId) const;
		void RenameBranch(const string& oldId, const string& newId) const;
		void SwitchCurrentBranch(const string& branchId) const;

	private:
		IRepositoryFactoryPtr m_repositoryFactory;
	};
}

#endif //METAMAKER_BINVCS_CORE_BRANCHCONTROLLER
