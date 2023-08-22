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

vector<ll> A;

int main()
{

    ll H, W, K; cin >> H >> W >> K;
    ll mod = 1000000007LL;
    vector<ll> cur(W,0);
    cur[0] = 1;
    vector<ll> fib(9,1);
    fib[1] = 1;
    fib[2] = 2;
    rep(i,3,fib.size()) fib[i] = fib[i-1] + fib[i-2];

    rep(i,0,H) {
        vector<ll> vec(W,0);
        rep(i,0,W) {
            if (i-1 >= 0) {
                vec[i] += (fib[i-1]*fib[W-1-i]*cur[i-1])%mod;
            }
            if (i+1 < W) {
                vec[i] += (fib[i]*fib[W-i-2]*cur[i+1])%mod;
            }
            vec[i] += (fib[i]*fib[W-i-1]*cur[i])%mod;
        }
        rep(i,0,W) cur[i] = vec[i]%mod;
    }
    cout << cur[K-1] << endl;
    return 0;
}
