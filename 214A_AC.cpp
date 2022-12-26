#include <iostream>
using namespace std;

int main()
{
	int N;
	cin >> N;

	if (N <= 125)
		cout << 4;
	else if (N >= 212)
		cout << 8;
	else
		cout << 6;

	return 0;
}