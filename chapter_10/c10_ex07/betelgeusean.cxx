#include <iostream>
#include <cstring>
#include "betelgeusean.hxx"

Plorg::Plorg(const char * _name)
{
    strncpy(fullname, name, LIMIT - 1);
    fullname[LIMIT-1] = '\0';
}

void Plorg::setCI(int _ci)
{
    ci = _ci;
}

void Plorg::report() const
{
    std::cout << "Name: " << name << ", CI: " << ci << std::endl;
}
