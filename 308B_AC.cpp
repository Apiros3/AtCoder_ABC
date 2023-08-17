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

    
    ll N, M; cin >> N >> M;

    vector<string> vec(N), tmp(M);
    ll other;
    map<string,ll> mp;

    rep(i,0,N) {
        cin >> vec[i];
    }
    rep(i,0,M) {
        cin >> tmp[i];
    }
    cin >> other;
    rep(i,0,M) {
        ll t; cin >> t;
        mp[tmp[i]] = t;
    }

    ll sum = 0;
    rep(i,0,N) {
        sum += mp[vec[i]];
        if (mp[vec[i]] == 0) sum += other;
    }

    cout << sum << endl;


    return 0;
}