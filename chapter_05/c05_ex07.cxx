// Design a structure called car that holds the following information about an auto-
// mobile: its make, as a string in a character array or in a string object, and the year
// it was built, as an integer.Write a program that asks the user how many cars to cata-
// log.The program should then use new to create a dynamic array of that many car
// structures. Next, it should prompt the user to input the make (which might consist
// of more than one word) and year information for each structure. Note that this
// requires some care because it alternates reading strings with numeric data (see
// Chapter 4). Finally, it should display the contents of each structure.A sample run
// should look something like the following:
// How many cars do you wish to catalog? 2
// Car #1:
// Please enter the make: Hudson Hornet
// Please enter the year made: 1952
// Car #2:
// Please enter the make: Kaiser
// Please enter the year made: 1951
// Here is your collection:
// 1952 Hudson Hornet
// 1951 Kaiser
#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

struct Car{
  string make;
  int built_year;
};


int main() {
  using namespace std;
  int car_number = 0;
  cout << "How many cars do you wish to catalog?" << endl;
  if (!(cin >> car_number )){
      cout << "Wrong input, only numbers" << endl;
      return EXIT_FAILURE;
    }

  Car *cars = new Car[car_number];
  if (!cars)
  {
      return EXIT_FAILURE;
  }
  for(int i=0; i<car_number; ++i){
    cout << "Enter car make: ";
    cin.ignore();
    if(!getline(cin, cars[i].make))
      return EXIT_FAILURE;

    cout << "Enter year it was built: ";
    if(!(cin >> cars[i].built_year))
      return EXIT_FAILURE;
  }

  for(int i=0; i<car_number; ++i){
    cout << "Car #" << i+1 << ":" << endl;
    cout << cars[i].built_year << " " << cars[i].make << endl;
  }

  delete [] cars;
  return EXIT_SUCCESS;
}
