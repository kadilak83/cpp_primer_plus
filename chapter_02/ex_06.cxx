#include <iostream>
#include <cstdlib>

using namespace std;

double light_years_to_astronomical(double);

int main()
{
	double light_years = 0.0;
	cout << "Enter the number of light years: ";
	cin >> light_years;
	cout << light_years << " light years = " << light_years_to_astronomical(light_years) << " astronomical units." << endl;
	return EXIT_SUCCESS;
}

double light_years_to_astronomical(double light_years)
{
	return light_years * 63240;
}
