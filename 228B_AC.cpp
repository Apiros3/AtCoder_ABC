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
ll max(ll maxa,ll maxb) {if (maxa>=maxb) return maxa; else return maxb;}
ll intpow(ll btmn, ll topn, ll modn) {ll ret_num = 1; for(; topn; topn/=2, btmn=(btmn*btmn)%modn) if (topn & 1) ret_num*=btmn%modn; return ret_num%modn;}

ll INF = 1LL << 60;


struct Init {
    Init() {
        cout << setprecision(20);
    }
} init;


int main()
{
    ll N, X, A[100009], ans=1;
    cin >> N >> X;
    rep(i,0,N) cin >> A[i];

    map<ll, ll> mp;
    mp[X]=1;
    ll pointer = X;

    while(1) {
        if (mp[A[pointer-1]]==0) {
            mp[A[pointer-1]]++;
            ans++;
            pointer = A[pointer-1];
        }
        else break;
    }
    cout << ans << endl;

    return 0;
}    