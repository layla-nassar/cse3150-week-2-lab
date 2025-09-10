#include <iostream>
#include <string>
#include "parser.h"

int main() {
    // Prompts to stderr so pytest (which parses stdout) isn’t polluted.
    std::cerr << "Enter full name" << std::endl;
    std::string fullName;
    std::getline(std::cin, fullName);

    std::cerr << "Enter email address" << std::endl;
    std::string email;
    std::getline(std::cin, email);

    // Required heap allocation per lab
    std::string* first = new std::string();
    std::string* last  = new std::string();

    StringUtils::parseName(fullName, first, last);
    std::string username = StringUtils::getUsername(email);

    // EXACT keys the tests expect
    std::cout << "First Name: " << *first << "\n";
    std::cout << "Last Name: "  << *last  << "\n";
    std::cout << "Username: "   << username << "\n";

    delete first;
    delete last;
    return 0;
}
