#include <iostream>
using namespace std;

int main()
{
	int X, Y;
	cin >> X >> Y;

	if (X > Y)
		cout << 0;
	else if ((Y - X) % 10 == 0)
		cout << (Y - X) / 10;
	else
		cout << (Y - X) / 10 + 1;

	return 0;
}