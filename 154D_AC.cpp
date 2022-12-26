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
#define rep(i,n) for(ll i=0; i<n; i++)
using namespace std;
using ll = long long;


int main()
{
    ll N, K, P[200009], sum[200009], mx=0; cin >> N >> K;
    rep(i,N) {
        cin >> P[i];
        P[i]++;
    }
    sum[0] = 0;
    for (int i=1; i<=N; i++) 
        sum[i] = sum[i-1] + P[i-1];

    for (int i=K; i<=N; i++) 
        mx = max(mx, sum[i]-sum[i-K]);

    cout << setprecision(15) << (long double)mx/2 << endl;

    return 0;
}     
