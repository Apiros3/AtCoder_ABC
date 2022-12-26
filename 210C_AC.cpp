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
    ll N, K, C[300000], ans=0;
    cin >> N >> K;
    rep(i,N) cin >> C[i];

    map<ll, ll> mp;
    rep(i,K) {
        if (mp[C[i]]==0) ans++;
        mp[C[i]]++;
    }
    ll temp=ans;
    for (int i=K; i<N; i++) {
        if (mp[C[i]]==0) temp++;
        mp[C[i]]++;
        if (mp[C[i-K]]==1) temp--;
        mp[C[i-K]]--;
        ans = max(ans, temp);
    }

    cout << ans << endl;

    return 0;
}     
