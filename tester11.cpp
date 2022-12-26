// @SyNtAx_error_1
 
/* #region  templates */
// clang-format off
#include<bits/stdc++.h>
//#include<atcoder/all>
#define rep(i,n) REP(i,0,n)
#define REP(i,a,b) for(ll i=a; i<ll(b);i++)
#define REPD(i,a,b) for(ll i=ll(b)-1;i>=ll(a);i--)
#define ALL(x) x.begin(),x.end()
using namespace std;
//using namespace atcoder;
using ll=long long;
using pll=pair<ll,ll>;
using vll=vector<ll>;
using vpll=vector<pll>;
using Graph=vector<vll>;
template<typename T>using p_queue=priority_queue<T>;
template<typename T>using rp_queue=priority_queue<T,vector<T>,greater<T>>;
constexpr int INF32=2147483647;
constexpr ll INF64=9223372036854775807LL;
struct Init{Init(){ios::sync_with_stdio(0);std::cin.tie(0);cout<<fixed<<setprecision(15);}}init;
ll inline ceils(ll a,ll b){return (a+b-1)/b;}
void inline yes(bool end=1){cout<<"Yes"<<"\n";if(end)exit(0);}
void inline no(bool end=1){cout<<"No"<<"\n";exit(0);if(end)exit(0);}
void inline yesno(bool b,bool end=1){if(b)yes(end);else no(end);}
template<typename T>bool inline chmin(T &a,T b){return(a>b?a=b,1:0);}
template<typename T>bool inline chmax(T &a,T b){return(a<b?a=b,1:0);}
template<typename T>auto inline prt(T t,string end="\n"){cout<<t<<end;return [](auto t,string end="\n"){return prt(t,end);};}
template<typename T> void inline coutALL(T begin,T end){for(;begin!=end;){cout<<*begin<<(++begin==end?"\n":" ");}}
template<class T>void inline coutALL(T &t){coutALL(t.begin(),t.end());}
template<typename T>T inline powint(T x,T n){T ans=1;while(n>0){if(n&1)ans*=x;x*=x;n>>=1;}return ans;}
template<typename T>T inline gcd(T a,T b){if(a%b==0)return b;else return gcd(b,a%b);}
template<typename T>T inline lcm(T a,T b){return a/gcd(a,b)*b;}
template<typename T>T inline factorial(T t){if(t<=1)return T(1);return t*factorial(t-1);}
template<typename T>T inline nPr(T n,T r){T ans=1;for(T i=r-1;i>=0;i--)ans*=(n-i);return ans;}
template<typename T>T inline nCr(T n,T r){if(r>n/2)r=n-r;return nPr(n,r)/factorial(r);}
template<class T>ll inline siz(T &t){return ll(t.size());}
template<class T>bool inline exist(T &t){return !empty(t);}
// clang-format on
/* #endregion */
 
int main() {
  ll T;
  cin >> T;
  while (T--) {
    string strN;
    cin >> strN;
    set<ll> div;
    ll ans = -1;
    int sizN = siz(strN);
    for (ll i = 1; i * i <= sizN; i++) {  //約数列挙
      if (sizN % i == 0) {
        div.insert(i);
        div.insert(sizN / i);
      }
    }
    div.erase(sizN);
    for (const auto &d : div) {
      ll mx = stoll(strN.substr(0, d));
      for (ll i = 0; i < sizN; i += d) {
        if (stoll(strN.substr(i, d)) < mx) {
          mx--;
          break;
        }
      }
      if (mx == 0) continue;
      string as, b = to_string(mx);
      for (ll i = 0; i < sizN; i += d) as += b;
      chmax(ans, stoll(as));
    }
    string s = "";
    for (int i = 0; i < sizN - 1; i++) s += '9';
    chmax(ans, stoll(s));
    cout << ans << endl;
  }
}