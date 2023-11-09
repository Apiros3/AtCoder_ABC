#include <iostream>
#include <algorithm>
using namespace std;

int arrV[1000], arrP[1000];

int main()
{
	string S;
	int temp = 0, temp2 = 0;
	cin >> S;

	if (S[0] == 65 && S[1] > 96) {
		for (int i = 2; i < S.length(); i++) {
			if (S[i] < 97) {
				temp++;
			}
			if (S[i] == 67 && i != S.length() - 1)
				temp2++;
		}
	}
	else
		temp++;

	if (temp == 1 && temp2 == 1)
		cout << "AC";
	else
		cout << "WA";

	return 0;
}