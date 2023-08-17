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
    vector<pair<ll,ll>> vec(N);
    rep(i,0,N) {
        ll tmp; cin >> tmp;
        vec[i] = {tmp, i+1};
    }    
    sort(vec.begin(), vec.end(), greater<pair<ll,ll>>());

    rep(i,0,N) cout << vec[i].second << endl;

    return 0;
}