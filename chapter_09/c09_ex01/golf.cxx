#include <iostream>
#include <string>
#include <cstring>
#include "golf.hxx"


void setgolf(golf & g, const char * name, int hc){
    strncpy(g.fullname, name, Len);
    g.handicap = hc;
}

int setgolf(golf & g){
  std::cout << "Give full name of player: ";
  if (!std::cin.getline(g.fullname, Len) || strcmp(g.fullname,"")==0){
    return 0;
  }
  std::cout << "Give a handicap of player: ";
  if(!(std::cin >> g.handicap)){
    return -1;
  }
  return 1;
}

void handicap(golf & g, int hc){
  g.handicap = hc;
}

void showgolf(const golf & g){
  std::cout << "Player name: " << g.fullname << "; handicap: " << g.handicap << std::endl;
}
