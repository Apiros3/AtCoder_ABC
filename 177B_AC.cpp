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

    string S, T; cin >> S >> T;
    ll mn = INF;

    rep(i,0,S.size() - T.size() + 1) {
        ll tmn = 0;
        rep(j,0,T.size()) {
            if (S[i+j] != T[j]) tmn++;
        }
        mn = min(mn, tmn);
    }
    cout << mn << endl;


    return 0;
}