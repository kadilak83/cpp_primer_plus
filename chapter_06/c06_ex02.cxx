// Write a program that reads up to 10 donation values into an array of double . (Or, if
// you prefer, use an array template object.) The program should terminate input on
// non-numeric input. It should report the average of the numbers and also report
// how many numbers in the array are larger than the average.
#include <iostream>
#include <cstdlib>
#include <array>

const int DonationCount = 10;

int main()
{
  using namespace std;
  array<double, DonationCount> donations;
  double totalDonation = 0;
  std::cout << "Give donations: " << endl;

  for (int i=0; i<DonationCount; ++i){
    if(!(std::cin >> donations[i]) || donations[i] < 0){
        std::cout << "Wrong input, only numbers >= 0" << std::endl;
        return EXIT_FAILURE;
      }
    totalDonation += donations[i];
  }

  double avgDonation = totalDonation / DonationCount;
  double abouveAvgCount = 0;

  for (int i=0; i<DonationCount; ++i){
    if (donations[i] > avgDonation){
      ++abouveAvgCount;
    }
  }
  std::cout << "Donations average " << avgDonation << endl;
  std::cout << abouveAvgCount << " donations abouve average." << endl;
  return EXIT_SUCCESS;
}
