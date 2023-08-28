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

ll fact(ll N) {
    if (N == 0) return 1;
    return N*fact(N-1);
}

struct UnionFind {vector<ll> par; UnionFind(ll N) : par(N) {rep(i,0,N) par[i]=i;}
    ll root(ll x) {if (par[x]==x) return x; return par[x] = root(par[x]);}
    void unite(ll x, ll y) {ll rx = root(x), ry = root(y); if (rx == ry) return; par[rx] = ry;}
    bool same(ll x, ll y) {ll rx = root(x), ry = root(y); return rx == ry;}};


int main()
{

    ll N, M; cin >> N >> M;
    map<pair<ll,ll>,ll> mp;
    rep(i,0,M) {
        ll A, B; cin >> A >> B;
        mp[{A,B}]++;
        mp[{B,A}]++;
    }

    ll order[8];
    rep(i,0,N) order[i] = i+1;

    ll cnt = 0;
    rep(i,0,fact(N)) {
        if (order[0] != 1) break;
        ll add = 1;
        rep(i,1,N) {
            if (!mp.count({order[i-1],order[i]})) add = 0;
        }
        cnt += add;
        next_permutation(order,order+N);
    }
    cout << cnt << endl;

    
    return 0;
}
