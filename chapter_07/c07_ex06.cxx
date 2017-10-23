// Write a program that uses the following functions:
// Fill_array() takes as arguments the name of an array of double values and an
// array size. It prompts the user to enter double values to be entered in the array. It
// ceases taking input when the array is full or when the user enters non-numeric
// input, and it returns the actual number of entries.
// Show_array() takes as arguments the name of an array of double values and an
// array size and displays the contents of the array.
// Reverse_array() takes as arguments the name of an array of double values and an
// array size and reverses the order of the values stored in the array.
// The program should use these functions to fill an array, show the array, reverse the
// array, show the array, reverse all but the first and last elements of the array, and then
// show the array.
#include <iostream>
#include <cstdlib>
#include <string>
#include <algorithm>

const int maxarraysize = 10;

int Fill_array(double dataarray[], int arraysize);
void Show_array(double dataarray[], int itemcount);
void Reverse_array(double dataarray[], int itemcount);

int main() {

  double dataarray[maxarraysize] = {0};
  int currentitemscount = 0;
  try{
    currentitemscount = Fill_array(dataarray, maxarraysize);
  } catch (std::range_error &e){
    std:: cout << e.what() << std::endl;
    return EXIT_FAILURE;
  }

  Show_array(dataarray, currentitemscount);
  Reverse_array(dataarray, currentitemscount);
  Show_array(dataarray, currentitemscount);
  Reverse_array(dataarray, currentitemscount);

  // reverse all but the first and last elements of the array
  Reverse_array(dataarray, currentitemscount-1);
  Reverse_array(dataarray, currentitemscount-2);
  Reverse_array(dataarray, currentitemscount-1);
  Show_array(dataarray, currentitemscount);
  std::cout << "Goodbye." << std::endl;
  return EXIT_SUCCESS;
}


int Fill_array(double dataarray[], int arraysize){
  char choice = 'y';
  int currentCount = 0;
  do {
    std::cout << "Give a number: ";
    if(!(std::cin >> dataarray[currentCount])){
        throw std::range_error("Wrong input, only numbers");
      }
    ++currentCount;
    if (currentCount < arraysize){
      std::cout << "Do you want to add another number (y): ";
      std::cin.ignore();
      if (!(std::cin.get(choice))){
          throw std::range_error("Wrong value of 'choice'.");
        }
      }
  } while(currentCount < arraysize && choice == 'y');
  return currentCount;
}

void Show_array(double dataarray[], int itemcount){
  for (int i=0; i<itemcount; ++i){
    std::cout << dataarray[i] << ", ";
  }
  std::cout << std::endl;
}

void Reverse_array(double dataarray[], int itemcount){
  std::reverse(dataarray, dataarray + itemcount);
}
