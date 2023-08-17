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
    
    ll H, W, M; cin >> H >> W >> M;

    map<ll,ll> mpx, mpy;
    map<pair<ll,ll>,ll> mp;
    rep(i,0,M) {
        ll h, w; cin >> h >> w;
        mpx[h]++;
        mpy[w]++;
        mp[{h,w}]=1;
    }
    ll tmx = 0;
    for(auto m : mpx) 
        tmx = max(tmx, m.second);
    vector<ll> vx;
    for(auto m : mpx) 
        if (m.second == tmx) vx.push_back(m.first);

    ll tmy = 0;
    for(auto m : mpy) 
        tmy = max(tmy, m.second);
    vector<ll> vy;
    for(auto m : mpy) 
        if (m.second == tmy) vy.push_back(m.first);

    rep(i,0,vx.size()) {
        rep(j,0,vy.size()) {
            if (mp.count({vx[i],vy[j]}) == 0) {
                cout << tmx + tmy << endl;
                return 0;
            }
        }
    }
    cout << tmx+tmy-1 << endl;


    return 0;
}
