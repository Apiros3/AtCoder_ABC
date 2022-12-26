#include <iostream>
using namespace std;

int main()
{
	int H, A;
	cin >> H >> A;

	if (H % A == 0)
		cout << H / A;
	else
		cout << H / A + 1;


	return 0;
}