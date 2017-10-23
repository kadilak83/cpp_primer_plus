// Write a template function maxn() that takes as its arguments an array of items of
// type T and an integer representing the number of elements in the array and that
// returns the largest item in the array.Test it in a program that uses the function tem-
// plate with an array of six int value and an array of four double values.The pro-
// gram should also include a specialization that takes an array of pointers-to- char as
// an argument and the number of pointers as a second argument and that returns the
// address of the longest string. If multiple strings are tied for having the longest
// length, the function should return the address of the first one tied for longest.Test
// the specialization with an array of five string pointers.
#include <iostream>
#include <cstdlib>
#include <cstring>
#include <algorithm>

template <typename T>
T maxn(T dataarray[], int size);

template <>
char* maxn(char* dataarray[], int size);

bool charcmp(char* a, char* b);

int main()
{
  int iarray[] = {1, 5, 4, 9, 3, 11};
  double darray[] = {3.0, 1.0, 6.0, 2.0};
  char a[] = "a";
  char b[] = "dddd";
  char c[] = "eeeee";
  char d[] = "ccc";
  char e[] = "ggggggg";
  char f[] = "bbwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwww";
  char g[] = "hhhhhhhhaaa";
  int charraysize = 7;
  char * charray[] = {a, b, c, d, e, f, g};

  std::cout << "Max from int array: " << maxn(iarray, sizeof(iarray)/sizeof(iarray[0])) << std::endl;
  std::cout << "Max from double array: " << maxn(darray, sizeof(darray)/sizeof(darray[0])) << std::endl;
  std::cout << "Max from char array: " << maxn(charray, charraysize) << std::endl;
  std::cout << "Goodbye." << std::endl;
  return EXIT_SUCCESS;
}

template <typename T>
T maxn(T dataarray[], int size){
  return *std::max_element(dataarray, dataarray + size);
}

template <>
char* maxn(char* dataarray[], int size){
  return *std::max_element(dataarray, dataarray + size, charcmp);
}

bool charcmp(char a[], char b[]){
  return strlen(a) < strlen(b);
}
