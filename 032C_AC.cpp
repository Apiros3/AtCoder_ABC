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
ll SINF = 1LL << 30;
ld PI = 3.141592653589793;

struct Init {
    Init() {
        cout << setprecision(15);
    }
}init;

struct UnionFind {vector<ll> par; UnionFind(ll N) : par(N) {rep(i,0,N) par[i]=i;}
    ll root(ll x) {if (par[x]==x) return x; return par[x] = root(par[x]);}
    void unite(ll x, ll y) {ll rx = root(x), ry = root(y); if (rx == ry) return; par[rx] = ry;}
    bool same(ll x, ll y) {ll rx = root(x), ry = root(y); return rx == ry;}};



int main()
{

    ll N, K; cin >> N >> K;
    vector<ll> S(N);
    rep(i,0,N) {
        cin >> S[i];
        if (S[i] == 0) {
            cout << N << endl;
            return 0;
        }
    }
    if (K == 0) {
        cout << 0 << endl;
        return 0;
    }

    vector<pair<ll,ll>> vec;
    vec.push_back({-1,SINF});

    rep(i,0,N) {
        if (S[i] != 1) {
            vec.emplace_back(i,S[i]);
        }
    }
    vec.push_back({N,SINF});    
    ll mx = 0;
    rep(i,1,vec.size()) {
        mx = max(mx, vec[i].first - vec[i-1].first - 1);
    }

    rep(i,1,vec.size()-1) {
        ll cn = vec[i].second, cur = i+1;
        if (cn > K) continue;
        while(cn*vec[cur].second <= K) {
            cn *= vec[cur].second;
            cur++;
        }
        mx = max(mx, vec[cur].first - vec[i-1].first - 1);
    }
    cout << mx << endl;

    return 0;
}
