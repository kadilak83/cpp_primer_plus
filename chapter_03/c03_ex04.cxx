//Write a program that asks the user to enter the number of seconds as an integer
//value (use type long , or, if available, long long ) and that then displays the equiva-
//lent time in days, hours, minutes, and seconds. Use symbolic constants to represent
//the number of hours in the day, the number of minutes in an hour, and the number
//of seconds in a minute.The output should look like this:
//Enter the number of seconds: 31600000
//31600000 seconds = 365 days, 17 hours, 46 minutes, 40 seconds
#include <iostream>
#include <cstdlib>

const int hours_in_day = 24;
const int minutes_in_hour = 60;
const int seconds_in_minute = 60;
const int seconds_in_day = hours_in_day * minutes_in_hour * seconds_in_minute;
const int seconds_in_hour = minutes_in_hour * seconds_in_minute;

int main(){
	using namespace std;
	long long time_in_seconds = 0;
	int days, hours, minutes, sec = 0;

	cout << "Enter time in seconds : ";
	cin >> time_in_seconds;
	days = time_in_seconds / seconds_in_day;
	hours = (time_in_seconds % seconds_in_day) / seconds_in_hour;
	minutes = ((time_in_seconds % seconds_in_day) % seconds_in_hour) / seconds_in_minute;
	sec = ((time_in_seconds % seconds_in_day) % seconds_in_hour) % seconds_in_minute;
	
	cout << days << " days, " << hours << " hours, ";
	cout << minutes << " minutes, "<< sec << " seconds" << endl;
	
	return EXIT_SUCCESS;
}
