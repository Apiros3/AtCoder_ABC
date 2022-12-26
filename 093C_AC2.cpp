#include <iostream>
using namespace std;

void function(int a, int b, int c)
{
	if ((2 * a - b - c) % 2 == 0)
	{
		cout << (2 * a - b - c) / 2;
	}
	else
		cout << (3 * (a + 1) - a - b - c) / 2;
}

int main()
{
	int A, B, C;
	cin >> A >> B >> C;

	if (A >= B && A >= C)
	{
		function(A, B, C);
	}
	else if (B >= C && B >= A)
	{
		function(B, C, A);
	}
	else
	{
		function(C, A, B);
	}

	return 0;
}