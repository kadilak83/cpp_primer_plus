// Begin with the following structure declaration:
// struct chaff
// {
// char dross[20];
// int slag;
// };
// Write a program that uses placement new to place an array of two such structures in
// a buffer.Then assign values to the structure members (remembering to use
// strcpy() for the char array) and use a loop to display the contents. Option 1 is to
// use a static array, like that in Listing 9.10, for the buffer. Option 2 is to use regular
// new to allocate the buffer.
#include <iostream>
#include <cstdlib>
#include <cstring>
#include <new>
#include <algorithm>

const int DROSS_SIZE = 20;
struct chaff{
  char dross[DROSS_SIZE];
  int slag;
};
const int ARRAY_SIZE = 2;

void fill_chaff(chaff &chaff_obj, const char *dross, int slag);
void print_chaff(const chaff &chaff_obj);

int main() {
  char *chaff_buffer = new char[sizeof(chaff) * ARRAY_SIZE];
  chaff *chaff_array = new (chaff_buffer) chaff[ARRAY_SIZE];

  try
  {
    fill_chaff(chaff_array[0], "Chaff Dros no1", 12);
    fill_chaff(chaff_array[1], "Chaff Dros no2", 34);
  }
  catch (std::overflow_error &e)
  {
    std:: cout << e.what() << std::endl;
    delete[] chaff_buffer;
    return EXIT_FAILURE;
  }

  std::for_each (chaff_array, chaff_array + ARRAY_SIZE, print_chaff);

  std::cout << "Goodbye" << std::endl;
  delete[] chaff_buffer;
  return EXIT_SUCCESS;
}

void fill_chaff(chaff &chaff_obj, const char *dross, int slag){
  if(strlen(dross) < DROSS_SIZE)
  {
    strcpy(chaff_obj.dross, dross);
    chaff_obj.slag = slag;
  }
  else
  {
      throw std::overflow_error("Too big size of input 'dross'!");
  }
}

void print_chaff(const chaff &chaff_obj){
  std::cout << "dross: " << chaff_obj.dross << ", slag: " << chaff_obj.slag << "\n";
}
