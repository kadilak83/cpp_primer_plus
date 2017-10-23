// Write a program that reads input a word at a time until a lone q is entered.The
// program should then report the number of words that began with vowels, the num-
// ber that began with consonants, and the number that fit neither of those categories.
// One approach is to use isalpha() to discriminate between words beginning with
// letters and those that don’t and then use an if or switch statement to further iden-
// tify those passing the isalpha() test that begin with vowels.A sample run might
// look like this:
// Enter words (q to quit):
// The 12 awesome oxen ambled
// quietly across 15 meters of lawn. q
// 5 words beginning with vowels
// 4 words beginning with consonants
// 2 others
#include <iostream>
#include <cstdlib>
#include <string>


int main() {
  std::string word = "";
  std::string end_word = "q";
  std::string vowels = "aeyioąęuó";
  int vowels_start_words = 0;
  int consonants_start_words = 0;
  int other_start_words = 0;
  int vowel_idx = 0;

  std::cout << "Enter words ('q' to quit):" << std::endl;
  while(std::cin>> word){
    if (word==end_word)
    {
      break;
    }
    else if (isalpha(word[0])){
      vowel_idx = vowels.find(word[0]);
      if (vowel_idx >= 0 ){
        ++vowels_start_words;
      }
      else {
        ++consonants_start_words;
      }
    } else {
      ++other_start_words;
    }
  }

  std::cout << vowels_start_words << " words beginning with vowels." << std::endl;
  std::cout << consonants_start_words << " words beginning with consonants." << std::endl;
  std::cout << other_start_words << " others." << std::endl;
  return EXIT_SUCCESS;
}
