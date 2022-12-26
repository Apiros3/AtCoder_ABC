#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ld = long double;
using ull = unsigned long long;

#define rep(i,start,end) for(ll i=start; i<end; i++)
#define rrep(i,start,end) for(ll i=start; i>=end; i--)
#define all(a) a.begin(),a.end() 

// pow in int, takes mod and returns in O(log(topn))
    ll intpow(ll btmn, ll topn, ll modn) {ll ret_num = 1; btmn%=modn; for(; topn; topn/=2, btmn=(btmn*btmn)%modn) if (topn & 1) ret_num=(ret_num*(btmn%modn))%modn; return ret_num%modn;}
// gcd and lcm, returns in O(1)
    ll gcd(ll gcdl, ll gcdr) {if (gcdr==0) return gcdl; else return gcd(gcdr,gcdl%gcdr);}
    ll lcm(ll lcml, ll lcmr) {return lcml/gcd(lcml,lcmr)*lcmr;}
// factorial, takes mod and returns in O(factnum)
    ll fact_int(ll factnum, ll modn) {if (factnum==1) return 1; return (factnum%modn*fact_int(factnum-1,modn))%modn;}
// factorial, takes mod and stores in assigned array in O(factnum)
    void fact_arr(ll factnum, ll modn, ll *A) {*(A+0) = 1; rep(i,1,factnum+1) *(A+i) = (*(A+i-1) * i%modn)%modn;}
// stores values of X and Y that satisfy AX + BY = 1
    ll extGCD(ll A, ll B, ll &X, ll&Y) {if (B==0) {X = 1; Y = 0; return A;} ll D = extGCD(B, A%B, Y, X); Y -= A/B*X; return D;}
// stores values of X and Y that satisfy AX + BY = C
    ll extGCD_plus(ll A, ll B, ll C, ll &X, ll &Y) {ll ret_num = extGCD(A, B, X, Y); X *= C/gcd(A,B); Y *= C/gcd(A,B); return ret_num;}
// returns inverse of a fraction in modn (0 if no inverse exists)
    ll inv_el_frac(ll mol, ll den, ll modn) {ll X, Y; extGCD_plus(den%modn, modn, mol, X, Y); return (X+modn)%modn;}
// returns invrse of a fraction in modn in an assigned array
    void inv_el_fact_arr(ll factnum, ll modn, ll *A, ll *B) {*(A) = 1; *(B) = 1; *(A+1) = 1; *(B+1) = 1; rep(i,2,factnum+1) {*(A+i) = modn - *(A+(modn%i)) * (modn/i)%modn; *(B+i) = (*(B+i-1) * *(A+i))%modn;}}
// returns nCr / nPr in mod using fact_arr and inv_el_fact_arr
    ll nCr(ll N, ll R, ll modn, ll *fact, ll *invfact) {return ((*(fact+N) * *(invfact+R))%modn * *(invfact+N-R))%modn;}
    ll nPr(ll N, ll R, ll modn, ll *fact, ll *invfact) {return (*(fact+N) * *(invfact+R))%modn;}
// initiate for large nCr calculations
    void nCrinit(const ll size, ll modn, ll *fact, ll *inv, ll *invfact) {fact_arr(size,modn,fact); inv_el_fact_arr(size,modn,inv,invfact);}

// convers base from basebef to basenew (til 36) in O(log(|S|))
    string basechange_str(ll basebef, ll basenew, string S) {ll ret_num = 0, multiplier=1; if (S=="0") return "0"; for (ll i=S.length()-1; i>=0; i--, multiplier*=basebef) {if (S[i] <= '9') ret_num += (S[i]-'0')*multiplier; else ret_num += (S[i]-'A'+10)*multiplier;} string ret_string; for (; ret_num>0; ret_num/=basenew) {ll divnum = ret_num%basenew; if (divnum < 10) ret_string.push_back((char)('0'+divnum)); else ret_string.push_back((char)('A'+divnum-10));} reverse(ret_string.begin(),ret_string.end()); return ret_string;}

