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

    ll N, M, X, C[15], A[15][15];
    cin >> N >> M >> X;
    rep(i,0,N) {
        cin >> C[i];
        rep(j,0,M) cin >> A[i][j];
    }
    ll ans = INF;

    rep(i,0,intpow(2,N,INF)) {
        ll temp = i, skill[12], cost=0;
        rep(k,0,M) skill[k] = 0;
        for(ll k=0; temp>0; k++, temp/=2) {
            if (temp%2==1) {
                rep(j,0,M) skill[j] += A[k][j];
                cost += C[k];
            }
        }
        temp = 0;
        rep(j,0,M) if (skill[j] >= X) temp++;
        if (temp == M) ans = min(ans,cost);
    }
    if (ans==INF) cout << -1 << endl;
    else cout << ans << endl;

    return 0;
}    