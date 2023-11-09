#include <bits/stdc++.h>

#pragma GCC target ("avx2")
#pragma GCC optimization ("O3")
#pragma GCC optimization ("unroll-loops")

// #APIROS3 TEMPLATE FROM HERE
// PART 1: OVERLOADS / MINT

template<typename T, typename W>
std::pair<T,W>& operator +=(std::pair<T,W> &lhs, const std::pair<T,W> &rhs) {
    lhs.first += rhs.first;
    lhs.second += rhs.second;
}
template<typename T, typename W>
std::pair<T,W> operator +(std::pair<T,W> lhs, const std::pair<T,W> &rhs) {
    return lhs += rhs;
}
template<typename T, typename W>
std::pair<T,W>& operator -=(std::pair<T,W> &lhs, const std::pair<T,W> &rhs) {
    lhs.first -= rhs.first;
    lhs.second -= rhs.second;
}
template<typename T, typename W>
std::pair<T,W> operator -(std::pair<T,W> lhs, const std::pair<T,W> &rhs) {
    return lhs -= rhs;
}
template<typename T, typename W>
std::pair<T,W>& operator *=(std::pair<T,W> &lhs, const std::pair<T,W> &rhs) {
    lhs.first *= rhs.first;
    lhs.second *= rhs.second;
}
template<typename T, typename W>
std::pair<T,W> operator *(std::pair<T,W> lhs, const std::pair<T,W> &rhs) {
    return lhs *= rhs;
}
template<typename T, typename W>
std::pair<T,W>& operator /=(std::pair<T,W> &lhs, const std::pair<T,W> &rhs) {
    lhs.first /= rhs.first;
    lhs.second /= rhs.second;
}
template<typename T, typename W>
std::pair<T,W> operator /(std::pair<T,W> lhs, const std::pair<T,W> &rhs) {
    return lhs /= rhs;
}

template<typename T>
std::vector<T>& operator +=(std::vector<T> &lhs, const std::vector<T> &rhs) {
    if (lhs.size() != rhs.size()) {
        throw std::length_error("vectors must be same size to add");
    }
    for(int i = 0; i < lhs.size(); ++i) {
        lhs[i] += rhs[i];
    }
    return lhs;
}
template<typename T>
std::vector<T> operator +(std::vector<T> lhs, const std::vector<T> &rhs) {
    return lhs += rhs;
}
template<typename T>
std::vector<T>& operator -=(std::vector<T> &lhs, const std::vector<T> &rhs) {
    if (lhs.size() != rhs.size()) {
        throw std::length_error("vectors must be same size to subtract");
    }
    for(int i = 0; i < lhs.size(); ++i) {
        lhs[i] -= rhs[i];
    }
    return lhs;
}
template<typename T>
std::vector<T> operator -(std::vector<T> lhs, const std::vector<T> &rhs) {
    return lhs -= rhs;
}
template<typename T>
std::vector<T>& operator *=(std::vector<T> &lhs, const std::vector<T> &rhs) {
    if (lhs.size() != rhs.size()) {
        throw std::length_error("vectors must be same size to multiply");
    }
    for(int i = 0; i < lhs.size(); ++i) {
        lhs[i] *= rhs[i];
    }
    return lhs;
}
template<typename T>
std::vector<T> operator *(std::vector<T> lhs, const std::vector<T> &rhs) {
    return lhs *= rhs;
}
template<typename T>
std::vector<T>& operator /=(std::vector<T> &lhs, const std::vector<T> &rhs) {
    if (lhs.size() != rhs.size()) {
        throw std::length_error("vectors must be same size to divide");
    }
    for(int i = 0; i < lhs.size(); ++i) {
        lhs[i] /= rhs[i];
    }
    return lhs;
}
template<typename T>
std::vector<T> operator /(std::vector<T> lhs, const std::vector<T> &rhs) {
    return lhs /= rhs;
}

