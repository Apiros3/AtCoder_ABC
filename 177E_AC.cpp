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


struct factsearch {
    vector<ll> flags, ret;
    vector<pair<ll,ll>> v;
    factsearch(uint64_t N) {
        if (N < 2) return;
        N++;
        flags.resize(N / 2, 0);
        flags[0] = 1;
        const uint64_t sqrt_x = ceil(sqrt(N) + 0.1) / 2;
        for (uint64_t i = 1; i < sqrt_x; ++i) {
            if (flags[i]) continue;
            const uint64_t p = 2*i + 1;
            flags[i] = p;
            for (uint64_t mult = 2*i*(i+1); mult < N/2; mult += p)
            flags[mult] = p;
        }
        for(uint64_t p = sqrt_x; p < N/2; ++p) {
            if (!flags[p]) flags[p] = 2*p+1;
        }
    }
    vector<ll> retvec() {return flags;}
    uint64_t primQ(uint64_t X) {return flags[X];}
    void flag(ll X) {
        if (X == 1) return;
        if (!(X&1)) {
            ret.push_back(2);
            flag(X/2);
        }
        else {
            ll T = flags[(X-1)/2];
            ret.push_back(T);
            flag(X/T);
        }
        return;
    }
    vector<ll> primfactor(ll x) {
        if (x == 1) {
            ret.resize(1,1);
            return ret;
        }
        ret.resize(0);
        flag(x);
        return ret;
    }    
};

int main()
{
   
    ll N; cin >> N;
    ll A[1000009];
    rep(i,0,N) cin >> A[i];

    factsearch FT(1000009);
    vector<ll> vp(1000009,0), t = FT.retvec();

    rep(i,0,N) {
        ll T = A[i];
        while(T != 1) {
            if (T%2 == 0) { 
                vp[2]++;
                while (T%2 == 0) 
                    T/=2;
            }
            else {
                ll tm = FT.primQ((T-1)/2);
                vp[tm]++;
                while (T%tm == 0) 
                    T/=tm;
            }
        }
    }
    ll tmp = A[0];
    rep(i,1,N) {
        tmp = gcd(tmp,A[i]);
    }
    if (tmp != 1) {
        cout << "not coprime" << endl;
        return 0;
    } 
    rep(i,0,1000009) {
        if (vp[i] > 1) {
            cout << "setwise coprime" << endl;
            return 0;
        }
    }
    cout << "pairwise coprime" << endl;

    return 0;
}    