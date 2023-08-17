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

ll strsum(vector<string> s) {
    ll sum = 0;
    for(auto m : s) {
        sum += stoll(m);
    }   
    return sum;
}

int main()
{
    

    ll N, M, X, Y; cin >> N >> M >> X >> Y;

    vector<vector<pair<ll,pair<ll,ll>>>> vec(N+1);
    rep(i,0,M) {
        ll A, B, T, K; cin >> A >> B >> T >> K;
        vec[A].push_back({B, {T, K}});
        vec[B].push_back({A, {T, K}});
    }

    vector<ll> dist(N+1,INF);
    priority_queue<pair<ll,ll>, vector<pair<ll,ll>>, greater<pair<ll,ll>>> que;

    dist[X] = 0;
    que.push({0,X});
    while(!que.empty()) {
        ll t = que.top().second, n = que.top().first;
        que.pop();
        if (n > dist[t]) continue;

        for(auto m : vec[t]) {
            ll tma = m.second.first, tmb = m.second.second;
            ll k = (n/tmb + (n%tmb != 0))*tmb + tma;
            if (k < dist[m.first]) {
                que.push({k,m.first});
                dist[m.first] = k;
            }
        }
    }
    if (dist[Y] == INF) {
        cout << -1 << endl;
    }
    else {
        cout << dist[Y] << endl;
    }

    return 0;
}