template<typename T>
std::vector<T>& operator +=(std::vector<T> &lhs, const T& rhs) {
    for(int i = 0; i < lhs.size(); ++i) {
        lhs[i] += rhs;
    }
    return lhs;
}
template<typename T>
std::vector<T> operator +(std::vector<T> lhs, const T& rhs) {
    return lhs += rhs;
}
template<typename T>
std::vector<T>& operator -=(std::vector<T> &lhs, const T& rhs) {
    for(int i = 0; i < lhs.size(); ++i) {
        lhs[i] -= rhs;
    }
    return lhs;
}
template<typename T>
std::vector<T> operator -(std::vector<T> lhs, const T& rhs) {
    return lhs -= rhs;
}
template<typename T>
std::vector<T>& operator *=(std::vector<T> &lhs, const T& rhs) {
    for(int i = 0; i < lhs.size(); ++i) {
        lhs[i] *= rhs;
    }
    return lhs;
}
template<typename T>
std::vector<T> operator *(std::vector<T> lhs, const T& rhs) {
    return lhs *= rhs;
}
template<typename T>
std::vector<T>& operator /=(std::vector<T> &lhs, const T& rhs) {
    for(int i = 0; i < lhs.size(); ++i) {
        lhs[i] /= rhs;
    }
    return lhs;
}
template<typename T>
std::vector<T> operator /(std::vector<T> lhs, const T& rhs) {
    return lhs /= rhs;
}
template<typename T>
std::vector<T>& operator %=(std::vector<T> &lhs, const T& rhs) {
    for(int i = 0; i < lhs.size(); ++i) {
        lhs[i] %= rhs;
    }
    return lhs;
}
template<typename T>
std::vector<T> operator %(std::vector<T> lhs, const T& rhs) {
    return lhs %= rhs;
}

long long mintmod = 998244353;
class mint {
private:
    long long x;
    long long modmul(long long a, long long b, long long M) {
        long long ret = a * b - M * (unsigned long long)(1.L / M * a * b);
        return ret + M * (ret < 0) - M * (ret >= (long long)M);
    }
    long long modpow_s(long long btmn, long long topn, long long modn) {
        long long ret_num = 1;
        btmn%=modn;
        for(; topn; topn/=2, btmn=modmul(btmn,btmn,modn))
            if (topn & 1ll) ret_num=modmul(ret_num,btmn,modn);
        return ret_num%modn;
    } 
public:
    mint(long long x = 0) : x((x%mintmod + mintmod)%mintmod) {}
    mint operator-() const {
        return mint(-x);
    }
    mint& operator+=(const mint& a) {
        if ((x += a.x) >= mintmod) x -= mintmod;
        return *this;
    }
    mint& operator-=(const mint& a) {
        if ((x += mintmod - a.x) >= mintmod) x -= mintmod;
        return *this;
    }
    mint& operator*=(const mint& a) {
        x = modmul(x, a.x, mintmod);
        return *this;
    }
    mint operator+(const mint& a) const {
        mint res(*this);
        return res += a;
    }
    mint operator-(const mint& a) const {
        mint res(*this);
        return res -= a;
    }
    mint operator*(const mint& a) const {
        mint res(*this);
        return res *= a;
    }
    template<typename T>
    mint pow(T t) const {
        if (!t) return 1;
        mint a = pow(t >> 1);
        a *= a;
        if (t & 1) a *= *this;
        return a;
    }
    mint inv() const {
        return pow(mintmod-2);
    }
    mint& operator/=(const mint& a) {
        return (*this) *= a.inv();
    }
    mint operator/(const mint& a) const {
        mint res(*this);
        return res/=a;
    }

    mint operator==(const mint& a) {
        return (*this).x == a.x;
    }
    template <typename T>
    mint operator==(const T &a) {
        return (*this).x == a;
    }

    friend std::ostream& operator<<(std::ostream& os, const mint& m) {
        os << m.x;
        return os;
    }
};


class bigint {
private:
    //from smaller digits
    std::vector<long long> x;
    bool positive = true;
    long long mod = 1000000000;
    void reformat() {
        while(x.back() == 0) x.pop_back();
    }
    void add(const bigint& a) {
        long long forward = 0;
        x.resize(std::max(x.size(),a.x.size())+1,0); 
        for(int i = 0; i < a.x.size(); i++) {
            x[i] += a.x[i] + forward;
            forward = x[i] / mod;
            x[i] %= mod;
        }
        long long cur = a.x.size();
        while(forward) {
            x[cur] += forward;
            forward = x[cur] / mod;
            x[cur] %= mod;
        }
        reformat();
    }
    void subtract(const bigint& a) {
        long long forward = 0;
        x.resize(std::max(x.size(),a.x.size())+1,0); 
        for(int i = 0; i < a.x.size(); i++) {
            x[i] -= a.x[i];
        }
        for(int i = 0; i < x.size()-1; i++) {
            x[i] += forward;
            if (x[i] < 0) {
                x[i+1]--;
                x[i] += mod;
            }
            forward = x[i] / mod;
            x[i] %= mod;
        }
        x.back() += forward;
        if (x.back() == -1) {
            x.back() = 0;
            positive = !positive;
            for(int i = 0; i < x.size()-1; i++) {
                if (i == 0) {
                    x[i] = mod - x[i];
                }
                else {
                    x[i] = mod - x[i] - 1;
                }
            }
        }
        reformat();
    }
public:
    bigint(std::string num = "0") {
        if (num[0] == '-') {
            positive = false;
        }
        for(int i = num.size()-9; i > -9; i-=9) {
            std::string str = "";
            for(int j = 0; j < 9; j++) {
                if (i+j < 0 || num[i+j] == '-') continue;
                str += num[i+j];
            }
            if (str == "") continue;
            x.push_back(stoll(str));
        }
    }
    bigint operator-() const {
        bigint res(*this);
        res.positive = !res.positive;
        return res;
    }
    
