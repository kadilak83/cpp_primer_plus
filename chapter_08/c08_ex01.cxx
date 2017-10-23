// Write a function that normally takes one argument, the address of a string, and
// prints that string once. However, if a second, type int , argument is provided and is
// nonzero, the function should print the string a number of times equal to the num-
// ber of times that function has been called at that point. (Note that the number of
// times the string is printed is not equal to the value of the second argument; it is
// equal to the number of times the function has been called.) Yes, this is a silly func-
// tion, but it makes you use some of the techniques discussed in this chapter. Use the
// function in a simple program that demonstrates how the function works.
#include <iostream>
#include <cstdlib>
#include <string>

void show_str(std::string word, int n=0);


int main(){
  std::string word = "Hello world!";

  std::cout << "n=0" << std::endl;
  show_str(word);
  std::cout << "n=3" << std::endl;
  show_str(word, 3);
  std::cout << "n=-2" << std::endl;
  show_str(word, -2);
  std::cout << "n=0" << std::endl;
  show_str(word);
  std::cout << "Goodbye" << std::endl;
  return EXIT_SUCCESS;
}

void show_str(std::string word, int n){
  static int exec_count =0;
  ++exec_count;
  int printout_count = n ? exec_count : 1;
  for (int i=0; i < printout_count; ++i){
    std::cout << word << std::endl;
  }
}
