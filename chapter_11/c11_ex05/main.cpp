//Rewrite the Stonewt class (Listings 11.16 and 11.17) so that it has a state member
//that governs whether the object is interpreted in stone form, integer pounds form,
//or floating-point pounds form. Overload the << operator to replace the
//show_stn() and show_lbs() methods. Overload the addition, subtraction, and
//multiplication operators so that one can add, subtract, and multiply Stonewt values.
//Test your class with a short program that uses all the class methods and friends.

#include <iostream>
#include <cstdlib>
#include "stonewt.h"

using namespace std;


int main()
{
    std::cout << std::boolalpha;

    Stonewt st_obj_1 = Stonewt(13.9);
    cout << "Stonewt_1: " << endl;
    cout << st_obj_1;

    Stonewt st_obj_2 = st_obj_1 * 2;
    cout << "Stonewt_2 is Stonewt_1 * 2:  " << endl;
    cout << st_obj_2;

    Stonewt st_obj_3 = 2 * st_obj_1;
    cout << "Stonewt_3 is 2 * Stonewt_1: " << endl;
    cout << st_obj_3;

    Stonewt st_obj_4 = Stonewt();
    if (st_obj_2>= st_obj_1)
    {
        st_obj_4 = st_obj_2 - st_obj_1;
        cout << "Stonewt_4 is Stonewt_2 - Stonewt_1: " << endl;
        cout << st_obj_4;
    }
    else
    {
        st_obj_4 = st_obj_1 - st_obj_2;
        cout << "Stonewt_4 is Stonewt_1 - Stonewt_4: " << endl;
        cout << st_obj_4;
    }

    Stonewt st_obj_5 = st_obj_1 + st_obj_4;
    cout << "Stonewt_5 is Stonewt_1 - Stonewt_4: " << endl;
    cout << st_obj_5;

    bool obj_eq = st_obj_1 == st_obj_4;
    cout << "Stonewt_1 and Stonewt_4 are equal: " << obj_eq << endl;

    obj_eq = st_obj_2 == st_obj_3;
    cout << "Stonewt_2 and Stonewt_3 are equal: " << obj_eq << endl;

    obj_eq = st_obj_3 == st_obj_5;
    cout << "Stonewt_3 and Stonewt_5 are equal: " << obj_eq << endl;

    obj_eq = st_obj_1 != st_obj_3;
    cout << "Stonewt_1 and Stonewt_3 aren't equal: " << obj_eq << endl;

    obj_eq = st_obj_3 > st_obj_1;
    cout << "Stonewt_3 is grater than Stonewt_1: " << obj_eq << endl;

    obj_eq = st_obj_3 >= st_obj_1;
    cout << "Stonewt_3 is grater or equal Stonewt_1: " << obj_eq << endl;

    obj_eq = st_obj_1 < st_obj_2;
    cout << "Stonewt_1 is lower than Stonewt_2: " << obj_eq << endl;

    obj_eq = st_obj_1 <= st_obj_2;
    cout << "Stonewt_1 is lower or equal Stonewt_2: " << obj_eq << endl;

    return EXIT_SUCCESS;
}

