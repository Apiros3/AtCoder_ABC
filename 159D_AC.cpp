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
    ll N, ans=0, mx=0, A[200009], B[200009];
    cin >> N;
    map<ll, ll> mp;
    rep(i,N) {
        cin >> A[i];
        mp[A[i]]++;
        mx = max(A[i], mx);
    }
    for (int i=1; i<=mx; i++) 
        ans += (mp[i]*(mp[i]-1))/2;

    rep(i,N) {
        B[i] = ans;
        B[i] -= (mp[A[i]]*(mp[A[i]]-1))/2;
        B[i] += ((mp[A[i]]-1)*(mp[A[i]]-2))/2;
    }
    rep(i,N) cout << B[i] << endl;
    
    return 0;
}     
