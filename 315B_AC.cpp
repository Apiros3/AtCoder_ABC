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

    ll M; cin >> M;
    vector<ll> D(M);
    rep(i,0,M) {
        cin >> D[i];
    }
    ll sum = 0;
    rep(i,0,M) sum += D[i];

    sum = sum/2 + 1;

    ll cnt = 0;
    rep(i,0,M) {
        cnt += D[i];
        if (cnt >= sum) {
            cout << i+1 << " ";
            cout << sum-(cnt-D[i]) << endl;
            return 0;
        }
    }


    return 0;
}
