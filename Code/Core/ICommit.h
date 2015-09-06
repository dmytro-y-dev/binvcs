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

#ifndef METAMAKER_BINVCS_CORE_ICOMMIT
#define METAMAKER_BINVCS_CORE_ICOMMIT

#include "IBranch.h"

namespace binvcs_core
{
	class ICommit
	{

	public:
		ICommit();
		virtual ~ICommit();
		IBranch *m_IBranch;

		ICommitedFilePtr AddFile(string path);
		ICommitedFilePtr FindFile(string path);
		string GetAuthor();
		string GetCommentary();
		int GetCreationDate();
		vector<ICommitedFilePtr> GetFiles();
		string GetId();
		void Load(istream infile);
		void Save(ostream outfile);
		void SetAuthor(string author);
		void SetCommentary(string commentary);
		void SetCreationDate(int creationDate);

	};

}

#endif //METAMAKER_BINVCS_CORE_ICOMMIT
