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

#ifndef METAMAKER_BINVCS_CLI_DEFAULTTOKENIZER
#define METAMAKER_BINVCS_CLI_DEFAULTTOKENIZER

#include "ITokenizer.h"

namespace binvcs_cli
{
	/**
	 * The class extracts next tokens from text stream:
	 * 
	 *    :simple_token:  := ([:alnum:]|_|\-)+
	 *    :quoted_token: := \"(:simple_token:)+\"
	 * 
	 * ASCII symbols from \x0 to \x20 between tokens are ignored. Throw
	 * TokenizerBadSymbolException exception if other symbol is met between tokens.
	 */
	class DefaultTokenizer : public ITokenizer
	{

	public:
		DefaultTokenizer();
		virtual ~DefaultTokenizer();

		vector<string> Tokenize(string text);

	};

}

#endif //METAMAKER_BINVCS_CLI_DEFAULTTOKENIZER
