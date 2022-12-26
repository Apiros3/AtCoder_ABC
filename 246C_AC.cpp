#include <iostream>
#include <cmath>
#include <algorithm>
#include <numeric>
#include <iomanip>
#include <string>
#include <cstdio>
#include <vector>
#include <stdlib.h>
#include <map>
#include <math.h>
#define rep(i,start,end) for(ll i=start; i<end; i++)
using namespace std;
using ll = long long;

int main()
{
    ll N, K, X, A[200009], ans=0;
    cin >> N >> K >> X;

    rep(i, 0, N) {
        cin >> A[i];
        if (K > 0) {
            ll temp = K;
            K -= min(A[i]/X, temp);
            A[i] -= (min(A[i]/X, temp))*X;
        }
        ans += A[i];
    }
    sort(A, A+N, greater<ll>());
    if (K <= N) 
        rep(i, 0, K) ans -= A[i];
    else
        ans = 0;

    cout << ans << endl;

    return 0;
}     
