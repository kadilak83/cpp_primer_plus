#include <iostream>
#include <cstdlib>
#include "sales.hxx"

using namespace std;

int main()
{
    SALES::Sales sales1;
    double sales_values[] = {23.0, 45.0, 67.0};
    SALES::setSales(sales1,sales_values, 3);
    SALES::showSales(sales1);

    SALES::Sales sales2;
    try{
        SALES::setSales(sales2);
    } catch (std::range_error &e){
        std::cout << e.what() << std::endl;
        return EXIT_FAILURE;
    }
    SALES::showSales(sales2);
    return EXIT_SUCCESS;
}

