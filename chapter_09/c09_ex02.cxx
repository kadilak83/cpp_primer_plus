// Redo Listing 9.9, replacing the character array with a string object.The program
// should no longer have to check whether the input string fits, and it can compare
// the input string to "" to check for an empty line.

#include <iostream>
#include <cstdlib>
#include <string>
#include <ctype.h>

void strcount(const std::string &str);

int main()
{
  using std::cout;
  using std::cin;
  std::string input;
  cout << "Enter a line:\n";
  while(getline(cin, input) && input.compare("")!=0)
  {
    strcount(input);
    cout << "Enter next line (empty line to quit):\n";
  }
  std::cout << "Goodbye" << std::endl;
  return EXIT_SUCCESS;
}

void strcount(const std::string &str)
{
  using std::cout;
  using std::cin;
  static int total = 0;
  int count = str.length();

  cout << "\"" << str <<"\" contains ";
  total += count;
  cout << count << " characters\n";
  cout << total << " characters total\n";
}
