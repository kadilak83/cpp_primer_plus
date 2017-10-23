// Write a program using nested loops that asks the user to enter a value for the
// number of rows to display. It should then display that many rows of asterisks, with
// one asterisk in the first row, two in the second row, and so on. For each row, the
// asterisks are preceded by the number of periods needed to make all the rows
// display a total number of characters equal to the number of rows.A sample run
// would look like this:
// Enter number of rows: 5
// ....*
// ...**
// ..***
// .****
// *****
#include <iostream>
#include <cstdlib>
#include <string>


int main() {
  int rows = 0;

  std::cout << "Give number of rows: ";
  if(!(std::cin >> rows)){
      std::cout << "Wrong input, only numbers" << std::endl;
      return EXIT_FAILURE;
    }

  for(int row=1; row<=rows; ++row){
    for(int dot=0; dot<rows-row; ++dot)
      std::cout << ".";
    for(int star=0; star<row; ++star)
      std::cout << "*";
    std::cout << std::endl;
  }

  return EXIT_SUCCESS;
}
