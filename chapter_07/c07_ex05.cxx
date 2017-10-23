// Define a recursive function that takes an integer argument and returns the factorial
// of that argument. Recall that 3 factorial, written 3!, equals 3 × 2!, and so on, with 0!
// defined as 1. In general, if n is greater than zero, n! = n * (n - 1)!.Test your function
// in a program that uses a loop to allow the user to enter various values for which the
// program reports the factorial.
#include <iostream>
#include <cstdlib>
#include <array>
#include <cctype>

unsigned long long calculate_factorial(unsigned int n);

int main()
{
  unsigned int n = 0;
  char choice = 'y';

  do {
    std::cout << "Give a number: ";
    if(!(std::cin >> n)){
        std::cout << "Wrong input, only positive numbers" << std::endl;
        return EXIT_FAILURE;
      }
    std::cout << "Factorial of " << n << ": " << calculate_factorial(n) << std::endl;

    std::cout << "Do you want to calculate a factorial of another number (y): ";
    std::cin.ignore();
    if (!(std::cin.get(choice))){
        std::cout << "Wrong input" << std::endl;
        return EXIT_FAILURE;
      }
  } while(choice == 'y');
  std::cout << "Goodbye." << std::endl;
  return EXIT_SUCCESS;
}

unsigned long long calculate_factorial(unsigned int n){
  if (n > 0){
    return n * calculate_factorial(--n);
  } else {
    return 1;
  }
}
