#ifndef AGA_Util_String
#define AGA_Util_String

#include <iostream>
#include <string>
namespace AGA::Util::String
{
  std::string removeCharStart(const std::string &str, char c)
  {
    size_t firstPositionNoChar = str.find_first_not_of(c);
    return firstPositionNoChar == std::string::npos ? "" : str.substr(firstPositionNoChar);
  };
  std::string removeCharEnd(const std::string &str, char c)
  {
    size_t lastPositionNoChar = str.find_last_not_of(c);
    return lastPositionNoChar == std::string::npos ? "" : str.substr(0, lastPositionNoChar + 1);
  };
} // namespace AGA::Util
#endif