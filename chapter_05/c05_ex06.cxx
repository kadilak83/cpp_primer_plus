// Do Programming Exercise 5 but use a two-dimensional array to store input for 3
// years of monthly sales. Report the total sales for each individual year and for the
// combined years.
#include <iostream>
#include <cstdlib>
#include <string>

int total_sales_for_year(int sales[], int sales_size);

int main() {
  using namespace std;
  const int number_of_months = 12;
  const int number_of_years =3;
  string months[number_of_months] = {
    "January",
    "February",
    "March",
    "April",
    "May",
    "June",
    "July",
    "August",
    "September",
    "October",
    "November",
    "December"};

  int monthly_sales[number_of_years][number_of_months] = {{0}};
  for(int year=0; year<number_of_years; ++year){
    for(int month=0; month<number_of_months; month++){
      cout << "How many books were sold in " << months[month] << ", year " << year+1 << "?" << endl;
      if(!(cin >> monthly_sales[year][month]))
      {
        cout << "Wrong input, only numbers" << endl;
        return EXIT_FAILURE;
      }
      if(monthly_sales[year][month]<0){
        cout << "Wrong value." << endl;
        monthly_sales[year][month] = 0;
        --month;
      }
    }
  }

  int total_sales = 0;
  int year_sales = 0;
  for(int year=0; year<number_of_years; year++){
    year_sales = total_sales_for_year(monthly_sales[year], number_of_months);
    total_sales += year_sales;
    cout << "Sales in year " << year+1 << ": " << year_sales << " books" << endl;
  }

  cout << "Total sales for " << number_of_years << " years: " << total_sales << " books" << endl;
  return EXIT_SUCCESS;
}


int total_sales_for_year(int sales[], int sales_size){
  int total_sales = 0;
  for(int i=0; i<sales_size; ++i){
    total_sales += sales[i];
  }

  return total_sales;
}
