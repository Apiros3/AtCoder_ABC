#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ld = long double;
using ull = unsigned long long;

#define rep(i,start,end) for(ll i=start; i<end; i++)
#define rrep(i,start,end) for(ll i=start; i>=end; i--)

ll INF = 1LL << 60;

ll N;
string S[1509];

vector<ll> BFS(ll pos) {
    vector<ll> ret;
    ret.resize(N*N,INF);
    queue<pair<ll,ll>> que;
    que.push({pos,1});
    ret[pos] = 0;
    while(!que.empty()) {
        ll T1 = que.front().first, T2 = que.front().second;
        ll x = T1/N, y = T1%N;
        que.pop();
        ll TR[] = {1,1,-1,-1};
        ll TL[] = {-1,1,-1,1};
        rep(i,0,4) {
            ll tempx = x, tempy = y;
            while(1) {
                tempx += TR[i], tempy += TL[i];
                if (tempx == N or tempy == N) break;
                if (tempx == -1 or tempy == -1) break;
                if (S[tempx][tempy] == '#') break; 
                if (ret[tempx*N+tempy] <= T2) break; 
                ret[tempx*N+tempy] = T2;
                que.push({tempx*N+tempy,T2+1});
            }
        }
    }
    return ret;
}

int main()
{
    ll AX, AY, BX, BY;
    cin >> N >> AX >> AY >> BX >> BY;
    rep(i,0,N) cin >> S[i];
    AX--, AY--, BX--, BY--;
    
    vector<ll> v = BFS(AX*N+AY);
    if (v[BX*N+BY] == INF) cout << -1 << endl; 
    else cout << v[BX*N+BY] << endl;

    return 0;
}     

