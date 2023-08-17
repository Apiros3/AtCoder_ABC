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

 
    ll N, S; cin >> N >> S;

    vector<ll> A(N), B(N);
    rep(i,0,N) cin >> A[i] >> B[i];


    vector<vector<ll>> dp(N, vector<ll>(10001,0));

    dp[0][A[0]] = 1;
    dp[0][B[0]] = 1;

    rep(i,1,N) {
        rep(j,0,10001) {
            if (dp[i-1][j]) {
                if (j+A[i] <= 10000) {
                    dp[i][j+A[i]] = 1; 
                }
                if (j+B[i] <= 10000) {
                    dp[i][j+B[i]] = 1;
                }
            }
        }
    }

    if (dp[N-1][S]) {
        cout << "Yes" << endl;
        string ret;
        rrep(i,N-1,1) {
            if (S-A[i] >= 0 && dp[i-1][S-A[i]]) {
                ret += "H";
                S -= A[i];
            }
            else {
                ret += "T";
                S -= B[i];
            }
        }
        if (A[0] == S) {
            ret += "H";
        }
        else {
            ret += "T";
        }
        reverse(ret.begin(), ret.end());
        cout << ret << endl;
    }
    else {
        cout << "No" << endl;
    }

    return 0;
}