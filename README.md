# cse3150-week-2-lab
CSE3150 Week 2 Lab: String Parser and Dynamic Memory

Lab Instructions: 
1. Project Structure: Organize your files into two directories: • include/: Stores your header file (.h).
• src/: Stores your C++ source files (.cpp).
2. StringUtils Namespace: Create a namespace called StringUtils. Its function declarations should
be in include/parser.h and definitions in src/parser.cpp.
• Remember to use header guards in parser.h!
• Create a function: void parseName(const std::string& fullName, std::string* firstName, std::string* lastName);. This function should take a full name and use the pointer argu- ments to return the separated first and last names.
• Create a second function: std::string getUsername(const std::string& email);. This func- tion should take a full email address and return the username part (everything before the @ symbol).
3. main.cpp: In src/main.cpp, write a program that:
• Prompts the user to enter their full name and email address on separate lines.
• Reads the full line of input for the name using std::getline.
• Dynamically allocates two std::string objects on the heap using new. These will be used to store the first and last names.
• Calls your StringUtils::parseName function, passing the pointers to your newly allocated strings.
• Calls your StringUtils::getUsername function to get the username.
• Prints the parsed first name, last name, and username to the console. You will need to derefer-
ence the pointers to print the names.
• Frees the heap-allocated memory for the first and last name strings using delete. No memory
leaks!! 4. Submission:
• Create a new public GitHub repository named cse3150 week 2 lab.
• Add a .gitignore file to exclude your executable (parser app) and any object files (*.o). • Push your code (include/, src/).
