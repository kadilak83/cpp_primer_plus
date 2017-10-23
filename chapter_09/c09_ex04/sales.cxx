#include <iostream>
#include <algorithm>
#include "sales.hxx"
namespace SALES
{

    void setSales(Sales & s, const double ar[], int n){
        s.min = ar[0];
        s.max = ar[0];
        double total =  0;
        for(int current_quarter=0; current_quarter<QUARTERS; ++current_quarter){
            if (current_quarter<n){
                s.sales[current_quarter] = ar[current_quarter];
            }
            else {
                s.sales[current_quarter] = 0;
            }
            if(s.min > s.sales[current_quarter]){
                s.min = s.sales[current_quarter];
            }
            if(s.max < s.sales[current_quarter]){
                s.max = s.sales[current_quarter];
            }
            total += s.sales[current_quarter];
        }
        s.average = total / QUARTERS;
    }

    void setSales(Sales & s){
        double total =  0;

        for(int current_quarter=0; current_quarter<QUARTERS; ++current_quarter){
            std::cout << "Give a sales for quarter " << current_quarter + 1 << " : ";
            if(!(std::cin >> s.sales[current_quarter])){
                throw std::range_error("Wrong value of score, only numbers");
            }
            if (current_quarter==0){
                s.min = s.sales[current_quarter];
                s.max = s.sales[current_quarter];
            } else {
                if(s.min > s.sales[current_quarter]){
                    s.min = s.sales[current_quarter];
                }
                if(s.max < s.sales[current_quarter]){
                    s.max = s.sales[current_quarter];
                }
            }
            total += s.sales[current_quarter];
        }
        s.average = total / QUARTERS;
    }

    void showSales(const Sales & s){
        std::cout << "Quarters sales: ";
        std::for_each(s.sales, s.sales + QUARTERS,[](double n){std::cout << n <<", ";});
        std::cout << std::endl;
        std::cout << "Average sale: " << s.average << std::endl;
        std::cout << "Minimal sale: " << s.min << std::endl;
        std::cout << "Maximal sale: " << s.max << std::endl;
    }
}
