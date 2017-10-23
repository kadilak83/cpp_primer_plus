// Write a program that uses an array of char and a loop to read one word at a time
// until the word done is entered.The program should then report the number of
// words entered (not counting done ).A sample run could look like this:
// Enter words (to stop, type the word done):
// anteater birthday category dumpster
// envy finagle geometry done for sure
// You entered a total of 7 words.
// You should include the cstring header file and use the strcmp() function to
// make the comparison test.
#include <iostream>
#include <cstdlib>
#include <cstring>


int main() {
  char word[256] = "";
  char end_word[] = "done";
  int word_count = 0;

  std::cout << "Enter words (to stop, type the word done):" << std::endl;
  while(std::cin>> word){
    if (!strcmp(word, end_word))
    {
      break;
    }
    ++word_count;
  }

  std::cout << "You entered a total of " << word_count << " words." << std::endl;
  return EXIT_SUCCESS;
}
