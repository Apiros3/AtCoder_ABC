#include <iostream>
using namespace std;

int main()
{
	int N, A;
	cin >> N >> A;

	if (N % 500 <= A)
		cout << "Yes";
	else
		cout << "No";

	return 0;
}