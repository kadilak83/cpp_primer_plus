// The Kingdom of Neutronia, where the unit of currency is the tvarp, has the fol-
// lowing income tax code:
// First 5,000 tvarps: 0% tax
// Next 10,000 tvarps: 10% tax
// Next 20,000 tvarps: 15% tax
// Tvarps after 35,000: 20% tax
// For example, someone earning 38,000 tvarps would owe 5,000 × 0.00 + 10,000 ×
// 0.10 + 20,000 × 0.15 + 3,000 × 0.20, or 4,600 tvarps.Write a program that uses a
// loop to solicit incomes and to report tax owed.The loop should terminate when
// the user enters a negative number or non-numeric input.
#include <iostream>
#include <cstdlib>

const int levels  = 4;
double income_levels[levels] = {5000, 10000, 20000, 35000};
double tax_levels[levels] = {0, 0.1, 0.15, 0.2};

double calculate_taxes(double income, int level=0);

int main() {
  double income = 0;
  double total_income = 0;

  std::cout << "Give your incomes: " << std::endl;
  while((std::cin >> income) && income >= 0){
      total_income += income;
    }

  double taxes = calculate_taxes(total_income);
  std::cout << "Total income: " << total_income << " tvarps" << std::endl;
  std::cout << "Total taxes: " << taxes << " tvarps" << std::endl;
  std::cout << "Goodbye" << std::endl;
  return EXIT_SUCCESS;
}

double calculate_taxes(double income, int level){
  if (income <= income_levels[level] || level + 1 == levels){
    return income * tax_levels[level];
  }
  income -= income_levels[level];
  return income_levels[level] * tax_levels[level] + calculate_taxes(income, ++level);
}
