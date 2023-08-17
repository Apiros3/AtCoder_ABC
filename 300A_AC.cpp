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

    
    ll N, A, B; cin >> N >> A >> B;

    vector<ll> C(N);
    rep(i,0,N) cin >> C[i];

    rep(i,0,N) {
        if (A+B == C[i]) {
            cout << i+1 << endl;
            return 0;
        }
    }

    return 0;
}