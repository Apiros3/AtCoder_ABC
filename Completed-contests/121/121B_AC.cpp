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
    ll N, M, C, B[25], A[25][25], finans=0;
    cin >> N >> M >> C; 

    rep(i,0,M) cin >> B[i];

    rep(i,0,N) {
        ll ans=C;
        rep(j,0,M) {
            cin >> A[i][j];
            ans += A[i][j]*B[j];
        }
        if (ans>0) finans++;
    }
    cout << finans << endl;

    
    return 0;
}    