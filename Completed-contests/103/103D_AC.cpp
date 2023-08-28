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
vector<ld> X, Y;
ld dst(ll i, ll j) {
    ld ret = 0;
    ret += (X[i]-X[j]) * (X[i] - X[j]);
    ret += (Y[i]-Y[j]) * (Y[i] - Y[j]);

    return sqrt(ret);
} 


int main()
{

    ll N, M; cin >> N >> M;

    vector<pair<ll,ll>> vec;

    rep(i,0,M) {
        ll A, B; cin >> A >> B;
        vec.emplace_back(B,A);
    }
    sort(vec.begin(), vec.end());

    ll cnt = 0;
    ll cur = 0;
    rep(i,0,M) {
        ll A = vec[i].second, B = vec[i].first;

        if (cur <= A) {
            cnt++;
            cur = B;
        }
    }
    cout << cnt << endl;

    return 0;
}
