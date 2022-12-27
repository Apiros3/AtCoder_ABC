#include <iostream>
using namespace std;

int main()
{

	int A, B;
	cin >> A >> B;

	if (A > B)
		cout << 2 * A - 1;
	else if (A < B)
		cout << 2 * B - 1;
	else
		cout << 2 * A;


	return 0;
}