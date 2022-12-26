#include <iostream>
using namespace std;

int main()
{
	int X, A, B;
	cin >> X >> A >> B;

	if (A - B >= 0)
		cout << "delicious";
	else if (A + X - B >= 0)
		cout << "safe";
	else
		cout << "dangerous";

	return 0;
}