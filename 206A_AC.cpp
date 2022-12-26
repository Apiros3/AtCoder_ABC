#include <iostream>
using namespace std;

int main()
{
	int N;
	cin >> N;

	if (floor(1.08 * (double)N) < 206)
		cout << "Yay!";
	else if (floor(1.08 * (double)N) > 206)
		cout << ":(";
	else
		cout << "so-so";

	return 0;
}