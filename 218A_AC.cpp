#include <iostream>
using namespace std;

int main()
{
	int N;
	string s;
	cin >> N >> s;

	if (s[N - 1] == 'o')
		cout << "Yes";
	else
		cout << "No";


	return 0;
}