#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main()
{
    long long int a, b, x;
    cin >> a >> b >> x;

    long long int ans = (b-a)/x;

    if (b%x==0 || a%x==0) 
        ans++;
    else if (b%x <= (b-a)%x-1) {
        ans++;
    }

    cout << ans << '\n';

	return 0;
}