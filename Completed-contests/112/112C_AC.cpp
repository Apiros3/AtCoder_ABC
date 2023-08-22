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
    vector<ll> X(N), Y(N), H(N);
    rep(i,0,N) cin >> X[i] >> Y[i] >> H[i];

    rep(i,0,101) {
        rep(j,0,101) {
            map<ll,ll> mp;
            vector<pair<ll,ll>> vec;
            rep(k,0,N) {
                if (H[k] == 0) {
                    vec.emplace_back(X[k],Y[k]);
                    continue;
                }   
                ll tm = H[k] + abs(X[k]-i) + abs(Y[k]-j);
                if (tm > 0) mp[tm]++;
            }
            if (mp.size() == 1) {
                ll ret = mp.begin()->first;
                ll add = 1;
                for(auto u : vec) {
                    if (abs(u.first-i)+abs(u.second-j) < ret) {
                        add = 0;
                    }
                }
                if (add) 
                    cout << i << " " << j << " " << ret << endl;
            }
        }
    }

    return 0;
}
