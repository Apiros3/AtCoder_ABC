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
    ll N, K; cin >> N >> K;
    rep(i,0,N) {
        ll T; cin >> T;
        A.push_back(T);
    }
    vector<vector<ll>> vec(60,vector<ll>(2,0));
    rep(i,0,60) {
        rep(j,0,N) {
            vec[i][1] += ((A[j] & (1ll << i)) ^ (1ll << i));
            vec[i][0] += ((A[j] & (1ll << i)));
        }
    }
    ll mx = 0;
    rrep(i,59,0) {
        if (K < (1ll << i)) {
            mx += vec[i][0];
        }
        else {
            if (vec[i][0] >= vec[i][1]) {
                mx += vec[i][0];
                i--;
                while(i >= 0) {
                    mx += max(vec[i][0],vec[i][1]);
                    i--;
                }
                break;
            }
            else {
                mx += vec[i][1];
                K -= (1ll << i);
            }
        }
    }
    cout << mx << endl;

    return 0;
}
