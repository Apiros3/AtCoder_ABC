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


ll calc(ll H, ll W) {
    ll ret = H*(W%3 != 0 ? 1 : 0);
    rep(i,1,W) {
        vector<ll> vec;
        vec.push_back(i*H);

        if (H%2 == 0) {
            vec.push_back((H/2)*(W-i));
            vec.push_back((H/2)*(W-i));
        }
        else {
            vec.push_back((H/2)*(W-i));
            vec.push_back((H/2+1)*(W-i));
        }
        ret = min(ret,max(vec[0],max(vec[1],vec[2])) - min(vec[0],min(vec[1],vec[2]))); 
    }

    return ret;

}

int main()
{

    ll H, W; cin >> H >> W;

    cout << min(calc(H,W), calc(W,H)) << endl;

    return 0;
}
