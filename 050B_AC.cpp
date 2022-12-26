#include <iostream>
#include <algorithm>
using namespace std;

int arrT[100], arrP[100], arrX[100];

int main()
{
	long int N, M, sum = 0, temp;
	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> arrT[i];
		sum += arrT[i];
	}

	cin >> M;

	for (int i = 0; i < M; i++) {
		cin >> arrP[i] >> arrX[i];
	}

	for (int i = 0; i < M; i++) {
		cout << sum - arrT[arrP[i] - 1] + arrX[i] << '\n';
	}

	return 0;
}