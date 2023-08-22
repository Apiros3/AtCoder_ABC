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
    vector<vector<ll>> vec(N+1);
    rep(i,0,N) {
        ll F, S; cin >> F >> S;
        vec[F].push_back(S);
    }

    ll mx = 0;
    rep(i,1,N+1) {
        sort(vec[i].begin(), vec[i].end(), greater<ll>());

        if (vec[i].size() >= 2) {
            ll tsum = vec[i][0] + vec[i][1]/2;
            mx = max(mx, tsum);
        }
    }
    vector<ll> ts;
    rep(i,1,N+1) {
        if (vec[i].size() > 0)
            ts.push_back(vec[i][0]);
    }
    sort(ts.begin(), ts.end(), greater<ll>());
    if (ts.size() >= 2) {
        mx = max(mx, ts[0] + ts[1]);
    }

    cout << mx << endl;

    return 0;
}
