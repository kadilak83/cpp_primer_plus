// Write a program that matches the description of the program in Programming
// Exercise 8, but use a string class object instead of an array. Include the string
// header file and use a relational operator to make the comparison test.
#include <iostream>
#include <cstdlib>
#include <string>


int main() {
  std::string word = "";
  std::string end_word = "done";
  int word_count = 0;

  std::cout << "Enter words (to stop, type the word done):" << std::endl;
  while(std::cin>> word){
    if (word == end_word)
    {
      break;
    }
    ++word_count;
  }

  std::cout << "You entered a total of " << word_count << " words." << std::endl;
  return EXIT_SUCCESS;
}