    bigint& operator+=(const bigint& a) {
        if((positive && a.positive) || (!positive && !a.positive)) {
            add(a);
        }
        else {
            subtract(a);
        }
        return *this;
    }
    bigint& operator-=(const bigint& a) {
        if ((positive && a.positive) || (!positive && !a.positive)) {
            subtract(a);
        }
        else {
            add(a);
        }
        return *this;
    }
    bigint operator+(const bigint& a) const {
        bigint res(*this);
        return res += a;
    }
    bigint operator-(const bigint& a) const {
        bigint res(*this);
        return res -= a;
    }


    // mint& operator*=(const mint& a) {
    //     x = modmul(x, a.x, mintmod);
    //     return *this;
    // }
    // mint operator*(const mint& a) const {
    //     mint res(*this);
    //     return res *= a;
    // }
    // template<typename T>
    // mint pow(T t) const {
    //     if (!t) return 1;
    //     mint a = pow(t >> 1);
    //     a *= a;
    //     if (t & 1) a *= *this;
    //     return a;
    // }
    // mint inv() const {
    //     return pow(mintmod-2);
    // }
    // mint& operator/=(const mint& a) {
    //     return (*this) *= a.inv();
    // }
    // mint operator/(const mint& a) const {
    //     mint res(*this);
    //     return res/=a;
    // }

    // mint operator==(const mint& a) {
    //     return (*this).x == a.x;
    // }
    // template <typename T>
    // mint operator==(const T &a) {
    //     return (*this).x == a;
    // }


    friend std::ostream& operator<<(std::ostream& os, const bigint& num) {
        if (num.x.empty()) {
            os << 0;
            return os;
        }
        size_t n = 9;
        if (!num.positive) {
            os << "-";
        }
        for(auto it = num.x.rbegin(); it != num.x.rend(); it++) {
            if (it == num.x.rbegin()) {
                os << (*it);
            }
            else {
                os << std::string(n - std::min(n,   std::to_string(*it).size()), '0') << (*it);
            }
        }
        return os;
    }
};

class frac {
private:
    long long num, den;
    long double check;
    long double eps = 1e-8;

    long long gcd(long long L, long long R) {
        if (R == 0) return L; 
        return gcd(R, L%R);
    }
    long long lcm(long long L, long long R) {
        return L/gcd(R, L)*R;
    }
public:
    frac(long long top = 0, long long bot = 1) : num(top), den(bot) {
        assert(bot > 0);
        check = (long double)top/den;
    }
    frac operator-() const {
        return frac(-num,den);
    }
    frac& operator+=(const frac &a) {
        long long newden = lcm(den, a.den);
        num = newden/den * num + newden/a.den * a.num;
        den = newden;
        check += a.check;
        return *this;
    }


//     mint& operator-=(const mint& a) {
//         if ((x += mintmod - a.x) >= mintmod) x -= mintmod;
//         return *this;
//     }
//     mint& operator*=(const mint& a) {
//         x = modmul(x, a.x, mintmod);
//         return *this;
//     }
//     mint operator+(const mint& a) const {
//         mint res(*this);
//         return res += a;
//     }
//     mint operator-(const mint& a) const {
//         mint res(*this);
//         return res -= a;
//     }
//     mint operator*(const mint& a) const {
//         mint res(*this);
//         return res *= a;
//     }
//     template<typename T>
//     mint pow(T t) const {
//         if (!t) return 1;
//         mint a = pow(t >> 1);
//         a *= a;
//         if (t & 1) a *= *this;
//         return a;
//     }
//     mint inv() const {
//         return pow(mintmod-2);
//     }
//     mint& operator/=(const mint& a) {
//         return (*this) *= a.inv();
//     }
//     mint operator/(const mint& a) const {
//         mint res(*this);
//         return res/=a;
//     }

//     mint operator==(const mint& a) {
//         return (*this).x == a.x;
//     }
//     template <typename T>
//     mint operator==(const T &a) {
//         return (*this).x == a;
//     }

//     friend std::ostream& operator<<(std::ostream& os, const mint& m) {
//         os << m.x;
//         return os;
//     }
};


