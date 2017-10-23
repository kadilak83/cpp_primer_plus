// Note that setgolf() is overloaded. Using the first version of setgolf() would
// look like this:
// golf ann;
// setgolf(ann, "Ann Birdfree", 24);
// The function call provides the information that’s stored in the ann structure. Using
// the second version of setgolf() would look like this:
// golf andy;
// setgolf(andy);
// The function would prompt the user to enter the name and handicap and store
// them in the andy structure.This function could (but doesn’t need to) use the first
// version internally.
// Put together a multifile program based on this header. One file, named golf.cpp ,
// should provide suitable function definitions to match the prototypes in the header
// file.A second file should contain main() and demonstrate all the features of the
// prototyped functions. For example, a loop should solicit input for an array of golf
// structures and terminate when the array is full or the user enters an empty string
// for the golfer’s name.The main() function should use only the prototyped func-
// tions to access the golf structures.

#include <cstdlib>
#include <iostream>
#include "golf.hxx"

int main() {
  golf ann;
  char ann_full_name[] = "Ann Birdfree";
  setgolf(ann, ann_full_name, 24);
  showgolf(ann);

  golf andy;
  int status_code = 0;
  status_code = setgolf(andy);
  if(status_code ==1)
  {
    showgolf(andy);
  }
  else if(status_code == 0)
  {
    std::cout << "Player name is empty\n";
  }
  else
  {
    std::cout << "Wrong value fo handicap\n";
  }

  handicap(ann, 15);
  showgolf(ann);

  return EXIT_SUCCESS;
}
