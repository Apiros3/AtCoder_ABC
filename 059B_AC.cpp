#include <iostream>
#include <algorithm>
using namespace std;

int arrT[100], arrP[100], arrX[100];

int main()
{
	string A, B;
	cin >> A >> B;

	if (A.length() > B.length())
		cout << "GREATER";
	else if (B.length() > A.length())
		cout << "LESS";
	else {
		for (int i = 0; i < A.length(); i++) {
			if (A[i] != B[i]) {
				if (A[i] > B[i]) {
					cout << "GREATER";
					break;
				}
				else {
					cout << "LESS";
					break;
				}
			}
		}
	}
	if (A == B) {
		cout << "EQUAL";
	}

	return 0;
}