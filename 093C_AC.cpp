#include <iostream>
using namespace std;

int main()
{

	int A, B, C;
	cin >> A >> B >> C;

	if (A >= B && A >= C) {
		if ((2 * A - B - C) % 2 == 0) {
			cout << (2 * A - B - C) / 2;
		}
		else
			cout << (3 * (A + 1) - A - B - C) / 2;
	}
	else if (B >= C && B >= A) {
		if ((2 * B - A - C) % 2 == 0) {
			cout << (2 * B - A - C) / 2;
		}
		else
			cout << (3 * (B + 1) - A - B - C) / 2;
	}
	else {
		if ((2 * C - B - A) % 2 == 0) {
			cout << (2 * C - B - A) / 2;
		}
		else
			cout << (3 * (C + 1) - A - B - C) / 2;
	}


	return 0;
}