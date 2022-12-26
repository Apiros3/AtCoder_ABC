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
    ll N, Q, A, B, C, ans=0, Ans[100000];
    map<ll, ll> mp;
   
    cin >> N;
    rep(i,N) {
        cin >> A;
        mp[A]++;
    }
    for (ll i=1; i<=100000; i++) 
        ans += mp[i]*i;
    cin >> Q;
    
    rep(i,Q) {
        cin >> B >> C;
        mp[C]+=mp[B];
        ans -= mp[B]*B;
        ans += mp[B]*C;
        mp[B]=0;
        Ans[i] = ans;
    }
    rep(i,Q) cout << Ans[i] << endl; 
    
    return 0;
}     
