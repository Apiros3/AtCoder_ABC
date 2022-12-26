#include <iostream>
using namespace std;

int main()
{
	int N, num = 0;
	cin >> N;

	num += N % 10;
	N /= 10;
	num += N % 10;
	N /= 10;
	num += N;

	cout << num * 111;

	return 0;
}