#include <iostream>
using namespace std;

int main()
{
	int A, B, C;
	cin >> A >> B >> C;

	if (A >= B || A >= C) {
		if (B >= C)
			cout << A + B;
		else
			cout << A + C;
	}
	else
		cout << B + C;


	return 0;
}