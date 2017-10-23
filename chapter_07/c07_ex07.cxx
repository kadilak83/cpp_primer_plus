// Redo Listing 7.7, modifying the three array-handling functions to each use two
// pointer parameters to represent a range.The fill_array() function, instead of
// returning the actual number of items read, should return a pointer to the location
// after the last location filled; the other functions can use this pointer as the second
// argument to identify the end of the data.
#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <functional>

const int Max = 5;

// function prototypes
double * fill_array(double * begin, double * end);
void show_array(const double * begin, const double * end); // don't change data
void revalue(double r, double * begin, double * end);

int main() {
  using namespace std;
  double properties[Max];
  double * end  = fill_array(properties, properties + Max);
  show_array(properties, end);
  if (properties != end)
  {
    cout << "Enter revaluation factor: ";
    double factor;
    while (!(cin >> factor))
    // bad input
    {
      cin.clear();
      while (cin.get() != '\n')
        continue;
      cout << "Bad input; Please enter a number: ";
    }
    revalue(factor, properties, end);
    show_array(properties, end);
  }
  cout << "Done.\n";
  cin.get();
  cin.get();
  std::cout << "Goodbye" << std::endl;
  return EXIT_SUCCESS;
}

double * fill_array(double * begin, double * end)
{
  using namespace std;
  double * i;
  double tmp_value = 0;
  int idx = 1;
  for (i = begin; i != end; ++i, ++idx)
  {
    cout << "Enter value #" << idx << ": ";
    if (!(cin >> tmp_value))
    // bad input
    {
      cin.clear();
      while (cin.get() != '\n')
      continue;
      cout << "Bad input; input process terminated.\n";
      break;
    }
    else if (tmp_value < 0)
      break;
    // signal to terminate
    *i = tmp_value;
  }
  return i;
}
// the following function can use, but not alter,
// the array whose address is ar
void show_array(const double * begin, const double * end)
{
  using namespace std;
  int idx = 1;
  for (; begin != end; ++begin, ++idx)
  {
    cout << "Property #" << idx << ": $";
    cout << *begin << endl;
  }
}
// multiplies each element of ar[] by r
void revalue(double r, double * begin, double * end)
{
  std::transform(begin, end, begin, std::bind1st(std::multiplies<double>(), r));
}
