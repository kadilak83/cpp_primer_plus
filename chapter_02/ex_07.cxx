#include <iostream>
#include <cstdlib>

using namespace std;

void display_time(int, int);

int main()
{
	int hours = 0;
	int minutes = 0;
	cout << "Enter the minimum hours: ";
	cin >> hours;
	cout << "Enter the minimum minutes: ";
	cin >> minutes;
	display_time(hours, minutes);
	return EXIT_SUCCESS;
}

void display_time(int hours, int minutes)
{
	cout << "Time: " << hours << ":" << minutes << endl;
}
