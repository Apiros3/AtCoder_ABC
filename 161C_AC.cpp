#include <iostream>
using namespace std;

int main()
{

	unsigned long long N, K;
	cin >> N >> K;

	if (N % K >= K - N % K)
		cout << K - N % K;
	else
		cout << N % K;


	return 0;
}