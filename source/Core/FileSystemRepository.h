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

#ifndef METAMAKER_BINVCS_CORE_FILESYSTEMREPOSITORY
#define METAMAKER_BINVCS_CORE_FILESYSTEMREPOSITORY

#include "IRepository.h"

namespace binvcs_core
{
	/**
	 * DefaultRepository stores information about commits and file copies on file
	 * system.
	 */
	class FileSystemRepository : public IRepository
	{

	public:
		FileSystemRepository();
		virtual ~FileSystemRepository();

		FileSystemRepository(string repositoryLocation);
		IBranchPtr CreateBranch(string branchId);
		vector<IBranchPtr> GetBranches();
		IContentStoragePtr GetContentStorage();
		int GetCreationDate();
		IBranchPtr GetCurrentBranch();
		IStagePtr GetStage();
		void Load();
		void RemoveBranch(string branchId);
		void RenameBranch(string branchOldId, string branchNewId);
		void Save();
		bool SetCurrentBranchById(string branchId);

	private:
		map<string,IBranchPtr> m_branches;
		int m_creationDate;
		string m_currentBranchId;
		IStagePtr m_currentStage;
		string m_repositoryLocation;

	};

}

#endif //METAMAKER_BINVCS_CORE_FILESYSTEMREPOSITORY
