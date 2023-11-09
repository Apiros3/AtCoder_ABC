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
// ld MEPS = pow(10,-8);

template <typename T>
void input(vector<T> &G) {
    rep(i,0,G.size()) cin >> G[i];
}
template <typename T, typename W>
void input(vector<T> &G, vector<W> &H) {
    rep(i,0,G.size()) cin >> G[i] >> H[i];
}

template <typename T>
void add(vector<T> &A, vector<T> B) {
    A.insert(A.end(),all(B));
}

ll popcount(ll X) {
    return __builtin_popcount(X);
}

void debug(vll G) {
    for(auto u : G) cout << u << " ";
    cout << endl;
}
void debug_s(vll G) {
    cout << G.size() << endl;
    debug(G);
}
void debug(vpll G) {
    for(auto u : G) cout << u.first << "," << u.second << "  ";
    cout << endl;
}
void debug(vvll G) {
    for(auto u : G) {
        debug(u);
    }
}
void debug_s(vvll G) {
    cout << G.size() << endl;
    for(auto u : G) {
        cout << u.size() << " ";
        debug(u);
    }
}
void debug(vvpll G) {
    for(auto u : G) {
        for(auto v : u) cout << v.first << "," << v.second << "  ";
        cout << endl;
    }
}

ll extGCD(ll A, ll B, ll &X, ll&Y) {
    if (B==0) {
        X = 1; Y = 0; 
        return A;
    } 
    ll D = extGCD(B, A%B, Y, X); 
    Y -= A/B*X; 
    return D;
}

template <typename T, typename U>
void debug(map<T,U> mp) {
    for(auto u : mp) cout << u.first << "," << u.second << "  ";
    cout << endl;
}
void yesno(bool check) {
    if (check) cout << "Yes" << endl;
    else cout << "No" << endl;
}

ull modpow(ull btmn, ull topn, ull mod) {
    ll ret = 1%mod;
    btmn%=mod;
    for(; topn; topn /= 2, btmn = (btmn*btmn)%mod) 
        if (topn & 1) ret = (ret*btmn)%mod; 
    return ret;
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
        par[ry] = rx;
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
        if (N < current_size) return;
        fct.resize(N+1), iv.resize(N+1), ivfct.resize(N+1);
        rep(i,current_size+1,N+1) {
            fct[i] = fct[i-1] * i % md; 
            iv[i] = md - iv[md%i] * (md/i)%md; 
            ivfct[i] = ivfct[i-1] * iv[i] % md;
        }
        current_size = fct.size()-1;
    }
    ull nCr(ll N, ll R) {
        if (R < 0 || N < R) return 0;
        update(N);
        return fct[N] * (ivfct[R] * ivfct[N - R] % md) % md;
    }
    ull nPr(ll N, ll R) {
        if (R < 0 || N < R) return 0;
        update(N);
        return fct[N] * ivfct[R] % md;
    }
    ull nHm(ll N, ll M) {
        return nCr(N+M-1,M);        
    }
};

struct Modulo {
    private :
    BinomCoef BF;
    ll md;

    public :
    Modulo(ll mod) : BF(mod) {
        md = mod;
    }
    ll nCr(ll N, ll R) {
        return BF.nCr(N,R);
    }
    ll nPr(ll N, ll R) {
        return BF.nPr(N,R);
    }
    ll nHm(ll N, ll M) {
        return BF.nHm(N,M);
    }
    ll fact(ll N) {
        BF.update(N);
        return BF.fct[N];
    }
    ll ivfact(ll N) {
        BF.update(N);
        return BF.ivfct[N];
    }
    ll multinomial(ll N, vll G) {
        ll sum = 0;
        for(auto u : G) sum += u;
        if (N-sum != 0) G.push_back(N-sum);
        if (sum > N) return 0;
        ll ret = fact(N);
        for(auto u : G) ret = (ret * ivfact(u))%md;
        return ret;
    }

}mod9(MOD9), mod10(MOD10);

