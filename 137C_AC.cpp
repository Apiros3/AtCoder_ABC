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
#include <deque>

#define rep(i,start,end) for(ll i=start; i<end; i++)

using namespace std;
using ll = long long;

ll max(ll maxa,ll maxb) {if (maxa>=maxb) return maxa; else return maxb;}
ll intpow(ll btmn, ll topn, ll modn) {ll ret_num = 1; for(; topn; topn/=2, btmn=(btmn*btmn)%modn) if (topn & 1) ret_num*=btmn%modn; return ret_num%modn;}

ll INF = 1LL << 60;

ll fact(ll factnum) {
    if (factnum==1) return 1;
    return factnum*fact(factnum-1);
}


struct Init {
    Init() {
        cout << setprecision(20);
    }
} init;




int main()
{
    ll N, ans=0; cin >> N;
    string S[100009];
    rep(i,0,N) {
        cin >> S[i];
        sort(S[i].begin(), S[i].end());
    }
    map<string,ll> mp;

    rep(i,0,N) {
        mp[S[i]]++;
        ans += mp[S[i]]-1;
    }
    cout << ans << endl;

    return 0;
}    