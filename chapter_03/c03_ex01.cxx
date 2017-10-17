//Write a short program that asks for your height in integer inches and then converts
//your height to feet and inches. Have the program use the underscore character to
//indicate where to type the response.Also use a const symbolic constant to repre-
//sent the conversion factor.
#include <iostream>
#include <cstdlib>

const int in_ft_factor = 12;

int main()
{
	using namespace std;
	cout << "Enter your height in inches: ________\b\b\b\b\b\b\b\b";
	int height = 0;
	cin >> height;
	int ft_height = height / in_ft_factor;
	cout << "Your height is: " << ft_height << "ft and " << height - ft_height * in_ft_factor << " in."<<endl;
	
	return EXIT_SUCCESS
}
