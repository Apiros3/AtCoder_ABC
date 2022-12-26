#include <iostream>
using namespace std;

int main()
{
	int X;
	cin >> X;

	if (X != 0 && X % 100 == 0)
		cout << "Yes";
	else
		cout << "No";

	return 0;
}