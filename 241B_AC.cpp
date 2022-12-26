#include <iostream>
using namespace std;

int main()
{
	int N, M, num = 0;
	cin >> N >> M;
	int a[1000], b[1000];

	for (int i = 0; i < N; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < M; i++) {
		cin >> b[i];
	}

	for (int j = 0; j < M; j++) {
		for (int k = 0; k < N; k++) {
			if (a[k] == b[j]) {
				a[k] = 0;
				num++;
				break;
			}
		}
	}
	if (num == M)
		cout << "Yes";
	else
		cout << "No";

	return 0;
}