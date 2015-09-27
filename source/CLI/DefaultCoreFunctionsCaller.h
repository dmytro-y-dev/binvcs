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

#ifndef METAMAKER_BINVCS_CLI_DEFAULTCOREFUNCTIONSCALLER
#define METAMAKER_BINVCS_CLI_DEFAULTCOREFUNCTIONSCALLER

#include "ICoreFunctionsCaller.h"

namespace binvcs_cli
{
	/**
	 * This class calls core functions of VCS depending on command line input (tokens
	 * stream).
	 */
	class DefaultCoreFunctionsCaller : public ICoreFunctionsCaller
	{

	public:
		virtual ~DefaultCoreFunctionsCaller();

		DefaultCoreFunctionsCaller();
		void CallCoreFunction(vector<string>& tokens);

	private:
		map<string, CoreFunctionCall> m_functionsByCommandName;

		void AddItems(vector<string> params);
		void Branches(vector<string> params);
		void Checkpoint(vector<string> params);
		void Checkpoints(vector<string> params);
		void Commit(vector<string> params);
		void DiffCommits(vector<string> params);
		void Help(vector<string> params);
		void InitRepository(vector<string> params);
		void Recommit(vector<string> params);
		void RemoveBranch(vector<string> params);
		void RemoveCheckpoint(vector<string> params);
		void RemoveItems(vector<string> params);
		void RenameBranch(vector<string> params);
		void Rollback(vector<string> params);
		void StageStatus(vector<string> params);
		void SwitchBranch(vector<string> params);
		void Unstage(vector<string> params);

	};

}

#endif //METAMAKER_BINVCS_CLI_DEFAULTCOREFUNCTIONSCALLER
