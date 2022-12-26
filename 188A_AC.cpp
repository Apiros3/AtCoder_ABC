#include <iostream>
using namespace std;

int main()
{
	int X, Y;
	cin >> X >> Y;

	if (X > Y && X - Y < 3)
		cout << "Yes";
	else if (X < Y && Y - X < 3)
		cout << "Yes";
	else
		cout << "No";

	return 0;
}