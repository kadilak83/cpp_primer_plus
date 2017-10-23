// Write a program that asks the user to type in numbers.After each entry, the pro-
// gram should report the cumulative sum of the entries to date.The program should
// terminate when the user enters 0 .
#include <iostream>
#include <cstdlib>

int main() {
  long long total = 0;
  int number = 0;

  using namespace std;

  do {
    cout << "Enter a number (type 0 if you want exit): ";
    if(!(cin >> number))
    {
      cout << "Wrong input, only numbers" << endl;
      return EXIT_FAILURE;
    }
    total += number;
    cout << "Current sum is: " << total << endl;
  } while(number != 0);

  return EXIT_SUCCESS;
}
