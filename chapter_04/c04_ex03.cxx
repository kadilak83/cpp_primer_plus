// Write a program that asks the user to enter his or her first name and then last
// name, and that then constructs, stores, and displays a third string, consisting of the
// user’s last name followed by a comma, a space, and first name. Use char arrays and
// functions from the cstring header file. A sample run could look like this:
// Enter your first name: Flip
// Enter your last name: Fleming
// Here’s the information in a single string: Fleming, Flip
#include <iostream>
#include <cstdlib>
#include <cstring>

int main()
{
  using namespace std;
  const int ArSize = 30;
  char name[ArSize] = "";
  char last_name[ArSize] = "";
  char base_str[] = "Here’s the information in a single string: ";
  char comma_space[] = ", ";

  cout << "Enter your first name: ";
  if (!cin.getline(name, ArSize))
    return EXIT_FAILURE;

  cout << "Enter your last name: ";
  if (!cin.getline(last_name, ArSize))
    return EXIT_FAILURE;

  int single_str_len = strlen(base_str) + strlen(last_name) + strlen(comma_space) + strlen(name) + 1;
  char*  single_str = new char[single_str_len];

  strcat(single_str, base_str);
  strcat(single_str, last_name);
  strcat(single_str, comma_space);
  strcat(single_str, name);
  cout << single_str << endl;
  delete [] single_str;
  return EXIT_SUCCESS;
}
