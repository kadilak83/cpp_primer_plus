#include <iostream>
#include <string>
#include <cstring>
#include "golf.hxx"


Golf::Golf(const char * name, int hc){
  strncpy(fullName, name, LIMIT);
  handicap = hc;
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

  Golf golf =  Golf(name, hc);
  return golf;
}


  // function resets handicap to new value
void Golf::setHandicap(int hc){
  handicap = hc;
}

// function displays contents of golf structure
void Golf::showGolf() const{
  std::cout << "Player name: " << fullName << "; handicap: " << handicap << std::endl;
}
