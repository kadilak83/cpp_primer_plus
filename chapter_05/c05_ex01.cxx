// Write a program that requests the user to enter two integers.The program should
// then calculate and report the sum of all the integers between and including the two
// integers.At this point, assume that the smaller integer is entered first. For example, if
// the user enters 2 and 9 , the program should report that the sum of all the integers
// from 2 through 9 is 44.
#include <iostream>
#include <cstdlib>


int main(){
  using  namespace std;
  int number_1 = 0;
  int number_2 = 0;

  cout << "Enter a number: ";
  if (!(cin >> number_1))
    return EXIT_FAILURE;

  cout << "Enter a number (higher than previous): ";
  if (!(cin >> number_2) || number_2 < number_1)
    return EXIT_FAILURE;
  long total = 0;
  for (int i=number_1; i<=number_2; ++i)
  {
      total+=i;
  }

  cout << "Sum of all numbers from: " << number_1 << " to: " << number_2 << " is: " << total << endl;
  return EXIT_SUCCESS;
}
