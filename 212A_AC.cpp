#include <iostream>
using namespace std;

int main()
{
	int A, B;
	cin >> A >> B;

	if (A == 0)
		cout << "Silver";
	else if (B == 0)
		cout << "Gold";
	else
		cout << "Alloy";

	return 0;
}