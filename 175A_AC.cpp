#include <iostream>
using namespace std;

int main()
{
	string s;
	cin >> s;

	if (s == "RRR")
		cout << 3;
	else if (s[1] == 'R' && (s[0] == s[1] || s[1] == s[2]))
		cout << 2;
	else if (s == "SSS")
		cout << 0;
	else
		cout << 1;


	return 0;
}