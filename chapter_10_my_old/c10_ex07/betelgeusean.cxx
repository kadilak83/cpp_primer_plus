#include <iostream>
#include <cstring>
#include "betelgeusean.hxx"

Plorg::Plorg(const char * _name)
{
    if(strlen(_name) < LIMIT){
      strcpy(name, _name);
    }
    else {
      strncpy(name, _name, LIMIT - 1);
    }
    ci = 50;
}

void Plorg::setCI(int _ci)
{
    ci = _ci;
}

void Plorg::report() const
{
    std::cout << "Name: " << name << ", CI: " << ci << std::endl;
}