ull modmul(ull a, ull b, ull M) {
    ll ret = a * b - M * ull(1.L / M * a * b);
    return ret + M * (ret < 0) - M * (ret >= (ll)M);
}
ull modpow_s(ull btmn, ull topn, ull modn) {
    ll ret_num = 1;
    btmn%=modn;
    for(; topn; topn/=2, btmn=modmul(btmn,btmn,modn))
        if (topn & 1) ret_num=modmul(ret_num,btmn,modn);
    return ret_num%modn;
}
bool isPrime(ll n) {
    if (n < 2 || n % 6 % 4 != 1) return (n | 1) == 3;
    ull A[] = {2, 325, 9375, 28178, 450775, 9780504, 1795265022},
        s = __builtin_ctzll(n-1), d = n >> s;
    for (ull a : A) {
        ull p = modpow_s(a%n, d, n), i = s;
        while (p != 1 && p != n - 1 && a % n && i--)
            p = modmul(p,p,n);
        if (p != n-1 && i != s) return 0;
    }
    return 1;
}

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

struct general_bfs_uw {
    vll dist, prev;
    ll N;
    general_bfs_uw(vvll adj, ll start) : dist(adj.size(),INF), prev(adj.size(),-1) {
        N = adj.size();
        queue<ll> que;
        dist[start] = 0;
        que.push(start);
        while(!que.empty()) {
            ll top = que.front(); que.pop();
            for(auto u : adj[top]) {
                if (dist[u] > dist[top] + 1) {
                    dist[u] = dist[top] + 1;
                    prev[u] = top;
                    que.push(u);
                }
            }

        }
    } 
    vvll child() {
        vvll ret(N);
        rep(i,0,N) if (prev[i] != -1) {
            ret[prev[i]].push_back(i);
        }
        return ret;
    }

};


void dfs(vvll &adj, vll &start, vll &fin, vll &prev, ll &cnt, ll pos) {
    start[pos] = cnt++;
    for(auto u : adj[pos]) {
        if (start[u] == -1 || start[u] == INF) {
            dfs(adj,start,fin,prev,cnt,u);
            prev[u] = pos;
        }
    }
    fin[pos] = cnt++;
}
void dfs(vvll &adj, vll &root, ll pos, ll head) {
    root[pos] = head;
    for(auto u : adj[pos]) {
        if (root[u] == -1 || root[u] == INF) {
            dfs(adj,root,u,head);
        }
    }
}
vll dfs_adj(vvll adj, ll start) {
    ll N = adj.size();
    vll strt(N,-1), prev(N,-1), fin(N, -1);
    ll cnt = 0;
    dfs(adj,strt,fin,prev,cnt,start);
    return fin;
}
vll topological_sort(vll fin) {
    ll N = fin.size();
    vll ret(N);
    vpll lis(N);
    rep(i,0,N) lis[i] = {fin[i],i};
    sort(all(lis),greater<pll>());
    rep(i,0,N) ret[i] = lis[i].second;
    return ret;
}
vvll transpose(vvll adj) {
    ll N = adj.size();
    vvll ret_adj(N);
    rep(i,0,N) {
        for(auto u : adj[i]) {
            ret_adj[u].push_back(i);
        }
    }
    return ret_adj;
}

struct general_dfs {
    vll start, fin, prev;
    vvll adj_list;
    ll N = 0, cnt = 0;
    general_dfs(vvll adj) : start(adj.size(),-1), fin(adj.size(),-1), prev(adj.size(),-1) {
        N = adj.size();
        adj_list = adj;
        rep(i,0,N) {
            if (start[i] == -1)
                dfs(adj,start,fin,prev,cnt,i);
        }
    }
    vll topological() {
        return topological_sort(fin);
    }
    vvll scc_general() {
        vll root(N,-1);
        vvll gt = transpose(adj_list);
        vpll tmp(N);
        ll cnt = 0;
        map<ll,ll> mp;
        rep(i,0,N) tmp[i] = {fin[i],i};
        sort(all(tmp),greater<pll>());
        rep(i,0,N) {
            ll key = tmp[i].second;
            if (root[key] == -1) {
                dfs(gt,root,key,key);
                mp[key] = cnt++; 
            }
        }
        vvll ret(cnt);
        rep(i,0,N) {
            ret[mp[root[i]]].push_back(i);
        }
        return ret;
    }
};


