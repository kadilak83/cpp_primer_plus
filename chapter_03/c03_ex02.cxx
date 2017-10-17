//Write a short program that asks for your height in feet and inches and your weight
//in pounds. (Use three variables to store the information.) Have the program report
//your body mass index (BMI).To calculate the BMI, first convert your height in feet
//and inches to your height in inches (1 foot = 12 inches).Then convert your height
//in inches to your height in meters by multiplying by 0.0254.Then convert your
//weight in pounds into your mass in kilograms by dividing by 2.2. Finally, compute
//your BMI by dividing your mass in kilograms by the square of your height in
//meters. Use symbolic constants to represent the various conversion factors.
#include <iostream>
#include <cstdlib>

const int ft_in_factor = 12;
const float in_m_factor = 0.0254;
const float lb_kg_factor = 2.2;

int main()
{
	using namespace std;
	int height_ft_part, height_in_part, height_in = 0;
	float height_m = 0.0;
	float weight_lb, weight_kg = 0.0;
	cout << "Enter your height in feet and inches:" << endl;
	cout << "________ft\b\b\b\b\b\b\b\b\b\b";
	cin >> height_ft_part;
	cout << "________in\b\b\b\b\b\b\b\b\b\b";
	cin >> height_in_part;
	
	height_in = height_ft_part * ft_in_factor + height_in_part;
	height_m = height_in * in_m_factor;
	
	cout << "Enter your weight in punds: ________\b\b\b\b\b\b\b\b";
	cin >> weight_lb;	
	weight_kg = weight_lb / lb_kg_factor;
	
	float bmi = weight_kg / (height_m * height_m);
	
	cout << "Your BMI is: " << bmi<< endl;
	
	return EXIT_SUCCESS;
}
