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

vector<ll> lis(vector<ll> vec) {
    ll N = vec.size();
    vector<ll> ret(N+1,INF);
    ret[0] = -INF;
    
    rep(i,0,vec.size()) {
        ll tm = vec[i];
        ll ok = 0, ng = N+1;
        while(ok + 1 < ng) {
            ll md = (ok+ng)/2;
            if (tm > ret[md]) {
                ok = md;
            }
            else {
                ng = md;
            }
        }   
        assert(ok != N);
        ret[ok+1] = tm; 
    }
    return ret;
}

ll func(ll N) {
    if (N == 0) return 1;
    ll ret = 0;

    ll M = 1, cnt = 0;
    while(M <= N/10) {
        M *= 10;
        cnt++;
    }

    ll tmp = N/M;
    if (N/M >= 5) tmp--;

    //includes 0
    // cout << tmp << " " << intpow(8ll,cnt,INF) << endl; 
    ret += tmp * intpow(8ll,cnt,INF);
    if (N/M != 4 && N/M != 9) {
        ret += func(N%M);
    }
    return ret;
}


int main()
{

    ll A, B; cin >> A >> B;

    cout << (B - func(B)) - (A-1 - func(A-1)) << endl;

    return 0;
}
