#include <sstream>

#include "TokenizerBadSymbolException.h"

using namespace binvcs_cli;

TokenizerBadSymbolException::TokenizerBadSymbolException(const string& text, size_t pos) :
  m_commandLineText(text), m_badSymbolPosition(pos)
{
}

TokenizerBadSymbolException::string TokenizerBadSymbolException::GetHint() const
{
  std::ostringstream hintStream;
  hintStream << "Error at symbol " << m_badSymbolPosition + 1 << ": " << m_commandLineText;

  return hintStream.str();
}

size_t TokenizerBadSymbolException::GetBadSymbolPosition() const
{
  return m_badSymbolPosition;
}

TokenizerBadSymbolException::string TokenizerBadSymbolException::GetCommandLineText() const
{
  return m_commandLineText;
}

void TokenizerBadSymbolException::SetBadSymbolPosition(size_t pos)
{
  m_badSymbolPosition = pos;
}

void TokenizerBadSymbolException::SetCommandLineText(const string& text)
{
  m_commandLineText = text;
}
