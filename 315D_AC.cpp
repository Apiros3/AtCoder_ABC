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

    ll H, W; cin >> H >> W;
    vector<string> S(H);
    rep(i,0,H) cin >> S[i];

    vector<vector<ll>> rows(H,vector<ll>(26,0)), cols(W,vector<ll>(26,0));
    vector<bool> usedcol(W,0), usedrow(H,0); 

    rep(i,0,H) {
        rep(j,0,W) {
            rows[i][S[i][j]-'a']++;
        }
    }    
    rep(i,0,W) {
        rep(j,0,H) {
            cols[i][S[j][i]-'a']++;
        }
    }

    
    while(1) {
        // for(auto i : rows) {
        //     for (auto j : i) cout << j << " ";
        //     cout << endl;
        // }
        vector<ll> UR(H, -1), UC(W, -1);
        ll numch = 0;
        rep(i,0,H) {
            if (usedrow[i]) continue;
            ll types = 0 , lst = 0, ttsum = 0;
            rep(j,0,rows[i].size()) {
                if (rows[i][j]) {
                    types++;
                    lst = j;
                }
                ttsum += rows[i][j];
            }
            if (types == 1 && ttsum != 1) {
                UR[i] = lst;
            }
            
        }
        // for(auto i : cols) {
        //     for (auto j : i) cout << j << " ";
        //     cout << endl;
        // }
        // for(auto i : usedrow) cout << i << " ";
        // cout << endl;
        rep(i,0,W) {
            if (usedcol[i]) continue;
            ll types = 0, lst = 0, ttsum = 0;
            rep(j,0,cols[i].size()) {
                if (cols[i][j]) {
                    types++;
                    lst = j;
                }
                ttsum += cols[i][j];
            }
            if (types == 1 && ttsum != 1) {
                UC[i] = lst;
            }
            // if (types == 1 && ttsum != 1) {
            //     rep(j,0,rows.size()) {
            //         if (!usedrow[i]) {
            //             rows[j][lst]--;
            //         }
            //     }
            //     usedcol[i] = true;
            //     numch++;
            // }
        }
        // for(auto i : usedcol) cout << i << " ";
        // cout << endl;

        rep(i,0,H) {
            ll lst = UR[i];
            if (lst == -1) continue;
            rep(j,0,cols.size()) {
                if (!usedcol[j]) {
                    cols[j][lst]--;
                }
            }
            usedrow[i] = true;
            numch++;
        }
        rep(i,0,W) {
            ll lst = UC[i];
            if (lst == -1) continue;
            rep(j,0,rows.size()) {
                if (!usedrow[j]) {
                    rows[j][lst]--;
                }
            }
            usedcol[i] = true;
            numch++;
        }
                


        if (numch == 0) break;
    }

    ll c = 0, r = 0;
    for(auto i : usedrow) r += i;
    for(auto i : usedcol) c += i;

    ll sum = H*W - r*W - c*H + r*c;
    cout << sum << endl;

    return 0;
}
