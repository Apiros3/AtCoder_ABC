#include <iostream>
using namespace std;

int main()
{
	int M, H;
	cin >> M >> H;

	if (H % M == 0)
		cout << "Yes";
	else
		cout << "No";

	return 0;
}