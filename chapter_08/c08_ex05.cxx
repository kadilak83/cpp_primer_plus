// Write a template function max5() that takes as its argument an array of five items
// of type T and returns the largest item in the array. (Because the size is fixed, it can
// be hard-coded into the loop instead of being passed as an argument.) Test it in a
// program that uses the function with an array of five int value and an array of five
// double values.
#include <iostream>
#include <cstdlib>
#include <algorithm>

const int ARRAYSIZE = 5;
template <typename T>
T max5(T dataarray[]);

int main()
{
  int iarray[] = {1, 5, 4, 9, 3};
  double darray[] = {3.0, 1.0, 6.0, 4.0, 2.0};
  std::cout << "Max from int array: " << max5(iarray) << std::endl;
  std::cout << "Max from double array: " << max5(darray) << std::endl;
  std::cout << "Goodbye." << std::endl;
  return EXIT_SUCCESS;
}

template <typename T>
T max5(T dataarray[]){
  return *std::max_element(dataarray, dataarray + ARRAYSIZE);
}
