#include <iostream>
#include <cstdlib>

using namespace std;
void blind_mice();
void they_run();

int main()
{
	blind_mice();
	blind_mice();
	they_run();
	they_run();
	return EXIT_SUCCESS;
}

void blind_mice()
{
	cout <<"Three blind mice" << endl;
}

void they_run()
{
	cout <<"See how they run" << endl;
}
