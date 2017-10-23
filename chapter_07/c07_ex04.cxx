// Many state lotteries use a variation of the simple lottery portrayed by Listing 7.4. In
// these variations you choose several numbers from one set and call them the field
// numbers. For example, you might select five numbers from the field of 1–47).You
// also pick a single number (called a mega number or a power ball, etc.) from a sec-
// ond range, such as 1–27.To win the grand prize, you have to guess all the picks cor-
// rectly.The chance of winning is the product of the probability of picking all the
// field numbers times the probability of picking the mega number. For instance, the
// probability of winning the example described here is the product of the probability
// of picking 5 out of 47 correctly times the probability of picking 1 out of 27 cor-
// rectly. Modify Listing 7.4 to calculate the probability of winning this kind of lottery.
#include <iostream>
#include <cstdlib>

long double probability(unsigned numbers, unsigned picks);

int main() {
  using namespace std;
  double fieldtotal, fieldchoices, powerballtotal, powerballchoices;
  cout << "Enter the total field number of choices on the lottery,\n"
  "the number of picks allowed,\n"
  "the power ball total and the power ball number of picks allowed.\n";
  try{
    while ((cin >> fieldtotal >> fieldchoices >> powerballtotal >> powerballchoices) &&
     fieldchoices <= fieldtotal && powerballchoices <= powerballtotal){
      cout << "You have one chance in ";
      cout << probability(fieldtotal, fieldchoices) * probability(powerballtotal, powerballchoices);
      // compute the odds
      cout << " of winning.\n";
      cout << "Next numbers (q to quit): ";
    }
  } catch (std::range_error e){
    std:: cout << e.what() << std::endl;
  }
  cout << "bye\n";
  return EXIT_SUCCESS;
}

long double probability(unsigned numbers, unsigned picks){
  std::cout << "Picks: " << picks << std::endl;
  if (picks == 0.0){
    throw std::range_error("Value of picks is 0");
  }
  long double result = 1.0; // here come some local variables
  long double n = numbers;
  unsigned p = picks;
  for (; p > 0; --n, --p)
    result = result * n / p ;
  return result;
}
