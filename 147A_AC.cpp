#include <iostream>
using namespace std;

int main()
{
	int A, B, C;
	cin >> A >> B >> C;

	if (A + B + C >= 22)
		cout << "bust";
	else
		cout << "win";

	return 0;
}