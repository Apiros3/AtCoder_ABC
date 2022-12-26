#include <iostream>
using namespace std;

int main()
{
	int A, B, C;
	cin >> A >> B >> C;

	if (A == B)
		cout << C;
	else if (B == C)
		cout << A;
	else if (C == A)
		cout << B;
	else
		cout << 0;


	return 0;
}