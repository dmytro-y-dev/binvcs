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

#ifndef METAMAKER_BINVCS_CORE_LOCALFILESYSTEMCONTENTSTORAGE
#define METAMAKER_BINVCS_CORE_LOCALFILESYSTEMCONTENTSTORAGE

#include "IContentStorage.h"

namespace binvcs_core
{
	class LocalFileSystemContentStorage : public IContentStorage
	{

	public:
		LocalFileSystemContentStorage();
		virtual ~LocalFileSystemContentStorage();

		LocalFileSystemContentStorage(string storagePath);
		vector<IFileCopierPtr> DelayedExtractCommit(ICommitPtr commit, string destinationPath);
		vector<IFileCopierPtr> DelayedStoreCommit(ICommitPtr commit);
		bool IsCommitStored(string commitId);
		void RemoveCommitFromStorage(ICommitPtr commit);

	private:
		string m_storagePath;

	};

}

#endif //METAMAKER_BINVCS_CORE_LOCALFILESYSTEMCONTENTSTORAGE
