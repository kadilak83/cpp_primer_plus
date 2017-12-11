#include <iostream>
#include <string>
#include <cstring>
#include "golf.h"

Golf::Golf(const char * name, int hc):handicap(hc){
    if(strlen(_name) < LIMIT){
        strcpy(fullname, name);
    }
    else {
        strncpy(fullname, name, LIMIT - 1);
    }
}

Golf Golf::setGolf(){

  std::cout << "Give full name of player: ";
  char name[LIMIT];
  int hc;
  if (!std::cin.getline(name, LIMIT) || strcmp(name,"")==0){
    throw std::range_error("Empty input full name");
  }

  std::cout << "Give a handicap of player: ";
  if(!(std::cin >> hc)){
    throw std::range_error("Wrong value of handicap, only numbers");
  }

  return Golf(name, hc);
}

void Golf::setHandicap(int hc){
  handicap = hc;
}

void Golf::showGolf() const{
  std::cout << "Player name: " << fullname << "; handicap: " << handicap << std::endl;
}
