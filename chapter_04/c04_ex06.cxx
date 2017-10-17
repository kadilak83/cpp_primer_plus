// The CandyBar structure contains three members, as described in Programming
// Exercise 5.Write a program that creates an array of three CandyBar structures, ini-
// tializes them to values of your choice, and then displays the contents of each struc-
// ture.

#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;
struct CandyBar
{
  string brand;
  float weight;
  int calories;
};

void print_candy_bar(CandyBar);

int main()
{
  int candy_cout = 3;
  CandyBar candy_bars[candy_cout] = {
    {
      "Snickers",
      64.5,
      450
    }, {
      "Mars",
      56.3,
      430
    },{
      "Milky Way",
      48.7,
      389
    }
  };
  for(int i=0;i<candy_cout; i++)
    print_candy_bar(candy_bars[i]);

  return EXIT_SUCCESS;
}

void print_candy_bar(CandyBar candy_bar)
{
  cout << "Candy bar:" << endl;
  cout << "\tbrand: " << candy_bar.brand << endl;
  cout << "\tweight: " << candy_bar.weight << endl;
  cout << "\tcalories: " << candy_bar.calories << endl;
}