struct enum_primes {
    vector<ll> Prime_list;
    vector<bool> flags;
    enum_primes(uint64_t N) {
        if (N < 2) return;
        N++;
        flags.resize(N / 2, 1);
        flags[0] = 0;
        Prime_list.push_back(2);
        const uint64_t sqrt_x = ceil(sqrt(N) + 0.1) / 2;
        for (uint64_t i = 1; i < sqrt_x; ++i) {
            if (!flags[i]) continue;
            const uint64_t p = 2*i + 1;
            for (uint64_t mult = 2*i*(i+1); mult < N/2; mult += p)
                flags[mult] = 0;
            Prime_list.push_back(p);
        }
        for(uint64_t p = sqrt_x; p < N/2; ++p) {
            if (flags[p]) Prime_list.push_back(2*p + 1);
        }
    }
    bool flag(uint64_t X) {
        if (X == 2) return 1;
        if (X%2 == 0) return 0;
        return flags[(X-1)/2];
    }
};

struct general_primes_passive {
    private : 
    vll lists;
    vll flags;
    ll cnt = 1;   
    void update(ll N) {
        if (cnt > (N-1)/2) return;
        flags.resize(N/2 + 1, 0);
        for(; cnt <= (N-1)/2; cnt++) {
            if (isPrime(cnt*2+1)) {
                lists.push_back(cnt*2+1);
                flags[cnt] = 1;
            }
        }
    }

    public :
    general_primes_passive() : lists(1,2), flags(1,0) {}
    bool flag(ll query) {
        if (query&1) {
            update(query);
            return flags[query/2];
        }
        return query == 2;
    }
    ll list(ll query) {
        while(lists.size()+1 < query) {
            update(4*cnt);
        }
        return lists[query];
    }
    ll pi(ll N) {
        update(N);
        return upper_bound(all(lists),N)-lists.begin();
    }
    
}PRIME;

//strict
vll LIS_S(vll G) {
    vll ret;
    ll N = G.size();
    vll prev(N,-1), length(N+1,INF), cur(N+1,-1);
    length[0] = -INF;
    rep(i,0,N) {
        auto u = G[i];
        ll ok = 0, ng = N+1;
        while(ok + 1 < ng) {
            ll md = (ok + ng)/2;
            if (length[md] < u) ok = md;
            else ng = md;
        }
        length[ok+1] = u;
        prev[i] = cur[ok];
        cur[ok+1] = i;
    }
    rrep(i,N,0) if (cur[i] != -1) {
        ll tmp = cur[i];
        ret.push_back(tmp);
        while(prev[tmp] != -1) {
            tmp = prev[tmp];
            ret.push_back(tmp);
        }
        reverse(all(ret));
        return ret;
    }
    return ret;
}
vll LIS_N(vll G) {
    vll ret;
    ll N = G.size();
    vll prev(N,-1), length(N+1,INF), cur(N+1,-1);
    length[0] = -INF;
    rep(i,0,N) {
        auto u = G[i];
        ll ok = 0, ng = N+1;
        while(ok + 1 < ng) {
            ll md = (ok + ng)/2;
            if (length[md] <= u) ok = md;
            else ng = md;
        }
        length[ok+1] = u;
        prev[i] = cur[ok];
        cur[ok+1] = i;
    }
    rrep(i,N,0) if (cur[i] != -1) {
        ll tmp = cur[i];
        ret.push_back(tmp);
        while(prev[tmp] != -1) {
            tmp = prev[tmp];
            ret.push_back(tmp);
        }
        reverse(all(ret));
        return ret;
    }
    return ret;
}

//gives possible factorizations (without 1s)
vvpll factorization(ll N, ll mn) {
    vvpll vec;
    if (N < mn) return vec;
    for(int i = mn; i*i <= N; ++i) {
        ll cnt = 0, tmp = N;
        while (tmp%i == 0) {
            cnt++; tmp /= i;
            auto tmvec = factorization(tmp,i+1);
            for(auto &u : tmvec) u.push_back({i,cnt});
            if (tmp == 1) tmvec.push_back(vpll{{i,cnt}});
            add(vec,tmvec);
        }
    }
    vec.push_back(vpll{{N,1}});
    return vec;

}


