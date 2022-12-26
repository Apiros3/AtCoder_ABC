#include <iostream>
using namespace std;

int main()
{
	int num1, num2;
	cin >> num1 >> num2;

	if (num1 % 2 == 0 || num2 % 2 == 0)
		cout << "Even";
	else
		cout << "Odd";

	return 0;
}