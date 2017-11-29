#include <string>
#include <iostream>
#include <cstdlib>
#include <cstring>

class Person {
  private:
    static const int LIMIT = 25;
    std::string lname;
    char fname[LIMIT];
  public:
    Person() {lname = ""; fname[0] = '\0'; }
    Person(const std::string & ln, const char * fn = "Heyyou");
    void Show() const;
    void FormalShow() const;
};

int main(){
  Person one;
  one.Show();
  std::cout << std::endl;
  one.FormalShow();
  std::cout << std::endl;

  Person two("Smythecraft");
  two.Show();
  std::cout << std::endl;
  two.FormalShow();
  std::cout << std::endl;

  Person three("Dimwiddy", "Sam");
  three.Show();
  std::cout << std::endl;
  three.FormalShow();
  std::cout << std::endl;

  return EXIT_SUCCESS;
}

Person::Person(const std::string & ln, const char * fn){
  lname = ln;
  if(strlen(fn) < LIMIT){
    strcpy(fname, fn);
  }
  else {
    strncpy(fname, fn, LIMIT - 1);
  }
}

void Person::FormalShow() const{
  std::cout << fname << " " << lname;
}

void Person::Show() const{
  std::cout << lname << ", "<< fname;
}
