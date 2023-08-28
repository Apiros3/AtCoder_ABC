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

    
    ll N, MA, MB; cin >> N >> MA >> MB;

    vector<ll> A(N), B(N), C(N);
    rep(i,0,N) cin >> A[i] >> B[i] >> C[i];

    vector<vector<ll>> dp(401,vector<ll>(401,INF));

    dp[0][0] = 0;
    rep(i,0,N) {
        rrep(j,400,0) {
            rrep(k,400,0) {
                if (j+A[i] > 400 || k+B[i] > 400) continue;
                dp[j+A[i]][k+B[i]] = min(dp[j+A[i]][k+B[i]], dp[j][k] + C[i]); 
            }
        }
    }
    ll mn = INF;
    rep(i,1,401) {
        if (i*MA > 400 || i*MB > 400) break;
        mn = min(mn, dp[i*MA][i*MB]);
    }

    cout << (mn == INF ? -1 : mn) << endl;

    return 0;
}
