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
vector<ld> X, Y;
ld dst(ll i, ll j) {
    ld ret = 0;
    ret += (X[i]-X[j]) * (X[i] - X[j]);
    ret += (Y[i]-Y[j]) * (Y[i] - Y[j]);

    return sqrt(ret);
} 


int main()
{

    ll N; cin >> N;
    X.resize(N), Y.resize(N);
    rep(i,0,N) cin >> X[i] >> Y[i];

    vector<vector<ld>> dp(N+1,vector<ld>(101,INF));
    rep(i,0,min(100ll,N)) {
        dp[i][i] = dst(0,i);
    }

    rep(i,0,N) {
        rep(j,0,101) {
            rep(k,1,101) {
                if (i+k >= N || j+k-1 > 100) continue;
                dp[i+k][j+k-1] = min(dp[i+k][j+k-1], dp[i][j] + dst(i,i+k));
            }
        }
    }

    ld mn = INF;
    rep(i,0,60) {
        ll C = 0;
        if (i > 0) C = pow(2.0,i-1);
        mn = min(mn, dp[N-1][i] + C);
        // cout << C << " " << mn << " " << dp[N-1][i] << endl;
    }
    cout << mn << endl;

    return 0;
}