// PART 2: FOR DEBUGGING

void debug(int &G) {
    std::cout << G << " ";
}
void debug(long &G) {
    std::cout << G << " ";
}
void debug(long long &G) {
    std::cout << G << " ";
}
void debug(const long long int &G) {
    std::cout << G << " ";
}
void debug(float &G) {
    std::cout << G << " ";
}
void debug(double &G) {
    std::cout << G << " ";
}
void debug(long double &G) {
    std::cout << G << " ";
}
void debug(std::string &G) {
    std::cout << G << " ";
}
template <typename T, typename W>
void debug(std::pair<T,W> &u) {
    debug(u.first);
    std::cout << ",";
    debug(u.second);
    std::cout << " ";
}
template <typename T>
void debug(std::vector<T> &G) {
    for (auto &u : G) debug(u);
    std::cout << std::endl;
}  
template <typename T>
void debug_ne(std::vector<T> &G) {
    for (auto &u : G) debug(u);
}  
template <typename T>
void debug_e(std::vector<T> &G) {
    for (auto &u : G) {
        debug(u);
        std::cout << std::endl;
    }
}  
template <typename T, typename W>
void debug(std::map<std::vector<T>, std::vector<W>> &mp) {
    for(auto &u : mp) {
        debug_ne(u.first);
        std::cout << ": ";
        debug(u.second);
    }
}
template <typename T, typename W>
void debug(std::map<T, std::vector<W>> &mp) {
    for(auto &u : mp) {
        debug(u.first);
        std::cout << ": ";
        debug(u.second);
    }
}
template <typename T, typename W>
void debug(std::map<std::vector<T>, W> &mp) {
    for(auto &u : mp) {
        debug_e(u.first);
        std::cout << ": ";
        debug(u.second);
        std::cout << std::endl;
    }
}
template <typename T, typename U>
void debug(std::map<T,U> &mp) {
    for(auto u : mp) std::cout << u.first << "," << u.second << "  ";
    std::cout << std::endl;
}
template <typename T>
void debug_s(std::vector<std::vector<T>> &G) {
    std::cout << G.size() << std::endl;
    for(auto u : G) {
        std::cout << u.size() << " ";
        debug(u);
    }
}
template <typename T>
void debug_s(std::vector<T> &G) {
    std::cout << G.size() << std::endl;
    debug(G);
}


// PART 3: NEW FUNCTIONS
using namespace std;
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
using vs = vector<string>;

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
void append(vector<T> &A, vector<T> B) {
    A.insert(A.end(),all(B));
}

ll popcount(ll X) {
    return __builtin_popcount(X);
}



//stores X,Y s.t. AX + BY = gcd(A,B) and returns gcd(A,B)
ll extGCD(ll A, ll B, ll &X, ll&Y) {
    if (B==0) {
        X = 1; Y = 0; 
        return A;
    } 
    ll D = extGCD(B, A%B, Y, X); 
    Y -= A/B*X; 
    return D;
}
ll invmod(ll inv, ll mod) {
    ll X, Y;
    assert(extGCD(inv,mod,X,Y) == 1);
    return X;
}

void yesno(bool check) {
    if (check) cout << "Yes" << endl;
    else cout << "No" << endl;
}

ll infq(ll query) {
    if (query == INF) return -1;
    return query;
}

