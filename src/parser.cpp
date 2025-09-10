#include "parser.h"
#include <algorithm>
#include <cctype>
#include <sstream>

namespace {
// trim leading/trailing whitespace
std::string trim(const std::string& s) {
    auto b = s.begin();
    while (b != s.end() && std::isspace(static_cast<unsigned char>(*b))) ++b;

    auto e = s.end();
    do {
        if (e == b) break;
        --e;
    } while (std::isspace(static_cast<unsigned char>(*e)));

    if (b == s.end()) return "";
    return std::string(b, e + 1);
}
} // anonymous

namespace StringUtils {

void parseName(const std::string& fullName,
               std::string* firstName,
               std::string* lastName) {
    if (!firstName || !lastName) return;

    std::string s = trim(fullName);
    if (s.empty()) { *firstName = ""; *lastName = ""; return; }

    std::istringstream iss(s);
    std::string tok, first, last;

    if (!(iss >> first)) { *firstName = ""; *lastName = ""; return; }
    last = first;
    while (iss >> tok) last = tok;

    *firstName = first;
    *lastName  = last;
}

std::string getUsername(const std::string& email) {
    std::string e = trim(email);
    auto at = e.find('@');
    if (at == std::string::npos) return e;  // no '@' → return trimmed email
    if (at == 0) return std::string();      // starts with '@' → empty username
    return e.substr(0, at);
}

} // namespace StringUtils
