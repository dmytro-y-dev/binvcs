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

#ifndef METAMAKER_BINVCS_CORE_FILESYSTEMCOPIER
#define METAMAKER_BINVCS_CORE_FILESYSTEMCOPIER

#include "IFileCopier.h"

namespace binvcs_core
{
	class FileSystemCopier : public IFileCopier
	{

	public:
		FileSystemCopier();
		virtual ~FileSystemCopier();

		FileSystemCopier(string sourcePath, string destinationPath);
		filesize_t GetCopiedBytesAmount();
		string GetDestinationFilePath();
		filesize_t GetFileSize();
		string GetOriginalFilePath();
		double GetProgressPercent();
		void PauseCopying();
		void SetDestinationFilePath(string path);
		void SetOriginalFilePath(string path);
		void StartCopying();
		void StopCopying();

	private:
		string m_destinationPath;
		string m_sourcePath;

	};

}

#endif //METAMAKER_BINVCS_CORE_FILESYSTEMCOPIER
