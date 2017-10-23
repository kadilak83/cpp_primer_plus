// Put together a program that keeps track of monetary contributions to the Society
// for the Preservation of Rightful Influence. It should ask the user to enter the num-
// ber of contributors and then solicit the user to enter the name and contribution of
// each contributor.The information should be stored in a dynamically allocated array
// of structures. Each structure should have two members: a character array (or else a
// string object) to store the name and a double member to hold the amount of the
// contribution.After reading all the data, the program should display the names and
// amounts donated for all donors who contributed $10,000 or more.This list should
// be headed by the label Grand Patrons.After that, the program should list the
// remaining donors.That list should be headed Patrons. If there are no donors in one
// of the categories, the program should print the word “none.”Aside from displaying
// two categories, the program need do no sorting.
#include <iostream>
#include <cstdlib>
#include <string>
#include <memory>

struct Contributor {
  std::string fullname;
  double contribution;
};

int main() {
  int contributors_count = 0;
  std::cout << "Give number of contributors: ";
  if(!(std::cin >> contributors_count) || contributors_count <= 0){
      std::cout << "Wrong input, only positive numbers" << std::endl;
      return EXIT_FAILURE;
    }

  std::unique_ptr<Contributor[]> contributors(new Contributor[contributors_count]);
  if (!contributors)
  {
      return EXIT_FAILURE;
  }

  for (int i = 0; i < contributors_count; ++i) {
    std::cout << "Give full name of contributor: ";
    std::cin.ignore();
    if(!getline(std::cin, contributors[i].fullname)){
      return EXIT_FAILURE;
    }
    std::cout << "Give a contribution: ";
    if(!(std::cin >> contributors[i].contribution)){
      return EXIT_FAILURE;
    }
  }
  std::cout << "Grand Patrons: " << std::endl;
  bool empty_list = true;
  for (int i=0; i < contributors_count; ++i){
    if (contributors[i].contribution >= 10000){
      std::cout << contributors[i].fullname << std::endl;
      empty_list = false;
    }
  }
  if (empty_list){
    std::cout << "None" << std::endl;
  }

  empty_list = true;
  std::cout << std::endl << "Remaining donors: " << std::endl;
  for (int i=0; i<contributors_count; ++i){
    if (contributors[i].contribution < 10000){
      std::cout << contributors[i].fullname << std::endl;
      empty_list = false;
    }
  }
  if (empty_list){
    std::cout << "None" << std::endl;
  }

  std::cout << "Goodbye" << std::endl;
  return EXIT_SUCCESS;
}
