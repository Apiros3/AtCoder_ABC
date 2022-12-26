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

void initiate() {
    cout << setprecision(20);

    return;
}
ll INF = 1LL << 60;

int main()
{
    initiate();
    
    ll N, A[30], ans=1;
    cin >> N;
    rep(i,0,N) cin >> A[i];

    ll mx = A[0];

    rep(i,1,N) {
        if (A[i] >= mx) ans++;
        mx = max(mx, A[i]);
    }

    cout << ans << endl;

    return 0;
}    