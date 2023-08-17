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


int main()
{

    ll N; cin >> N;
    vector<ll> vec(N);
    rep(i,0,N) cin >> vec[i];

    ll mn = INF;
    rep(k,0,2) {
        ll sum = 0, cnt = 0, pos = k;
        rep(i,0,N) {
            sum += vec[i];
            if (pos) {
                if (sum <= 0) {
                    cnt += 1-sum;
                    sum = 1;
                }
            }
            else {
                if (sum >= 0) {
                    cnt += 1+sum;
                    sum = -1;
                }
            }
            pos = 1 - pos;
        }
        mn = min(mn, cnt);
    }
    cout << mn << endl;

    return 0;
}
