#include <bits/stdc++.h>
using namespace std;

// #pragma GCC target ("avx2")
// #pragma GCC optimization ("O3")
// #pragma GCC optimization ("unroll-loops")

// #APIROS3 TEMPLATE FROM HERE
using ll = long long;
using ld = long double;
using ull = unsigned long long;
using pll = pair<ll,ll>;
using vll = vector<ll>;
using vvll = vector<vll>;
using vpll = vector<pll>;
using vvpll = vector<vpll>;

#define rep(i,start,end) for(auto i=start; i<end; i++)
#define rrep(i,start,end) for(auto i=start; i>=end; i--)
#define all(a) a.begin(),a.end() 

ll INF = 1LL << 60;
ll SINF = 1LL << 30;
ld PI = 3.141592653589793;
ll MOD9 = 998244353LL;
ll MOD10 = 1000000007LL;


void vlldebug(vll G) {for(auto i : G) cout << i << " "; cout << endl; return;}
void vplldebug(vpll G) {for(auto v : G) {cout << "{" << v.first << ", " << v.second << " "; cout << endl;}}
void vvlldebug(vvll G) {for(auto v : G) {for(auto i : v) cout << i << " "; cout << "\n";} cout << endl; return;}

ull modpow(ull btmn, ull topn, ull mod) {
    ll ret = 1;
    btmn%=mod;
    for(; topn; topn /= 2, btmn = (btmn*btmn)%mod) 
        if (topn & 1) ret = (ret*(btmn%mod))%mod; 
    return ret%mod;
} 
ll intpow(ll btmn, ll topn) {
    return modpow(btmn, topn, INF);
}
template<class T>
T gcd(T L, T R) {
    if (R==0) return L; 
    return gcd(R,L%R);
}
template<class T>
T lcm(T L, T R) {
    return L/gcd(R,L)*R;
}
ull fact_mod(ull N, ull mod) {
    if (N == 1) return 1;
    return N * fact_mod(N-1,mod) % mod;
}
ull fact(ull N) {
    return fact_mod(N,INF);
}

bool chmin(ll &to, ll from) {
    if (to > from) {
        to = from;
        return true;
    }
    return false;
}
bool chmax(ll &to, ll from) {
    if (to < from) {
        to = from;
        return true;
    }
    return false;
}
bool inf_check(ll &to) {
    if (to == INF) {
        to = -1;
        return true;
    }
    return false;
}

struct UnionFind {
    vector<ll> par; 
    UnionFind(ll N) : par(N) {
        rep(i,0,N) par[i]=i;
    }
    ll root(ll x) {
        if (par[x]==x) return x; 
        return par[x] = root(par[x]);
    }
    void unite(ll x, ll y) {
        ll rx = root(x), ry = root(y); 
        if (rx == ry) return; 
        par[rx] = ry;
    }
    bool same(ll x, ll y) {
        ll rx = root(x), ry = root(y); 
        return rx == ry;
    }
};

struct BinomCoef {
    vector<ll> fct, iv, ivfct; 
    ll md, current_size = 1;
    BinomCoef(ll mod) : fct(2,1), iv(2,1), ivfct(2,1) {
        md = mod;
    }
    void update(ll N) {
        assert(N > current_size);
        fct.resize(N+1), iv.resize(N+1), ivfct.resize(N+1);
        rep(i,current_size+1,N+1) {
            fct[i] = fct[i-1] * i % md; 
            iv[i] = md - iv[md%i] * (md/i)%md; 
            ivfct[i] = ivfct[i-1] * iv[i] % md;
        }
    }
    ull nCr(ll N, ll R) {
        if (R < 0 || N < R) return 0;
        if (N > current_size) update(N);
        return fct[N] * (ivfct[R] * ivfct[N - R] % md) % md;
    }
    ull nPr(ll N, ll R) {
        if (R < 0 || N < R) return 0;
        if (N > current_size) update(N);
        return fct[N] * ivfct[R] % md;
    }
}mod9(MOD9), mod10(MOD10);

