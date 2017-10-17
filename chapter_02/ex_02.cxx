#include <iostream>
#include <cstdlib>

int main()
{
	using namespace std;
	int dist = 0;
	cout << "Give me distance in furlongs"<< endl;
	cin >> dist;
	cout << "Distance in yards: " << dist * 220 << endl;
	return EXIT_SUCCESS;
}
