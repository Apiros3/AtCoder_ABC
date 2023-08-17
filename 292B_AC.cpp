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

    map<ll,ll> mp;

    ll N, Q; cin >> N >> Q;
    while(Q--) {
        ll I, X; cin >> I >> X;

        if (I == 1) {
            mp[X]++;
        }
        else if (I == 2) {
            mp[X]+=2;
        }
        else {
            if (mp[X] >= 2) cout << "Yes" << endl;
            else cout << "No" << endl;
        }

    }

    return 0;
}