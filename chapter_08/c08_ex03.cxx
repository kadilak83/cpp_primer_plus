// Write a function that takes a reference to a string object as its parameter and that
// converts the contents of the string to uppercase. Use the toupper() function
// described in Table 6.4 of Chapter 6.Write a program that uses a loop which allows
// you to test the function with different input.A sample run might look like this:
// Enter a string (q to quit): go away
// GO AWAY
// Next string (q to quit): good grief!
// GOOD GRIEF!
// Next string (q to quit): q
// Bye.
#include <iostream>
#include <cstdlib>
#include <string>
#include <ctype.h>
#include <algorithm>

void StrToUpper(std::string &str);

int main() {
  std::string word="";
  std::cout << "Enter a string (q to quit): ";
  while(getline(std::cin, word) && word.compare("q")!=0){
    StrToUpper(word);
    std::cout << word << std::endl;
  }
  std::cout << "Goodbye" << std::endl;
  return EXIT_SUCCESS;
}

void StrToUpper(std::string &str){
  std::transform(str.begin(), str.end(), str.begin(), toupper);
}
