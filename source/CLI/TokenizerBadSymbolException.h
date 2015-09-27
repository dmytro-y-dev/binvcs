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
  
TokenizerBadSymbolException is an exception class which signals about bad symbol in command
line's text stream.
 
********************************************************************************************/

#ifndef METAMAKER_BINVCS_CLI_TOKENIZERBADSYMBOLEXCEPTION
#define METAMAKER_BINVCS_CLI_TOKENIZERBADSYMBOLEXCEPTION

#include <string>

namespace binvcs_cli
{
	class TokenizerBadSymbolException
	{
  typedef std::string string;

	public:
		TokenizerBadSymbolException(const string& text, size_t pos);

    string GetHint() const;

		size_t GetBadSymbolPosition() const;
		string GetCommandLineText() const;

		void SetBadSymbolPosition(size_t pos);
		void SetCommandLineText(const string& text);

	private:
		size_t m_badSymbolPosition;
		string m_commandLineText;
	};
}

#endif //METAMAKER_BINVCS_CLI_TOKENIZERBADSYMBOLEXCEPTION
