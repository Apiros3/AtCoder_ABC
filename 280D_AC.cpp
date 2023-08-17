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

    ll K; cin >> K;
    map<ll,ll> mp;
    while(K > 1) {
        bool c = false;
        for(ll i = 2; i * i <= K; i++) {
            if (K%i == 0) {
                mp[i]++;
                K /= i;
                c = true;
                break;
            }
        }
        if (!c) {
            mp[K]++;
            break;
        }

    }

    ll mn = 0;
    ll tm = intpow(10,13,INF);
    for(auto it = mp.begin(); it != mp.end(); ++it) {
        ll f = it->first;
        ll ok = tm, ng = 0;
        while(ok-ng > 1LL) {
            ll md = (ok + ng)/2;
            ll tmp = 0;
            while(md) {
                tmp += md/f;
                md /= f;
            }
            if (tmp >= it->second) {
                ok = (ok+ng)/2;
            }
            else {
                ng = (ok+ng)/2;
            }
        }
        mn = max(mn, ok);
    }
    cout << mn << endl;


    return 0;
}