ull modpow(ull btmn, ull topn, ull mod) {
    ll ret = 1%mod;
    btmn%=mod;
    for(; topn; topn /= 2, btmn = (btmn*btmn)%mod) 
        if (topn & 1) ret = (ret*btmn)%mod; 
    return ret;
}
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
ll intpow(ll btmn, ll topn) {
    return modpow_s(btmn, topn, INF);
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
    private:
    vector<ll> par; 
    public:
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

// struct Modulo_s {



// }

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

struct LCA {
    public:
    LCA (vvll adj, ll root = 0) {
        init(adj, root);
    }
    ll lca_query(ll u, ll v) {
        if (dist[u] < dist[v]) swap(u, v);  //set s.t. u is deeper
        ll K = parent.size();
        //set distance to the same as the LCA
        rep(k,0,K) {
            if (((dist[u] - dist[v]) >> k) & 1) {
                u = parent[k][u];
            }
        }
        //find lca via binary search
        if (u == v) return u;
        rrep(k,K-1,0) {
            if (parent[k][u] != parent[k][v]) {
                u = parent[k][u];
                v = parent[k][v];
            }
        }
        return parent[0][u];
    }
    ll dist_query(ll u, ll v) {
        ll lca = lca_query(u,v);
        return dist[u] + dist[v] - 2*dist[lca];
    }

    private:    
    vvll parent;
    vll dist;

    void init(vvll &G, ll root = 0)  {
        ll V = G.size();
        ll K = 1;
        while ((1 << K) < V) K++;
        parent.assign(K, vll(V, -1));
        dist.assign(V, -1);
        dfs(G, root, -1, 0);
        // debug(dist);
        rep(k,0,K-1) {
            rep(v,0,V) {
                if (parent[k][v] < 0) {
                    parent[k + 1][v] = -1;
                } else {
                    parent[k + 1][v] = parent[k][parent[k][v]];
                }
            }
        }
    }
    void dfs(vvll &G, ll v, ll p, ll d) {
        parent[0][v] = p;
        dist[v] = d;
        for (auto e : G[v]) {
            if (e != p) dfs(G, e, v, d + 1);
        }
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
    for(ll i = mn; i*i <= N; ++i) {
        ll cnt = 0, tmp = N;
        while (tmp%i == 0) {
            cnt++; tmp /= i;
            auto tmvec = factorization(tmp,i+1);
            for(auto &u : tmvec) u.push_back({i,cnt});
            if (tmp == 1) tmvec.push_back(vpll{{i,cnt}});
            append(vec,tmvec);
        }
    }
    vec.push_back(vpll{{N,1}});
    return vec;

}


// bool tbfs(vector<map<ll,ll>> &adj, ll s, ll t, vll &par) {
//     ll N = adj.size();
//     vll visited(N,0);
//     queue<ll> que;
//     que.push(s);
//     visited[s] = 1;
//     par[s] = -1;
//     while(!que.empty()) {
//         ll u = que.front();
//         que.pop();
//         for(auto v : adj[u]) {
//             if (!visited[v.first]) {
//                 if (v.first == t) {
//                     par[v.first] = u;
//                     return true; 
//                 }
//                 que.push(v.first);
//                 par[v.first] = u;
//                 visited[v.first] = true;
//             }
//         }
//     }
//     return false;
// }


// ll FF(vector<map<ll,ll>> &adj, ll source, ll target) {
//     ll N = adj.size();
//     vll parent(N);
//     ll mx = 0;
//     while(tbfs(adj,source,target,parent)) {
//         for(ll v = target; v != source; v = parent[v]) {
//             ll u = parent[v];
//             adj[u][v]--;
//             adj[v][u]++;
//             if (adj[u][v] == 0) {
//                 adj[u].erase(v);
//             }
//         }

//         mx++;
//     }
//     return mx;
// }

ll modrecip(ll recip, ll mod) {
    return modpow(recip,mod-2,mod);
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

ll stoll(char X) {
    string str = "";
    str += X;
    return stoll(str);
}

template <typename T, typename W>
ld log(T A,W B) {
    return log2(A)/logw(B);
}

ll bigncr(ll N, ll K) {
    ll ret = 1;
    rep(i,1,K+1) {
        ret = (ret * (N+1-i))%MOD10;
        // cout << ret << endl;

        ret = (ret * modpow(i,MOD10-2,MOD10))%MOD10;
        // cout << ret << endl;
    }
    
    return ret;
    
}

//checks for if the value is between [min, max)
template <typename T, typename U, typename V>
bool inrange(T value, U mn, V mx) {
    return (mn <= value && value < mx);
}


int main()
{ 

    ll D, G; cin >> D >> G;
    G /= 100;
    vll P(D), C(D);
    input(P,C);
    for(auto &u : C) u /= 100;
    
    ll mn = INF;
    rep(i,0,1<<D) {
        ll cur = 0, tmn = 0;
        rep(j,0,D) if ((1<<j)&i) {
            cur += P[j]*(j+1);
            cur += C[j];
            tmn += P[j];
        }
        // cout << cur << " " << tmn << endl;
        bool add = 1;
        if (cur < G) {
            rrep(j,D-1,0) if (!((1<<j)&i)) {
                ll req = (G-cur)/(j+1) + ((G-cur)%(j+1) != 0);
                if (req >= P[j]) add = 0;
                else tmn += req;
                break;
            }
        }
        // cout << cur << " " << tmn << endl;
        if (add)
            chmin(mn,tmn);
    }
    cout << mn << endl;


    return 0;
}     
