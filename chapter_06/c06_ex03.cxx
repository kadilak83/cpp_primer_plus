// Write a precursor to a menu-driven program.The program should display a menu
// offering four choices, each labeled with a letter. If the user responds with a letter
// other than one of the four valid choices, the program should prompt the user to
// enter a valid response until the user complies.Then the program should use a
// switch to select a simple action based on the user’s selection.A program run could
// look something like this:
// Please enter
// c) carnivore
// t) tree
// f
// Please enter
// Please enter
// A maple is a
// one of the following choices:
// p) pianist
// g) game
// a c, p, t, or g: q
// a c, p, t, or g: t
// tree.
#include <iostream>
#include <cstdlib>

void display_menu();

int handle_menu(char);

int main() {
  char choice;

  display_menu();
  do {
    if (!(std::cin.get(choice))){
      return EXIT_FAILURE;
    }
    std::cin.ignore();
  } while (handle_menu(choice));

  std::cout << "Goodbye" << std::endl;
  return EXIT_SUCCESS;
}

void display_menu(){
  std::cout << "a) triangle" << std::endl;
  std::cout << "b) square" << std::endl;
  std::cout << "c) circle" << std::endl;
  std::cout << "d) rectangle" << std::endl;
}

int handle_menu(char menu_choice){
  switch (menu_choice) {
    case 'a': std::cout << "Triangle: 1/2 * a * h" << std::endl;
              break;
    case 'b': std::cout << "Square: a^2" << std::endl;
              break;
    case 'c': std::cout << "Circle: pi*r^2" << std::endl;
              break;
    case 'd': std::cout << "Rectangle: a * h" << std::endl;
              break;
    default: std::cout << "Please enter a, b, c or d" << std::endl;
              return 1;
  }
  return 0;
}