//init with UnionFind funcname (eg. UF) .root (find parent) .unite (unionize trees) .same (bool on whether they share parent)
struct UnionFind {vector<ll> par; UnionFind(ll N) : par(N) {rep(i,0,N) par[i]=i;}
    ll root(ll x) {if (par[x]==x) return x; return par[x] = root(par[x]);}
    void unite(ll x, ll y) {ll rx = root(x), ry = root(y); if (rx == ry) return; par[rx] = ry;}
    bool same(ll x, ll y) {ll rx = root(x), ry = root(y); return rx == ry;}};

string leadingzeros(ll X, ll zeros) {
    string ret = to_string(X);
    reverse(ret.begin(),ret.end());
    rep(i,ret.length(),zeros) ret+='0';
    reverse(ret.begin(),ret.end());
    return ret;
}

ll INF = 1LL << 60;
ld PI = 3.141592653589793;

struct Init {
    Init() {
        cout << setprecision(15);
    }
}init;

struct BFS_UW {
    vector<ll> ret;
    bool bipartite_t = true;
    BFS_UW(vector<vector<ll>> G, int64_t size, int64_t pos) {
        ret.resize(size,INF);
        queue<int64_t> que;
        ret[pos] = 0;
        que.push(pos);
        while(!que.empty()) {
            int64_t v = que.front();
            que.pop();

            for (auto &nv : G[v]) {
                if (ret[v] + 1 < ret[nv]) {
                    ret[nv] = ret[v] + 1;
                    que.push(nv);
                }
                else {
                    if (ret[v] == ret[nv]) bipartite_t = false;
                }
            }
        }
    }
    vector<ll> vec() {return ret;}
    bool bipartite() {return bipartite_t;}
};

int main()
{
    ll N, M; cin >> N >> M;
    vector<vector<ll>> vec(N+1);
    UnionFind UF(N+1);

    rep(i,0,M) {
        ll U, V; cin >> U >> V;
        UF.unite(U,V);
        vec[U].push_back(V);
        vec[V].push_back(U);
    }

    ll cnt = 0;

    ll ans = 0;
    queue<ll> que;
    vector<pair<ll,ll>> v;
    vector<ll> ret(N+1,INF), col(N+1,INF);
    rep(i,1,N+1) {
        if (ret[i] != INF) continue;
        bool t = 1;
        map<ll,ll> mp ,mp2;
        que.push(i);
        ret[i] = 1;
        col[i] = 1;
        mp2[i] = 1;
        while(!que.empty()) {
            int64_t v = que.front();
            que.pop();
            mp[v] = 1;
            for (auto &nv : vec[v]) {
                if (ret[v] + 1 < ret[nv]) {
                    ret[nv] = ret[v] + 1;
                    col[nv] = 1 - col[v];
                    if (col[nv]) mp2[nv] = 1;
                    que.push(nv);
                }
                else {
                    if (ret[v] == ret[nv]) t = false;
                }
            }       
        }
        // cout << i << " " << t << " " << ans << endl;
        if (t) {
            ll cnt = 0, tmp = mp.size();
            v.emplace_back(UF.root(i),tmp);
            for(auto it = mp.begin(); it != mp.end(); ++it) {
                cnt += vec[it->first].size();
            }
            cnt/=2;
            ll tmp3 = mp2.size();
            ans += (tmp3*(tmp-tmp3)) - cnt;
            // cout << tmp3 << endl;
        }
        if (!t) {
            cout << 0 << endl;
            return 0;
        }
    }
    // rep(i,0,col.size()) cout << col[i] << " ";
    // cout << endl;
    // cout << ans << endl;
    ll tmp2 = 0;
    rep(i,0,v.size()) {
        // cout << v[i].first << " " << v[i].second << " ..." << endl;
        tmp2 += (N-v[i].second) * v[i].second;
    }
    cout << ans + (tmp2/2) << endl;

    return 0;
}    