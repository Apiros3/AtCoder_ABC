#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ull = unsigned long long;
using ld = long double;

#define rep(i,start,end) for(ll i=start; i<end; i++)
#define rrep(i,start,end) for(ll i=start; i>=end; i--)

ll INF = 1LL << 60;
ld PI = 3.141592653589793;

struct Init {
    Init() {
        cout << setprecision(15);
    }
}init;

int main()
{
    ll mod = 1000000007;
    ll N, K; cin >> N >> K;

    ll ans = 0;
    rep(i,K,N+2) {
        ll topsum = i*N;
        ll botsum = i*(i-1);
        ans = (ans + topsum - botsum + 1)%mod;
    } 
    cout << ans << endl;


    return 0;
}