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
  
Class to convert command line arguments into tokens.
 
********************************************************************************************/

#ifndef METAMAKER_BINVCS_CLI_ITOKENIZER
#define METAMAKER_BINVCS_CLI_ITOKENIZER

#include <string>
#include <vector>

namespace binvcs_cli
{
	class ITokenizer
	{
  typedef std::string string;
  typedef std::vector<string> TokensList;

	public:
    virtual ~ITokenizer() {}

    virtual TokensList Tokenize(const string& text) = 0;
	};
}

#endif //METAMAKER_BINVCS_CLI_ITOKENIZER
