// Do Programming Exercise 7 but use new to allocate a structure instead of declaring
// a structure variable.Also have the program request the pizza diameter before it
// requests the pizza company name.
#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

struct Pizza {
  string company;
  int diameter;
  float weight;
};


int main() {
  Pizza *pizza = new Pizza();

  cout << "Enter pizza company name: ";
  if(!getline(cin, pizza->company))
    return EXIT_FAILURE;

  cout << "Enter pizza diameter (cm): ";
  if(!(cin >> pizza->diameter))
    return EXIT_FAILURE;

  cout << "Enter pizza weight (g): ";
  if(!(cin >> pizza->weight))
    return EXIT_FAILURE;

  cout << "Pizza company: " << pizza->company << endl;
  cout << "Pizza diameter: " << pizza->diameter << " cm" << endl;
  cout << "Pizza weight: " << pizza->weight << " g"<< endl;

  delete pizza;
  return EXIT_SUCCESS;
}
