#include <iostream>
#include <algorithm>
using namespace std;

int arrV[1000], arrP[1000];

int main()
{
	int N, X, sum = 0;
	cin >> N >> X;

	for (int i = 0; i < N; i++) {
		cin >> arrV[i] >> arrP[i];
	}

	for (int i = 0; i < N; i++) {
		sum += (arrV[i] * arrP[i]);
		if (sum > X * 100) {
			cout << i + 1;
			break;
		}
	}
	if (sum <= X * 100)
		cout << -1;

	return 0;
}