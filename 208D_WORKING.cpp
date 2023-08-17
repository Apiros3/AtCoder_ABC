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
    
    ll sum = 0;
    ll N, M; cin >> N >> M;
    vector<vector<pair<ll,ll>>> vec(N+1);
    vector<vector<ll>> dist(N+1,vector<ll>(N+1,INF)), dm(N+1,vector<ll>(N+1,INF));

    rep(i,0,M) {
        ll A, B, C; cin >> A >> B >> C;
        vec[A].emplace_back(B,C);
        dm[A][B] = C;
    }
    
    rep(i,1,N+1) dist[i][i] = 0;

    rep(i,1,N+1) {
        //calculate distance using until i
        rep(j,1,N+1) dist[j][i] = dm[j][i];
        for(auto m: vec[i]) dist[i][m.first] = m.second;
        rep(j,1,i) {
            rep(k,1,i) {
                dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
                dist[j][i] = min(dist[i][j], dist[j][k] + dist[k][i]);
            }
        }
        rep(j,1,i) {
            rep(k,1,i) {
                dist[j][k] = min(dist[j][k], dist[j][i] + dist[i][k]);
            }
        }

        
    }



    return 0;
}
