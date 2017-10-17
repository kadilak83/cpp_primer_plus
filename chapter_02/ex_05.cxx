#include <iostream>
#include <cstdlib>

using namespace std;

double celsius_to_fahrenheit(double);

int main()
{
	double celsius_temp = 0.0;
	cout << "Please enter a Celsius value: ";
	cin >> celsius_temp;
	cout << celsius_temp << " degrees Celsius is " << celsius_to_fahrenheit(celsius_temp) << " degrees Fehrenheit" << endl;
	return EXIT_SUCCESS;
}

double celsius_to_fahrenheit(double temp)
{
	return 1.8 * temp + 32.0;
}
 
