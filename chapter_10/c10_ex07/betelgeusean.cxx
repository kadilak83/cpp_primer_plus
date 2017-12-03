#include <iostream>
#include <cstring>
#include "betelgeusean.hxx"

Plorg::Plorg(const char * _name)
{
    strncpy(name, _name, LIMIT);
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
