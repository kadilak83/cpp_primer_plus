// You sell the book C++ for Fools.Write a program that has you enter a year’s worth
// of monthly sales (in terms of number of books, not of money).The program should
// use a loop to prompt you by month, using an array of char * (or an array of
// string objects, if you prefer) initialized to the month strings and storing the input
// data in an array of int .Then, the program should find the sum of the array con-
// tents and report the total sales for the year.
#include <iostream>
#include <cstdlib>
#include <string>

int total_sales_for_year(int sales[], int sales_size);

int main() {
  using namespace std;
  const int number_of_months = 12;
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

  int monthly_sales[number_of_months] = {0};

  for (int i=0; i<number_of_months; ++i){
    cout << "How many books were sold in " << months[i] << "?" << endl;
    if(!(cin >> monthly_sales[i]) || monthly_sales[i]<0)
    {
      cout << "Wrong input, only numbers" << endl;
      return EXIT_FAILURE;
    }
    if(monthly_sales[i]<0){
      cout << "Wrong value." << endl;
      monthly_sales[i] = 0;
      --i;
    }
  }

  int total_sales = total_sales_for_year(monthly_sales, number_of_months);

  cout << "Total sales for year: " << total_sales << " books" << endl;
  return EXIT_SUCCESS;
}


int total_sales_for_year(int sales[], int sales_size){
  int total_sales = 0;
  for(int i=0; i<sales_size; ++i){
    total_sales += sales[i];
  }

  return total_sales;
}
