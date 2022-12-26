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
    ll N, A[30], B[30], C[30], ans=0;
    cin >> N;

    rep(i,0,N) cin >> A[i];
    rep(i,0,N) cin >> B[i];
    rep(i,0,N-1) cin >> C[i];

    ans+=B[A[0]-1];
    rep(i,1,N) {
        ans+= B[A[i]-1];
        if (A[i]-A[i-1] == 1) ans+=C[A[i-1]-1];
    }
    cout << ans << endl;
    
    return 0;
}    