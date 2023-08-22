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

ll C; 
ll solve(vector<pair<ll,ll>> vec) {

    ll mx = 0, curmx = -1;
    ll N = vec.size();
    vector<ll> dp(N,0);
    vector<pair<ll,ll>> tmp = vec;
    rep(i,1,N) tmp[i].second += tmp[i-1].second;
    rep(i,0,N) {
        if (tmp[i].second - tmp[i].first > mx) {
            mx = tmp[i].second - tmp[i].first;
            curmx = i;
        }
        dp[i] = curmx;
    }
    ll retmx = 0, cursum = 0;
    rrep(i,N-1,0) {
        cursum += vec[i].second;
        ll tsum = 0;
        if (i != 0 && dp[i-1] != -1) tsum = tmp[dp[i-1]].second - tmp[dp[i-1]].first;
        // cout << cursum << " " << tsum << " " << 2*(C-vec[i].first) << endl;

        if (cursum - 2*(C - vec[i].first) + tsum > retmx) {
            retmx = cursum - 2*(C - vec[i].first) + tsum;
        }
    }
    return max(retmx,mx);
}

int main()
{

    vector<pair<ll,ll>> vec;
    ll N; cin >> N >> C;
    rep(i,0,N) {
        ll X, V; cin >> X >> V;
        vec.emplace_back(X,V);
    }
    ll tmx = solve(vec);

    rep(i,0,vec.size()) vec[i].first = C - vec[i].first;
    sort(vec.begin(),vec.end());
    // for(auto u : vec) cout << u.first << " " << u.second << endl;

    cout << max(tmx,solve(vec)) << endl;

    return 0;
}
