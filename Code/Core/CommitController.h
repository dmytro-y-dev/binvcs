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

#ifndef METAMAKER_BINVCS_CORE_COMMITCONTROLLER
#define METAMAKER_BINVCS_CORE_COMMITCONTROLLER

namespace binvcs_core
{
	class CommitController
	{

	public:
		CommitController();
		virtual ~CommitController();

		CommitController(RepositoryFactoryPtr repositoryFactory);
		void AttachListener(IControllerEventsListener listener);
		void DetachListener();
		void Extract(string commitId);
		void Recommit(bool isCheckpoint, string commentary);
		void RemoveCheckpoint(string commitId);

	};

}

#endif //METAMAKER_BINVCS_CORE_COMMITCONTROLLER
