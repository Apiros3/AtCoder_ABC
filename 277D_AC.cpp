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
using vvvll = vector<vvll>;
using vpll = vector<pll>;
using vvpll = vector<vpll>;
using vvvpll = vector<vvpll>;

#define rep(i,start,end) for(ll i=start; i<end; i++)
#define rrep(i,start,end) for(ll i=start; i>=end; i--)
#define all(a) a.begin(),a.end() 

ll INF = 1LL << 60;
ll SINF = 1LL << 30;
ld PI = 3.141592653589793;
ll MOD9 = 998244353LL;
ll MOD10 = 1000000007LL;

void debug(vll G) {
    for(auto u : G) cout << u << " ";
    cout << endl;
}
void debug(vpll G) {
    for(auto u : G) cout << u.first << "," << u.second << "  ";
    cout << endl;
}
void debug(vvll G) {
    for(auto u : G) {
        for(auto v : u) cout << v << " ";
        cout << endl;
    }
}

void input(vll &G) {
    rep(i,0,G.size()) cin >> G[i];
}
vll input(ll N) {
    vll ret(N);
    rep(i,0,N) cin >> ret[i];
    return ret;
}

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
ll gcd(ll L, ll R) {
    if (R==0) return L; 
    return gcd(R,L%R);
}
ll lcm(ll L, ll R) {
    return L/gcd(R,L)*R;
}
ull fact_mod(ull N, ull mod) {
    if (N == 0) return 1;
    return N * fact_mod(N-1,mod) % mod;
}
template <typename T>
T fact(T N) { 
    if (N == 0) return 1;
    return N*fact(N-1);
}

template <typename T>
T min(vector<T> G) {
    assert(G.size() > 0);
    T mn = G[0];
    for(auto u : G) mn = min(mn, u);
    return mn;
}
template <typename T>
bool chmin(T &to, T from) {
    if (to > from) {
        to = from;
        return true;
    }
    return false;
}
template <typename T>
bool chmin(T &to, vector<T> from) {
    T tmp = min(from);
    if (to > tmp) {
        to = tmp;
        return true;
    }
    return false;
}

template <typename T>
T max(vector<T> G) {
    assert(G.size() > 0);
    T mx = G[0];
    for(auto u : G) mx = max(mx, u);
    return mx;
}
template <typename T>
bool chmax(T &to, T from) {
    if (to < from) {
        to = from;
        return true;
    }
    return false;
}
template <typename T>
bool chmax(T &to, vector<T> from) {
    T tmp = max(from);
    if (to < tmp) {
        to = tmp;
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
ll inf_check(vll &to) {
    ll cnt = 0;
    for(auto &u : to) {
        if (u == INF) {
            u = -1;
            cnt++;
        }
    }
    return cnt;
}
ll inf_check(vvll &to) {
    ll cnt = 0;
    for(auto &u : to) {
        for(auto &v : u) {
            if (v == INF) {
                v = -1;
                cnt++;
            }
        }
    }
    return cnt;
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
};

struct Modulo {
    BinomCoef BF;
    ll md;
    Modulo(ll mod) : BF(mod) {
        md = mod;
    }
    ull nCr(ll N, ll R) {
        return BF.nCr(N,R);
    }
    ull nPr(ll N, ll R) {
        return BF.nPr(N,R);
    }
    ull recip(ll N) {
        assert(N != 0 && gcd(N,md) == 1);
        return modpow(N,md-2,md);   
    }

}mod9(MOD9), mod10(MOD10);


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
    inf_check(dist);
    return dist;
}
vector<ll> bfs_uw1_adj(vector<vector<ll>> adj) {
    return bfs_uw1_adj(adj,1);
} 

vector<ll> bfs_uw1(vector<pair<ll,ll>> G, ll size, ll start) {
    vector<ll> dist(size+1,INF);
    vector<vector<ll>> adj(size+1);
    for(auto u : G) {
        adj[u.first].push_back(u.second);
    }
    return bfs_uw1_adj(adj,start);
}
vector<ll> bfs_uw1(vector<pair<ll,ll>> G, ll size) {
    return bfs_uw1(G,size,1);
}
vector<vector<ll>> bfs_uw2_adj(vector<vector<vector<pair<ll,ll>>>> adj, pair<ll,ll> start) {
    assert(adj.size() > 0);
    ll H = adj.size(), W = adj[0].size();
    vector<vector<ll>> dist(H,vector<ll>(H,INF));
    queue<pair<ll,ll>> que;
    que.push(start);
    dist[start.first][start.second] = 0;
    while(!que.empty()) {
        auto tmp = que.front(); que.pop();
        ll h = tmp.first, w = tmp.second;
        for(auto u : adj[h][w]) {
            if (chmin(dist[u.first][u.second],dist[h][w]+1)) {
                que.push(u);
            }
        }
    } 
    inf_check(dist);
    return dist;
}
vector<vector<ll>> bfs_uw2_adj(vector<vector<vector<pair<ll,ll>>>> adj) {
    return bfs_uw2_adj(adj,{0,0});
}

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
    inf_check(dist);
    return dist;
}

//unweighted
//0 is ok squares, 1 is not
vvll generic_maze(vvll G, pll start, vpll motion) {
    assert(G.size() > 0);
    ll H = G.size(), W = G[0].size();
    vvvpll adj(H,vvpll(W));
    rep(i,0,H) {
        rep(j,0,W) {
            for (auto u : motion) {
                ll posh = i+u.first, posw = j+u.second;
                if (posh < 0 || H <= posh) continue;
                if (posw < 0 || W <= posw) continue;
                if (G[posh][posw]) continue;
                adj[i][j].push_back({posh,posw});
            }
        }
    }
    return bfs_uw2_adj(adj,start);
}

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


int main()
{

    ll N, M; cin >> N >> M;
    auto A = input(N);
    sort(all(A));
    ll tsum = 0;
    for(auto u : A) tsum += u;

    rep(i,0,N) A.push_back(A[i]+M);
    ll mx = 0;
    ll sum = 0, cur = -1;
    // debug(A);
    for(auto u : A) {
        // cout << cur << " " << sum << " " << mx << endl; 
        if (u <= cur+1) {
            sum += u%M;
        }
        else {
            chmax(mx, sum);
            sum = u%M;
        }
        cur = u;
    }
    chmax(mx,sum);
    // cout << tsum << " " << mx << endl;
    cout << max(0ll,tsum-mx) << endl;


    return 0;
}     
