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
    
    ll N, M, K;
    cin >> N >> M >> K;
    vector<vector<ll>> vec(N+1);
    rep(i,0,M) {
        ll A, B; cin >> A >> B;
        vec[A].push_back(B);
        vec[B].push_back(A);
    }
    // rep(i,1,N+1) {
    //     for(auto m : vec[i]) cout << m << " ";
    //     cout << endl;
    // } 

    vector<ll> dist(N+1,-1);

    priority_queue<pair<ll,ll>> que;
    rep(i,0,K) {
        ll P, H; cin >> P >> H;

        que.push({H,P});
        dist[P] = H;
    }

    vector<bool> used(N+1);
    while(!que.empty()) {
        // for(auto l : dist) cout << l << " ";
        // cout << endl;
        ll u = que.top().first, v = que.top().second;
        que.pop();
        if (used[v]) continue;
        used[v] = true;
        for(auto m : vec[v]) {
            if (dist[m] < u-1) {
                dist[m] = u-1;
                que.push({u-1,m});
            }
        }
    }
    vector<ll> fin;
    rep(i,1,N+1) {
        if (dist[i] >= 0) fin.push_back(i);
    }
    cout << fin.size() << endl;
    rep(i,0,fin.size()) cout << fin[i] << " ";
    cout << endl;




    return 0;
}
