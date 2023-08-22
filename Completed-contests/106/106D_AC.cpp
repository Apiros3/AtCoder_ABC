#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ull = unsigned long long;
using ld = long double;

#define rep(i,start,end) for(ll i=start; i<end; i++)
#define rrep(i,start,end) for(ll i=start; i>=end; i--)


// pow in int, takes mod and returns in O(log(topn))
    ll intpow(ll btmn, ll topn, ll modn) {ll ret_num = 1; btmn%=modn; for(; topn; topn/=2, btmn=(btmn*btmn)%modn) if (topn & 1) ret_num=(ret_num*(btmn%modn))%modn; return ret_num%modn;}

ll INF = 1LL << 60;
ld PI = 3.141592653589793;

struct Init {
    Init() {
        cout << setprecision(15);
    }
}init;

vector<vector<ll>> vec(501,vector<ll>(501,0)), dp(501,vector<ll>(501,-1));
ll memo(ll L, ll R) {
    if (L > R) return 0;
    if (L == R) return vec[L][R];
    if (dp[L][R] != -1) {
        return dp[L][R];
    }
    dp[L][R] = vec[L][R] + memo(L+1,R) + memo(L,R-1) - memo(L+1,R-1);
    return dp[L][R]; 

}

int main()
{

    ll N, M, Q; cin >> N >> M >> Q;

    rep(i,0,M) {
        ll L, R; cin >> L >> R;
        vec[L][R]++;
    }

    while(Q--) {
        ll p, q; cin >> p >> q;

        cout << memo(p,q) << endl;
    }

    return 0;
}
