#include <iostream>
using namespace std;

int main()
{
	int A, B, C, D;
	cin >> A >> B >> C >> D;

	if (A + B < C + D)
		cout << "Right";
	else if (A + B > C + D)
		cout << "Left";
	else
		cout << "Balanced";

	return 0;
}