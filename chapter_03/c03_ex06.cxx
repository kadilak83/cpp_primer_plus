//Write a program that asks how many miles you have driven and how many gallons
//of gasoline you have used and then reports the miles per gallon your car has gotten.
//Or, if you prefer, the program can request distance in kilometers and petrol in liters
//and then report the result European style, in liters per 100 kilometers.
#include <iostream>
#include <cstdlib>

int main()
{
	using namespace std;
	float distance_km, gasoline_l, eu_result = 0.0;
	
	cout << "How many kilometers you have driven?\n" << "________ km\b\b\b\b\b\b\b\b\b\b\b";
	cin >> distance_km;
	cout << "How many liters of gasoline you have used?\n" << "________l \b\b\b\b\b\b\b\b\b\b";
	cin >> gasoline_l;
	eu_result = gasoline_l * 100 /distance_km;
	cout << "Result: "<< eu_result << " l per 100 kilometers\n";
	return EXIT_SUCCESS;
}
