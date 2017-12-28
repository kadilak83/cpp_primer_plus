#include <string>
#include <cstring>
#include <iostream>
#include "person.h"

Person::Person(const std::string & ln, const char * fn):lname(ln)
{
    strncpy(fname, fn, LIMIT - 1);
    fname[LIMIT-1] = '\0';
}

void Person::Show() const
{
    std::cout<<lname<<" "<<fname<<std::endl;
}

void Person::FormalShow() const
{
    std::cout<<fname<<" "<<lname<<std::endl;
}

