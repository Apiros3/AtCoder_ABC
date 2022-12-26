#include <iostream>
#include <cmath>
#include <algorithm>
#include <numeric>
#include <iomanip>
#include <string>
#include <cstdio>
#include <vector>
#include <stdlib.h>
#include <map>
#include <math.h>
#define rep(i,start,end) for(ll i=start; i<end; i++)
using namespace std;
using ll = long long;

ll ans = 0, N, X;
vector<vector<ll>> A;

void dfs(ll pos, ll prod, ll num) {
    if (pos == N) {
        if (prod == X) 
            ans++;
        return;
    }
    for (ll i=0; i<num; i++) {
        ll C = A.at(pos).at(i);
        if (prod > X/C) continue;
        if (pos != N-1)
            dfs(pos+1, prod*C, A.at(pos+1).size());
        else 
            dfs(pos+1, prod*C, 1);
    }
}

int main()
{
    cin >> N >> X;
    A.resize(N);
    rep(i, 0, N) {
        ll L; cin >> L;
        A.at(i).resize(L);
        rep(j, 0, L)
            cin >> A.at(i).at(j);
    }
    dfs(0,1, A.at(0).size());
    cout << ans << endl;

    return 0;
}     
