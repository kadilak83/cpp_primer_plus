#include <iostream>
#include <algorithm>
#include "sales.hxx"
namespace SALES
{
    Sales::Sales(const double ar[], int n){
        min = ar[0];
        max = ar[0];
        double total =  0;
        for(int current_quarter=0; current_quarter<QUARTERS; ++current_quarter){
            if (current_quarter<n){
                sales[current_quarter] = ar[current_quarter];
            }
            else {
                sales[current_quarter] = 0;
            }
            if(min > sales[current_quarter]){
                min = sales[current_quarter];
            }
            if(max < sales[current_quarter]){
                max = sales[current_quarter];
            }
            total += sales[current_quarter];
        }
        average = total / QUARTERS;
    }

    Sales Sales::setSales(){
        double sales_values[QUARTERS] = {0.0};
        for(int current_quarter=0; current_quarter<QUARTERS; ++current_quarter){
            std::cout << "Give a sales for quarter " << current_quarter + 1 << " : ";
            if(!(std::cin >> sales_values[current_quarter])){
                throw std::range_error("Wrong value of score, only numbers");
            }
        }
        Sales s = Sales(sales_values, QUARTERS);
        return s;
    }

    void Sales::showSales() const {
        std::cout << "Quarters sales: ";
//        for(int i=0; i<QUARTERS; ++i){
//            std::cout << sales[i] << ", ";
//        }
        std::for_each(sales, sales + QUARTERS,[](double n){std::cout << n <<", ";});
        std::cout << std::endl;
        std::cout << "Average sale: " << average << std::endl;
        std::cout << "Minimal sale: " << min << std::endl;
        std::cout << "Maximal sale: " << max << std::endl;
    }
}
