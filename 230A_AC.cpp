#include <iostream>
using namespace std;

int main()
{
	int N;
	cin >> N;

	if (N < 10)
		cout << "AGC00" << N;
	else if (N < 42)
		cout << "AGC0" << N;
	else
		cout << "AGC0" << N + 1;

	return 0;
}