#ifndef STRINGUTILS_PARSER_H
#define STRINGUTILS_PARSER_H

#include <string>

namespace StringUtils {

// Split a full name into first and last using pointer outputs.
void parseName(const std::string& fullName,
               std::string* firstName,
               std::string* lastName);

// Return everything before '@' in an email (trimmed). If no '@', return trimmed email.
std::string getUsername(const std::string& email);

} // namespace StringUtils

#endif // STRINGUTILS_PARSER_H
