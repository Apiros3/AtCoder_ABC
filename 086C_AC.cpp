#include <iostream>
using namespace std;

int t[100000], x[100000], y[100000];

int main()
{
	int N, identifier = 0;


	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> t[i] >> x[i] >> y[i];
	}

	if (t[0] % 2 == 0) {
		if ((x[0] + y[0]) % 2 == 0 && x[0] + y[0] <= t[0]) {

		}
		else
			identifier++;
	}
	else {
		if ((x[0] + y[0]) % 2 == 1 && x[0] + y[0] <= t[0]) {

		}
		else
			identifier++;
	}

	for (int i = 1; i < N; i++) {
		int T = t[i] - t[i - 1];
		int X = abs(x[i] - x[i - 1]);
		int Y = abs(y[i] - y[i - 1]);

		if (T % 2 == 0) {
			if ((X + Y) % 2 == 0 && X + Y <= T) {

			}
			else
				identifier++;
		}
		else {
			if ((X + Y) % 2 == 1 && X + Y <= T) {

			}
			else
				identifier++;
		}
	}

	if (identifier == 0)
		cout << "Yes";
	else
		cout << "No";

	return 0;
}