#include <iostream>
using namespace std;

int main()
{
	string s, t;
	int num = 0;
	cin >> s >> t;

	if (s[0] == t[0])
		num++;
	if (s[1] == t[1])
		num++;
	if (s[2] == t[2])
		num++;

	cout << num;

	return 0;
}