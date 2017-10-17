// Rewrite Listing 4.4, using the C++ string class instead of char arrays.
// instr2.cpp -- reading more than one word with getline
#include <iostream>
#include <cstdlib>
#include <string>

int main()
{
  using namespace std;
  string name;
  string dessert;

  cout << "Enter your name:\n";
  if (!getline(cin, name))
    return EXIT_FAILURE;

  cout << "Enter your favorite dessert:\n";
  if (!getline(cin, dessert))
    return EXIT_FAILURE;

  cout << "I have some delicious " << dessert;
  cout << " for you, " << name << ".\n";

  return EXIT_SUCCESS;
}
