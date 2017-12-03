//Do Programming Exercise 4 from Chapter 9 but convert the Sales structure and
//its associated functions to a class and its methods. Replace the setSales(Sales &,
//double [], int) function with a constructor. Implement the interactive
//setSales(Sales &) method by using the constructor. Keep the class within the
//namespace SALES .

#include <iostream>
#include <cstdlib>
#include "sales.h"

using namespace std;

int main()
{
    double sales_values[] = {23.0, 45.0, 67.0};
    SALES::Sales sales1 = SALES::Sales(sales_values, 3);
    sales1.showSales();

    try{
        SALES::Sales sales2 = SALES::Sales::setSales();
        sales2.showSales();
    } catch (std::range_error &e){
        std::cout << e.what() << std::endl;
        return EXIT_FAILURE;
    }
    return EXIT_SUCCESS;
}

