#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main()
{
    int K, S, ans=0;
    cin >> K >> S;

    for (int i=0; i<=K; i++) {
        for (int j=0; j<=K; j++) {
            if (0 <= S-i-j && S-i-j <= K)
            ans++;
        }
    }
    cout << ans << '\n';

	return 0;
}