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

vector<ll> used(200009,0);
struct Topological_Sort {
    vector<ll> ret;
    Topological_Sort(vector<vector<ll>> G, vector<ll> deg) {
        queue<ll> que;
        rep(i,0,G.size()) if (deg[i] == 0 && used[i]) que.push(i);

        while(!que.empty()) {
            ll v = que.front();
            que.pop();
            ret.push_back(v);

            for (auto nv: G[v]) {
                --deg[nv];
                if (deg[nv] == 0 && used[nv]) que.push(nv);
            }
        }
        reverse(ret.begin(),ret.end());
    }
    vector<ll> vec() {return ret;}
};

int main()
{

    ll N; cin >> N;
    vector<vector<ll>> vec(N+1), adj(N+1);
    rep(i,1,N+1) {
        ll tmp;
        cin >> tmp;
        rep(j,0,tmp) {
            ll P; cin >> P;
            vec[i].push_back(P);
        }
    }

    vector<ll> deg(N+1,0);
    queue<ll> que;
    que.push(1);
    while(!que.empty()) {
        ll tmp = que.front();
        que.pop();
        used[tmp] = true;

        rep(i,0,vec[tmp].size()) {
            adj[tmp].push_back(vec[tmp][i]);
            deg[vec[tmp][i]]++;
            if (!used[vec[tmp][i]]) {
                que.push(vec[tmp][i]);
            }
        }
    }
    // rep(i,1,N+1) {
    //     for(auto j : adj[i]) cout << j << " ";
    //     cout << endl;
    // }
    // for(auto u : deg) cout << u << " ";
    // cout << endl;

    Topological_Sort TP(adj, deg);
    vector<ll> ret = TP.vec();

    rep(i,0,ret.size()-1) cout << ret[i] << " ";
    cout << endl;


    return 0;
}
