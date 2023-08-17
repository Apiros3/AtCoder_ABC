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

    string S[8];
    rep(i,0,8) cin >> S[i];

    rep(i,0,8) { 
        rep(j,0,8) {
            if (S[i][j] == '*') {
                cout << (char)('a'+j) << 8-i << endl; 


            }
        }
    }

    return 0;
}