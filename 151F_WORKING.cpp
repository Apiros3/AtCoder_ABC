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

vector<vector<ll>> vec;
vector<ll> used;
ll mod = intpow(10,9,INF)+7;

//memo {white, black}
pair<ll,ll> memo(ll S) {
    used[S] = 1;
    pair<ll,ll> ret = {1,1};
    for(auto u : vec[S]) {
        if (used[u]) continue;
        pair<ll,ll> tmp = memo(u);
        ret.first *= (tmp.first + tmp.second);
        ret.second *= tmp.first;

        ret.first %= mod;
        ret.second %= mod;
    }
    return ret;
}


pair<ll,ll> centrad(vector<pair<ll,ll>> vec) {
    pair<ll,ll> A = vec[0], B = vec[1], C = vec[2];

    


}


int main()
{

    ll N; cin >> N;
    vector<ll> X(N), Y(N);
    rep(i,0,N) cin >> X[i] >> Y[i];



    return 0;
}
