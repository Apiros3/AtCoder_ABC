#include <iostream>
using namespace std;

int main()
{
	int num1, num2 = 0;
	cin >> num1;

	if (num1 >= 100) {
		num2++;
		num1 -= 100;
	}
	if (num1 >= 10) {
		num2++;
		num1 -= 10;
	}
	if (num1 >= 1) {
		num2++;
	}

	cout << num2;

	return 0;
}