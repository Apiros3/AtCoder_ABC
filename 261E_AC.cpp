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
ll INF32 = 1LL << 30;
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
template<class T>
string basechange_str(T basebef, T basenew, string S) {
    ull ret_num = 0, multiplier = 1; 
    if (S == "0") return "0"; 
    for (ll i=S.length()-1; i >= 0; i--, multiplier *= basebef) {
        if (S[i] <= '9') ret_num += (S[i]-'0')*multiplier; 
        else ret_num += (S[i]-'A'+10)*multiplier;
    } 
    string ret_string;
    for (; ret_num; ret_num /= basenew) {
        ll divnum = ret_num%basenew; 
        if (divnum < 10) ret_string.push_back((char)('0'+divnum)); 
        else ret_string.push_back((char)('A'+divnum-10));
    } 
    reverse(ret_string.begin(),ret_string.end()); 
    return ret_string;
}

struct UnionFind {vector<ll> par; UnionFind(ll N) : par(N) {rep(i,0,N) par[i]=i;}
    ll root(ll x) {if (par[x]==x) return x; return par[x] = root(par[x]);}
    void unite(ll x, ll y) {ll rx = root(x), ry = root(y); if (rx == ry) return; par[rx] = ry;}
    bool same(ll x, ll y) {ll rx = root(x), ry = root(y); return rx == ry;}};

struct BinomCoef {
    vector<ll> fct, iv, ivfct; ll md;
    BinomCoef(ll N, ll mod) : fct(N+1,1), iv(N+1,1), ivfct(N+1,1) {
        md = mod;rep(i,2,N+1) {fct[i] = fct[i-1] * i % mod; iv[i] = mod - iv[mod%i] * (mod/i)%mod; ivfct[i] = ivfct[i-1] * iv[i] % mod;}}
    ull nCr(ull N, ull R) {return fct[N] * (ivfct[R] * ivfct[N - R] % md) % md;}
    ull nPr(ull N, ull R) {return fct[N] * ivfct[R] % md;}};

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


    ll N, C; cin >> N >> C;
    vector<ll> T(N), A(N);
    rep(i,0,N) cin >> T[i] >> A[i];

    vector<pair<ll,ll>> vec(60,{0,1});
    rep(i,0,N) {
        ll strt = C;
        rep(j,0,60) {
            pair<ll,ll> S;
            bool pos = ((1ll << j) & A[i]);
            if (T[i] == 1) {
                S.first = vec[j].first & pos;
                S.second = vec[j].second & pos;
            }
            if (T[i] == 2) {
                S.first = vec[j].first | pos;
                S.second = vec[j].second | pos;
            }
            if (T[i] == 3) {
                S.first = vec[j].first ^ pos;
                S.second = vec[j].second ^ pos;
            }
            vec[j] = S;
        }
        C = 0;
        rep(j,0,60) {
            // cout << vec[j].first << " " << vec[j].second << ", ";
            // cout << strt << " ";
            if (strt & 1) C += vec[j].second * (1 << j);
            else C += vec[j].first * (1 << j);
            strt /= 2;
        }
        // cout << endl;
        cout << C << endl;

    }
 
    return 0;
}     
