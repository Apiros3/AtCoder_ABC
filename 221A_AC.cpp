#include <iostream>
using namespace std;

int main()
{
	int num1, num2, num3;
	cin >> num1 >> num2;

	num3 = pow(32, (num1 - num2));

	cout << num3;

	return 0;
}