// vector<ll> bfs_uw1_adj(vector<vector<ll>> adj) {
//     return bfs_uw1_adj(adj,1);
// } 
vector<ll> bfs_uw1_adj(vector<vector<ll>> adj, ll start) {
    vector<ll> dist(adj.size(),INF);
    dist[start] = 0;
    queue<ll> que;
    que.push(start);
    while(!que.empty()) {
        ll tp = que.front(); que.pop();
        for(auto u : adj[tp]) {
            if (chmin(dist[u], dist[tp]+1)) {
                que.push(u);
            }
        }
    }
    for(auto &u : dist) inf_check(u);
    return dist;
}
// vector<ll> bfs_uw1(vector<pair<ll,ll>> G, ll size) {
//     return bfs_uw1(G,size,1);
// }
vector<ll> bfs_uw1(vector<pair<ll,ll>> G, ll size, ll start) {
    vector<ll> dist(size+1,INF);
    vector<vector<ll>> adj(size+1);
    for(auto u : G) {
        adj[u.first].push_back(u.second);
    }
    return bfs_uw1_adj(adj,start);
}
// vector<vector<ll>> bfs_uw2_adj(vector<vector<vector<pair<ll,ll>>>> adj) {
//     return bfs_uw2_adj(adj,{0,0});
// }
// vector<vector<ll>> bfs_uw2_adj(vector<vector<vector<pair<ll,ll>>>> adj, pair<ll,ll> start) {
//     assert(adj.size() > 0);
//     ll H = adj.size(), W = adj[0].size();
//     vector<vector<ll>> adj_one(H*W);
    

// }

//just dijkstra
vector<ll> bfs_w1_adj(vector<vector<pair<ll,ll>>> adj, ll start) {
    vector<ll> dist(adj.size(),INF);
    priority_queue<pair<ll,ll>,vector<pair<ll,ll>>,greater<pair<ll,ll>>> que;
    dist[start] = 0;
    que.push({0,start});

    while(!que.empty()) {
        ll dis = que.top().first, pos = que.top().second;
        que.pop();
        
        if (dis > dist[pos]) continue;
        for(auto u : adj[pos]) {
            if (dist[u.first] > dist[pos] + u.second) {
                dist[u.first] = dist[pos] + u.second;
                que.push({dist[pos] + u.second,u.first});
            }
        }
    }
    for(auto &u : dist) inf_check(u);
    return dist;
}

// vector<vector<ll>> generic_maze(vector<vector<ll>> G, pair<ll,ll> start, vector<pair<ll,ll>> motion) {

// }

// vector<ll> dfs_adj(vector<vector<ll>> G, ll start) {


// }



struct Init {
    Init() {
        ios_base::sync_with_stdio(false);
	    cin.tie(0);
        cout << setprecision(15) << fixed;
    }
}init;
// TO HERE

ll cst(vector<ll> vec, ll want) {
    if (vec.size() == 0) return INF;

    ll sum = 0;
    for(auto u : vec) sum += u;
    return (vec.size()-1)*10 + abs(want-sum);
}



int main()
{


    ll N, A, B, C; cin >> N >> A >> B >> C;
    vector<ll> vec(N);
    rep(i,0,N) cin >> vec[i];

    ll mn = INF;
    rep(i,0,(1ll << 2*N)) {
        vector<ll> vA, vB, vC;
        ll tmp = i;
        rep(j,0,N) {
            if (tmp%4 == 0) vA.push_back(vec[j]);
            if (tmp%4 == 1) vB.push_back(vec[j]);
            if (tmp%4 == 2) vC.push_back(vec[j]);
            tmp/=4;
        }

        chmin(mn,cst(vA,A)+cst(vB,B)+cst(vC,C));
    }
    cout << mn << endl;

    return 0;
}     
