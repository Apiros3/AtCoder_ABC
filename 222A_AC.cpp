#include <iostream>
using namespace std;

int main()
{
	int N;
	cin >> N;

	if (N < 10)
		cout << "000" << N;
	else if (N < 100)
		cout << "00" << N;
	else if (N < 1000)
		cout << "0" << N;
	else
		cout << N;

	return 0;
}