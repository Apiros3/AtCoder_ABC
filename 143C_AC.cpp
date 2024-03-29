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
    
    ll N, ans=1; cin >> N;
    string S; cin >> S;

    rep(i,1,N) {
        if (S[i] != S[i-1]) ans++;
    }

    cout << ans << endl;

    return 0;
}    