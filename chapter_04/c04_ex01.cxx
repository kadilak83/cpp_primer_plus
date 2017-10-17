// Write a C++ program that requests and displays information as shown in the fol-
// lowing example of output:
// What is your first name? Betty Sue
// What is your last name? Yewe
// What letter grade do you deserve? B
// What is your age? 22
// Name: Yewe, Betty Sue
// Grade: C
// Age: 22
// Note that the program should be able to accept first names that comprise more
// than one word.Also note that the program adjusts the grade downward—that is, up
// one letter.Assume that the user requests an A, a B, or a C so that you don’t have to
// worry about the gap between a D and an F.
#include <iostream>
#include <cstdlib>
#include <string>


int main(){
  using namespace std;
  string name = "";
  string last_name = "";
  char grade = 'A';
  int age = 0;

  cout << "What is your first name? ";
  if(!getline(cin, name))
    return EXIT_FAILURE;

  cout << "What is your last name? ";
  if(!getline(cin, last_name))
    return EXIT_FAILURE;

  cout << "What letter grade do you deserve? ";
  if (!(cin >> grade))
    return EXIT_FAILURE;
  grade++;

  cout << "What is your age? ";
  if(!(cin >> age))
    return EXIT_FAILURE;

  cout << "Name: " << last_name << ", " << name << endl;
  cout << "Grade: " << grade << endl;
  cout << "Age: " << age << endl;

  return EXIT_SUCCESS;
}
