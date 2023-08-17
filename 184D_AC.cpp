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

ld dp[101][101][101];
ll used[101][101][101];

ld memo(ll i, ll j, ll k) {
    if (used[i][j][k] == 1) return dp[i][j][k];
    if (i == 100 || j == 100 || k == 100) {
        used[i][j][k] = 1;
        dp[i][j][k] = 0;
        return 0;
    }
    ld pi = (ld)i/(i+j+k), pj = (ld)j/(i+j+k), pk = (ld)k/(i+j+k);

    dp[i][j][k] = 1.0 + pi*memo(i+1,j,k) + pj*memo(i,j+1,k) + pk*memo(i,j,k+1);
    used[i][j][k] = 1;
    return dp[i][j][k];
}

int main()
{
    
    rep(i,0,101) {
        rep(j,0,101) {
            rep(k,0,101) {
                dp[i][j][k] = 0;
                used[i][j][k] = -1;
            }
        }
    }
    ll A, B, C; cin >> A >> B >> C;
    cout << memo(A,B,C) << endl;

    return 0;
}