bool tbfs(vector<map<ll,ll>> &adj, ll s, ll t, vll &par) {
    ll N = adj.size();
    vll visited(N,0);
    queue<ll> que;
    que.push(s);
    visited[s] = 1;
    par[s] = -1;
    while(!que.empty()) {
        ll u = que.front();
        que.pop();
        for(auto v : adj[u]) {
            if (!visited[v.first]) {
                if (v.first == t) {
                    par[v.first] = u;
                    return true; 
                }
                que.push(v.first);
                par[v.first] = u;
                visited[v.first] = true;
            }
        }
    }
    return false;
}


ll FF(vector<map<ll,ll>> &adj, ll source, ll target) {
    ll N = adj.size();
    vll parent(N);
    ll mx = 0;
    while(tbfs(adj,source,target,parent)) {
        for(ll v = target; v != source; v = parent[v]) {
            ll u = parent[v];
            adj[u][v]--;
            adj[v][u]++;
            if (adj[u][v] == 0) {
                adj[u].erase(v);
            }
        }

        mx++;
    }
    return mx;
}


struct Init {
    Init() {
        ios_base::sync_with_stdio(false);
        std::cin.tie(nullptr);
	    cin.tie(0);
        cout << setprecision(15) << fixed;
    }
}init;
// TO HERE
ll llceil(ll A, ll B) {
    if (A%B == 0) return A/B;
    if (A >= 0) return (A/B)+1;
    else return -((-A)/B);
}
ll llfloor(ll A, ll B) {
    if (A%B == 0) return A/B;
    if (A >= 0) return A/B;
    else return -((-A)/B)-1;
}

pll findseg(ll beg, ll step, ll start, ll end) {
    //w.t.find region k s.t. beg+k*step is in [start,end]
    pll ret;
    if (step > 0) {
        ret.first = llceil(start-beg,step);
        ret.second = llfloor(end-beg,step);
    }
    else {
        ret.first = llceil(beg-start,-step);
        ret.second = llfloor(beg-end,-step);
    }
    return ret;

}

vector<vector<vector<ld>>> mp;
// map<pair<pair<ll,ll>,ll>,ld> mp;
ll N, M;
vector<ld> X, Y;
ld dist(ll I, ll J) {
    ld dist = (X[I]-X[J])*(X[I]-X[J]) + (Y[I]-Y[J])*(Y[I]-Y[J]);
    return sqrt(dist);
}

ld memo(ll city, ll box, ll last) {
    if (mp[city][box][last] != -1) return mp[city][box][last];
    ld speed = (1ll << popcount(box));
    if (popcount(city) == N) {
        ld mn = dist(last,N+M)/speed;
        rep(i,0,M) {
            if ((1ll << i) & box) continue;
            chmin(mn, dist(last, N+i)/speed + memo(city, box + (1ll << i), N+i));
        }
        mp[city][box][last] = mn;
        return mn;
    }   
    else {
        ld mn = INF;
        rep(i,0,N) {
            if ((1ll << i) & city) continue;
            chmin(mn, dist(last,i)/speed + memo(city + (1ll << i), box, i));
        }
        rep(i,0,M) {
            if ((1ll << i) & box) continue;
            chmin(mn, dist(last,N+i)/speed + memo(city, box+ (1ll << i), N+i));
        } 
        mp[city][box][last] = mn;
        return mn;
    }
}


int main()
{ 


    ll N, M; cin >> N >> M;
    vll A(N); input(A);

    vector<ll> cnt(N+1,0);
    rep(i,0,M) {
        cnt[A[i]]++;
    }
    ll mn = INF;
    rrep(i,N,0) if (cnt[i] == 0) mn = i;
    // debug(cnt);
    rep(i,0,N-M) {
        cnt[A[i+M]]++;
        cnt[A[i]]--;
        if (cnt[A[i]] == 0) chmin(mn,A[i]);
    }
    cout << mn << endl;


    return 0;
}     
