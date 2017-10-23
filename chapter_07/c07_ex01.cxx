// Write a program that repeatedly asks the user to enter pairs of numbers until at
// least one of the pair is 0 . For each pair, the program should use a function to calcu-
// late the harmonic mean of the numbers.The function should return the answer to
// main() , which should report the result.The harmonic mean of the numbers is the
// inverse of the average of the inverses and can be calculated as follows:
// harmonic mean = 2.0 × x × y / (x + y)
#include <iostream>
#include <cstdlib>

struct Pair{
  double first;
  double second;
};

double calculateharmonicmean(const Pair &p);

int main(){
  Pair pair;
  try{
    do {
      std::cout << "Give two numbers x and y: ";
      if(!(std::cin >> pair.first >> pair.second)){
          std::cout << "Wrong input, only numbers" << std::endl;
          return EXIT_FAILURE;
        }
        std::cout << "Harmonic mean: "<< calculateharmonicmean(pair) << std::endl;
    } while(pair.first!=0 && pair.second!=0);
  } catch (std::overflow_error &e) {
  std:: cout << e.what() << std::endl;
  }
  std::cout << "Goodbye" << std::endl;
  return EXIT_SUCCESS;
}

double calculateharmonicmean(const Pair &p){
  double harmonic_mean = 0;
  const double harmonic_mean_factor = 2.0;
  double harmonic_mean_denominator = p.first + p.second;
  if (harmonic_mean_denominator){
    harmonic_mean = (harmonic_mean_factor * p.first * p.second) / harmonic_mean_denominator;
  } else {
    throw std::overflow_error("Divide by zero exception!\nSum of 'first' and 'second' is 0.");
  }
  return harmonic_mean;
}
