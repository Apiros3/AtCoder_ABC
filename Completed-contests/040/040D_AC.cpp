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

struct UnionFind {vector<ll> par; UnionFind(ll N) : par(N) {rep(i,0,N) par[i]=i;}
    ll root(ll x) {if (par[x]==x) return x; return par[x] = root(par[x]);}
    void unite(ll x, ll y) {ll rx = root(x), ry = root(y); if (rx == ry) return; par[rx] = ry;}
    bool same(ll x, ll y) {ll rx = root(x), ry = root(y); return rx == ry;}};

int main()
{

    ll N, M; cin >> N >> M;
    vector<pair<ll,pair<ll,ll>>> vec;
    rep(i,0,M) {
        ll A, B, Y; cin >> A >> B >> Y;
        vec.push_back({-Y,{A,B}});
    }
    sort(vec.begin(), vec.end());
    // for(auto u :vec) cout << -u.first << endl;
    UnionFind UF(N+1);
    vector<ll> pos(N+1,1);
    
    vector<pair<pair<ll,ll>,ll>> query;
    ll Q; cin >> Q;
    rep(i,0,Q) {
        ll V, W; cin >> V >> W;
        query.push_back({{-W,V},i});
    }
    vector<ll> fin(Q);

    sort(query.begin(), query.end());
    ll cur = 0;
    rep(i,0,Q) {
        ll Y = -query[i].first.first, U = query[i].first.second, K = query[i].second;

        while(cur < M) {
            if (-vec[cur].first > Y) {
                ll A = vec[cur].second.first, B = vec[cur].second.second;
                cur++;
                if (UF.root(A) == UF.root(B)) continue;
                ll ta = pos[UF.root(A)], tb = pos[UF.root(B)];
                UF.unite(A,B);
                pos[UF.root(A)] = ta+tb;
            }
            else {
                break;
            }
        }
        // rep(i,1,N+1) cout << pos[UF.root(i)] << " ";
        // cout << endl;
        fin[K] = pos[UF.root(U)];

    }
    for(auto u : fin) cout << u << endl;

    return 0;
}
