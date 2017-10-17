// Write a program that requests the user to enter three times for the 40-yd dash (or
// 40-meter, if you prefer) and then displays the times and the average. Use an array
// object to hold the data. (Use a built-in array if array is not available.)
#include <iostream>
#include <cstdlib>
#include <string>
#include <array>

using namespace std;

float get_dash_time();

int main() {
  int times_count = 3;
  array<float, 3> dash_times;
  float avg_time = 0.0;

  for(int i=0; i<times_count; i++)
    dash_times[i] = get_dash_time();
 
  avg_time = (dash_times[0]+dash_times[1]+dash_times[2])/times_count;

  for(int i=0; i<times_count; i++)
    cout << "Time " << i <<": " << dash_times[i] << " s" << endl;

  cout << "Average time: " << avg_time << " s" << endl;
  return EXIT_SUCCESS;
}

float get_dash_time(){
  float dash_time = 0 ;
  cout << "Enter time for the 40-yd dash (or 40-meter, if you prefer) in second: ";
  cin >> dash_time;
  return dash_time;
}
