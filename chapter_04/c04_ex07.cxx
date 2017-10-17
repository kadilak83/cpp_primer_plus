// William Wingate runs a pizza-analysis service. For each pizza, he needs to record
// the following information:
// * The name of the pizza company, which can consist of more than one word
// * The diameter of the pizza
// * The weight of the pizza
// Devise a structure that can hold this information and write a program that uses a
// structure variable of that type.The program should ask the user to enter each of the
// preceding items of information, and then the program should display that informa-
// tion. Use cin (or its methods) and cout
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
  Pizza pizza;

  cout << "Enter pizza company name: ";
  if(!getline(cin, pizza.company))
    return EXIT_FAILURE;

  cout << "Enter pizza diameter (cm): ";
  if(!(cin >> pizza.diameter))
    return EXIT_FAILURE;

  cout << "Enter pizza weight (g): ";
  if(!(cin >> pizza.weight))
    return EXIT_FAILURE;

  cout << "Pizza company: " << pizza.company << endl;
  cout << "Pizza diameter: " << pizza.diameter << " cm" << endl;
  cout << "Pizza weight: " << pizza.weight << " g"<< endl;
  return EXIT_SUCCESS;
}
