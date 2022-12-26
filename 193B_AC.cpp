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

int main()
{
    ll N, A[100009], P[100009], X[100009], ans = 1<<30;
    cin >> N;
    rep(i, 0, N) cin >> A[i] >> P[i] >> X[i];

    rep(i, 0, N) 
        if (X[i] - A[i] > 0) ans = min(ans,P[i]);
    
    if (ans == 1<<30) cout << -1 << endl;
    else cout << ans << endl;

    return 0;
}     