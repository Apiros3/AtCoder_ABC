#include <iostream>
using namespace std;

int main()
{

	int N, A, B;
	cin >> N >> A >> B;

	if (N * A > B)
		cout << B;
	else
		cout << N * A;


	return 0;
}