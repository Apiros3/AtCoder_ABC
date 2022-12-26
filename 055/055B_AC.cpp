#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	long long int N, power=1;
    cin >> N;

    for (int i=1; i<=N; i++) {
        power*=i;
        power=power % (long long int)(pow(10,9)+7);
    }

    cout << power;

	return 0;
}