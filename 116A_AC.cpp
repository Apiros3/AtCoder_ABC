#include <iostream>
using namespace std;

int main()
{
	int A, B, C;
	cin >> A >> B >> C;

	if (A > B) {
		if (A > C)
			cout << B * C / 2;
		else
			cout << A * B / 2;
	}
	else if (B > C)
		cout << A * C / 2;
	else if (A > C)
		cout << A * C / 2;
	else
		cout << A * B / 2;


	return 0;
}