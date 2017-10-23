// Modify Listing 8.14 so that it uses two template functions called SumArray() to
// return the sum of the array contents instead of displaying the contents.The pro-
// gram now should report the total number of things and the sum of all the debts.
#include <iostream>
#include <algorithm>

template <typename T>
void ShowArray(T arr[], int n); // template A

template <typename T> // template B
void ShowArray(T * arr[], int n);

template <typename T>
T SumArray(T arr[], int n); // template A

template <typename T>
T SumArray(T * arr[], int n); // template B


struct debts
{
  char name[50];
  double amount;
};

int main(){
  using namespace std;
  int things[6] = {13, 31, 103, 301, 310, 130};
  struct debts mr_E[3] =
  {
    {"Ima Wolfe", 2400.0},
    {"Ura Foxe", 1300.0},
    {"Iby Stout", 1800.0}
  };
  double * pd[3];  // set pointers to the amount members of the structures in mr_E
  for (int i = 0; i < 3; ++i)
    pd[i] = &mr_E[i].amount;

  cout << "Listing Mr. E's counts of things:\n"; // things is an array of int
  ShowArray(things, 6); // uses template A
  int thingssum = SumArray(things, 6);
  cout << "Things sum: " << thingssum << endl;
  cout << "Listing Mr. E's debts:\n"; // pd is an array of pointers to double
  ShowArray(pd, 3); // uses template B (more specialized)
  double debtssum = SumArray(pd, 3);
  cout << "Debts sum: " << debtssum << endl;
  cout << "Goodbye" << std::endl;
  return EXIT_SUCCESS;
}

template <typename T>
void ShowArray(T arr[], int n)
{
  using namespace std;
  cout << "template A\n";
  for (int i = 0; i < n; ++i)
    cout << arr[i] << ' ';
  cout << endl;
}

template <typename T>
void ShowArray(T * arr[], int n)
{
  using namespace std;
  cout << "template B\n";
  for (int i = 0; i < n; ++i)
    cout << *arr[i] << ' ';
  cout << endl;
}

template <typename T>
T SumArray(T arr[], int n)
{
  using namespace std;
  cout << "template A\n";
  return std::accumulate(arr, arr + n, 0);
}

template <typename T>
T SumArray(T * arr[], int n)
{
  using namespace std;
  cout << "Template B\n";
  T total = 0;
  for (int i = 0; i < n; ++i){
    total += *arr[i];
  }
  return total;
}
