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

int main()
{
    
    ll N, M; cin >> N >> M;
    vector<ll> H(N+1);
    rep(i,1,N+1) cin >> H[i];

    vector<vector<ll>> vec(N+1);
    rep(i,0,M) {
        ll U, V; cin >> U >> V;
        vec[U].push_back(V);
        vec[V].push_back(U);
    }

    vector<ll> dist(N+1,-INF);

    priority_queue<pair<ll,ll>> que;

    que.push({0,1});

    while(!que.empty()) {
        ll w = que.top().first, u = que.top().second;
        que.pop();
        if (dist[u] >= w) continue;
        dist[u] = w;
        for(auto m : vec[u]) {
            ll diff = 0;
            if (H[u] > H[m]) {
                diff = H[u] - H[m];
            }
            else {
                diff = 2*(H[u] - H[m]);
            }

            if (dist[m] < dist[u] + diff) {
                dist[m] = dist[u] + diff;
                que.push({dist[m],m});
            }
        }
    }
    ll mx = 0;
    rep(i,1,N+1) {
        // cout << dist[i] << " ";
        mx = max(mx, dist[i]);
    }
    // cout << endl;
    cout << mx << endl;


    return 0;
}
