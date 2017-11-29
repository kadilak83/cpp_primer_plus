#include <iostream>
#include <cstdlib>
#include "betelgeusean.hxx"

using namespace std;

int main()
{
    Plorg plorg_01 = Plorg();
    Plorg plorg_02 = Plorg("Ploreeg");

    plorg_01.report();
    plorg_02.report();

    plorg_01.setCI(23);
    plorg_02.setCI(45);

    plorg_01.report();
    plorg_02.report();

    return EXIT_SUCCESS;
}

