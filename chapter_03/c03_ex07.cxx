//Write a program that asks you to enter an automobile gasoline consumption figure
//in the European style (liters per 100 kilometers) and converts to the U.S. style of
//miles per gallon. Note that in addition to using different units of measurement, the
//U.S. approach (distance / fuel) is the inverse of the European approach (fuel / dis-
//tance). Note that 100 kilometers is 62.14 miles, and 1 gallon is 3.875 liters.Thus, 19
//mpg is about 12.4 l/100 km, and 27 mpg is about 8.7 l/100 km.
#include <iostream>
#include <cstdlib>

const float km100_to_miles = 62.14;
const float gal_to_l = 3.875;

int main()
{
	using namespace std;
	float eu_consumption, eu_consumption_in_gal, us_consumption = 0.0;
	cout << "Enter gassoline consumption (l/100 km) " << "______ l/100 km \b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b";
	cin >> eu_consumption;
	eu_consumption_in_gal = eu_consumption / gal_to_l; 
	us_consumption = km100_to_miles / eu_consumption_in_gal;
	
	cout << "US consumption: " << us_consumption << " mpg\n";
	return 0;
}
