// Write a program that asks the user to enter his or her first name and then last
// name, and that then constructs, stores, and displays a third string consisting of the
// user’s last name followed by a comma, a space, and first name. Use string objects
// and methods from the string header file.A sample run could look like this:
// Enter your first name: Flip
// Enter your last name: Fleming
// Here’s the information in a single string: Fleming, Flip

#include <iostream>
#include <cstdlib>
#include <string>

int main()
{
  using namespace std;
  string name = "";
  string last_name = "";
  string single_str = "Here’s the information in a single string: ";

  cout << "Enter your first name: ";
  if(!getline(cin, name))
    return EXIT_FAILURE;

  cout << "Enter your last name: ";
  if(!getline(cin, last_name))
    return EXIT_FAILURE;

  single_str += last_name + ", " + name;

  cout << single_str << endl;
  return EXIT_SUCCESS;
}
