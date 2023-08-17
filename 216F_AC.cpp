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

int main()
{

    ll N; cin >> N;
    vector<pair<ll,ll>> vec(N);
    rep(i,0,N) {
        cin >> vec[i].first;
    }
    rep(i,0,N) {
        cin >> vec[i].second;
    }

    sort(vec.begin(), vec.end());

    vector<vector<ll>> dp(N, vector<ll>(5001,0));

    ll sum = 0;
    ll mod = 998244353;
    
    if (vec[0].first >= vec[0].second) {
        sum++;
    }
    dp[0][vec[0].second] = 1;
    dp[0][0] = 1;
    rep(i,1,N) {
        ll ta = vec[i].first, tb = vec[i].second;

        rep(j,tb,5001) {
            dp[i][j] = (dp[i][j] + dp[i-1][j-tb])%mod;
        }
        rep(j,1,ta+1) sum += dp[i][j];
        rep(j,0,5001) {
            dp[i][j] += dp[i-1][j];
        }
    }   
    cout << sum%mod << endl;

    return 0;
}