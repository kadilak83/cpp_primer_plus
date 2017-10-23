// Complete this skeleton by providing the described functions and prototypes. Note
// that there should be two show() functions, each using default arguments. Use
// const arguments when appropriate. Note that set() should use new to allocate
// sufficient space to hold the designated string.The techniques used here are similar
// to those used in designing and implementing classes. (You might have to alter the
// header filenames and delete the using directive, depending on your compiler.)
#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;

struct stringy {
  char * str;
  int ct;
};

void set(stringy &stry, const char *word);
void show(const stringy &stry, int n=1);
void show(const char *word, int n=1);

int main()
{
  stringy beany;
  char testing[] = "Reality isn't what it used to be.";
  set(beany, testing);
  show(beany);
  show(beany, 2);
  testing[0] = 'D';
  testing[1] = 'u';
  show(testing);
  show(testing, 3);
  show("Done!");
  cout << "bye\n";
  return EXIT_SUCCESS;
}

void set(stringy &stry, const char *word){
  stry.str = new char[strlen(word) + 1];
  strcpy(stry.str, word);
}

void show(const stringy &stry, int n)
{
  for (int i=0; i<n; ++i){
    cout << stry.str << endl;
  }
}

void show(const char *word, int n)
{
  for (int i=0; i<n; ++i){
    cout << word << endl;
  }
}
