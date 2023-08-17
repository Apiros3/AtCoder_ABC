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

    
    ll N; cin >> N;
    vector<ll> vec(N);
    rep(i,0,N) cin >> vec[i];

    rep(i,0,N-1) {
        if (vec[i] < vec[i+1]) {
            rep(j,vec[i],vec[i+1]) {
                cout << j << " ";
            }
        }
        else {
            rrep(j,vec[i],vec[i+1]+1) {
                cout << j << " ";
            }
        }
    }
    cout << vec[N-1];
    cout << endl;

    return 0;
}