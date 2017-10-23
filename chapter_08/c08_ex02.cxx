// The CandyBar structure contains three members.The first member holds the brand
// name of a candy bar.The second member holds the weight (which may have a frac-
// tional part) of the candy bar, and the third member holds the number of calories
// (an integer value) in the candy bar.Write a program that uses a function that takes
// as arguments a reference to CandyBar , a pointer-to- char , a double , and an int and
// uses the last three values to set the corresponding members of the structure.The last
// three arguments should have default values of “Millennium Munch,” 2.85, and 350.
// Also the program should use a function that takes a reference to a CandyBar as an
// argument and displays the contents of the structure. Use const where appropriate.
#include <iostream>
#include <cstdlib>
#include <cstring>

const int BRAND_MAX_SIZE = 50;
struct CandyBar
{
  char brand[BRAND_MAX_SIZE];
  float weight;
  int calories;
};


void print_candy_bar(const CandyBar &candy_bar);
void fill_candy_bar(CandyBar &candy_bar, char * brand, double weight, int calories);

int main()
{
  char brand[] = "Millenium_Munch";
  CandyBar snack;
  try{
    fill_candy_bar(snack, brand, 2.85, 350);
  } catch (std::overflow_error &e) {
    std:: cout << e.what() << std::endl;
    return EXIT_FAILURE;
  }
  print_candy_bar(snack);
  std::cout << "Goodbye" << std::endl;
  return EXIT_SUCCESS;
}

void fill_candy_bar(CandyBar &candy_bar, char * brand, double weight, int calories){
  if(strlen(brand) < BRAND_MAX_SIZE){
    strcpy(candy_bar.brand, brand);
    candy_bar.weight = weight;
    candy_bar.calories = calories;
  }
  else {
    throw std::overflow_error("Too big size of input 'brand'!");
  }
}

void print_candy_bar(const CandyBar &candy_bar)
{
  std::cout << "Snack:" << std::endl;
  std::cout << "\tbrand: " << candy_bar.brand << std::endl;
  std::cout << "\tweight: " << candy_bar.weight << std::endl;
  std::cout << "\tcalories: " << candy_bar.calories << std::endl;
}
