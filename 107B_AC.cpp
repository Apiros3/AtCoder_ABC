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
    ll H, W; cin >> H >> W;
    string A[109];
    rep(i,0,H) cin >> A[i];

    vector<ll> vecX(109), vecY(109);

    rep(i,0,H) {
        rep(j,0,W) {
            if (A[i][j] == '#') {
                vecX.at(j) = 1;
                vecY.at(i) = 1;
            }
        }
    }

    rep(i,0,H) {
        if (vecY.at(i) == 0) continue;
        rep(j,0,W) 
            if (vecX.at(j) == 1) cout << A[i][j];
        cout << endl;
    }

    return 0;
}    