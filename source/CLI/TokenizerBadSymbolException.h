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

#ifndef METAMAKER_BINVCS_CLI_TOKENIZERBADSYMBOLEXCEPTION
#define METAMAKER_BINVCS_CLI_TOKENIZERBADSYMBOLEXCEPTION

namespace binvcs_cli
{
	/**
	 * Exception class that signals about bad symbol in command line text stream.
	 */
	class TokenizerBadSymbolException
	{

	public:
		TokenizerBadSymbolException();
		virtual ~TokenizerBadSymbolException();

		TokenizerBadSymbolException(string text, size_t pos);
		size_t GetBadSymbolPosition();
		string GetCommandLineText();
		string GetHint();
		void SetBadSymbolPosition(size_t pos);
		void SetCommandLineText(string text);

	private:
		size_t m_badSymbolPosition;
		string m_commandLineText;

	};

}

#endif //METAMAKER_BINVCS_CLI_TOKENIZERBADSYMBOLEXCEPTION
