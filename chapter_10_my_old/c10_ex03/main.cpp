//Do Programming Exercise 1 from Chapter 9 but replace the code shown there with
//an appropriate golf class declaration. Replace setgolf(golf &, const char*, int)
//with a constructor with the appropriate argument for providing initial values.
//Retain the interactive version of setgolf() but implement it by using the con-
//structor. (For example, for the code for setgolf() , obtain the data, pass the data to
//the constructor to create a temporary object, and assign the temporary object to the
//invoking object, which is *this .)

#include <iostream>
#include <cstdlib>
#include "golf.hxx"

using namespace std;

int main() {
  char ann_full_name[] = "Ann Birdfree";
  Golf ann = Golf(ann_full_name, 24);
  ann.showGolf();
  ann.setHandicap(15);
  ann.showGolf();

  try{
    Golf andy = Golf::setGolf();
    andy.showGolf();
  }
  catch (std::range_error &e)
  {
    std::cout << e.what() << std::endl;
    return EXIT_FAILURE;
  }

  return EXIT_SUCCESS;
}

