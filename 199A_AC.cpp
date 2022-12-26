#include <iostream>
using namespace std;

int main()
{
	int A, B, C;
	cin >> A >> B >> C;

	if (A * A + B * B < C * C)
		cout << "Yes";
	else
		cout << "No";


	return 0;
}