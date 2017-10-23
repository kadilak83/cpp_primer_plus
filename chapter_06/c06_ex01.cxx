// Write a program that reads keyboard input to the @ symbol and that echoes the
// input except for digits, converting each uppercase character to lowercase, and vice
// versa. (Don’t forget the cctype family.)
#include <iostream>
#include <cstdlib>
#include <cctype>

int main(){
  char ch;
  
  while (std::cin.get(ch) && ch != '@') {
    if(islower(ch)) {
      ch = toupper(ch);
    }
    else if (isupper(ch)) {
      ch = tolower(ch);
    }
    if (!isdigit(ch)) {
      std::cout << ch;
    }
    if (!(std::cin.get(ch))){
      return EXIT_FAILURE;
    }
  }

  return EXIT_SUCCESS;
}
