// When you join the Benevolent Order of Programmers, you can be known at BOP
// meetings by your real name, your job title, or your secret BOP name.Write a pro-
// gram that can list members by real name, by job title, by secret name, or by a mem-
// ber’s preference. Base the program on the following structure:
// // Benevolent Order of Programmers name structure
// struct bop {
// char fullname[strsize]; // real name
// char title[strsize];
// // job title
// char bopname[strsize]; // secret BOP name
// int preference;
// // 0 = fullname, 1 = title, 2 = bopname
// };
// In the program, create a small array of such structures and initialize it to suitable
// values. Have the program run a loop that lets the user select from different alterna-
// tives:
// a. display by name
// c. display by bopname
// q. quit
// Note that “display by preference” does not mean display the preference member; it
// means display the member corresponding to the preference number. For instance, if
// preference is 1 , choice d would display the programmer’s job title.A sample run
// may look something like the following:
// Benevolent Order of Programmers Report
// a. display by name
// b. display by title
// c. display by bopname d. display by preference
// q. quit
// Enter your choice: a
// Wimp Macho
// Raki Rhodes
// Celia Laiter
// Hoppy Hipman
// Pat Hand
// Next choice: d
// Wimp Macho
// Junior Programmer
// MIPS
// Analyst Trainee
// LOOPY
// Next choice: q
// Bye!
#include <iostream>
#include <cstdlib>
#include <array>

const int strsize = 256;
const int bopscount = 3;
enum class Preference {fullname, title, bopname};
struct Bop {
  char fullname[strsize];
  char title[strsize];
  char bopname[strsize];
  Preference preference;
};

void display_menu();
void printout_bops(Bop[], int, Preference, bool);
void printout_bop(Bop, Preference);

int main() {
  char choice = 'a';

  Bop bops[bopscount] ={
    {
      "Martine Walker",
      "C++ Developer",
      "Brown",
      Preference::fullname
    },
    {
      "Daryl Crist",
      "Java Developer",
      "Pedro",
      Preference::title
    },
    {
      "Guadalupe Boehm",
      "C++ Developer",
      "Moses",
      Preference::bopname
    }
  };

  while (choice != 'q') {
    display_menu();
    if (!(std::cin.get(choice))){
      return EXIT_FAILURE;
    }
    std::cin.ignore();
    switch (choice) {
      case 'a': printout_bops(bops, bopscount, Preference::fullname, false);
                break;
      case 'b': printout_bops(bops, bopscount, Preference::title, false);
                break;
      case 'c': printout_bops(bops, bopscount, Preference::bopname, false);
                break;
      case 'd': printout_bops(bops, bopscount, Preference::fullname, true);
                break;
      case 'q': break;
      default: std::cout << "Please enter a, b, c, d or q" << std::endl;
    }
  }
  std::cout << "Goodbye" << std::endl;
  return EXIT_SUCCESS;
}

void display_menu(){
  std::cout << "==========================" << std::endl;
  std::cout << "a. display by name" << std::endl;
  std::cout << "b. display by title" << std::endl;
  std::cout << "c. display by bopname" << std::endl;
  std::cout << "d. display by preference" << std::endl;
  std::cout << "q. quit" << std::endl;
  std::cout << "==========================" << std::endl;
  std::cout << "Enter your choice: ";
}

void printout_bops(Bop bops[], int arraysize, Preference printout_choice, bool preference_printout){
  for (int i=0; i < arraysize; ++i){
    if (preference_printout) {
      printout_choice = bops[i].preference;
      }
    printout_bop(bops[i], printout_choice);
    }
}

void printout_bop(Bop bop, Preference printout_choice){
  switch (printout_choice){
    case Preference::fullname: std::cout << bop.fullname << std::endl;break;
    case Preference::title: std::cout << bop.title << std::endl;break;
    case Preference::bopname: std::cout << bop.bopname << std::endl;break;
  }
}
