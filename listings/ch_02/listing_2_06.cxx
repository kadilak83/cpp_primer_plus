#include <iostream>
int stonetolb(int);
int main()
{
	using namespace std;
	int stone;
	cout << "Enter the weight in stone ";
	cin >> stone;
	int punds = stonetolb(stone);
	cout << stone << " stone = ";
	cout << punds << " punds." << endl;
	return 0;
}

int stonetolb(int sts)
{
	return 14 * sts;
}
