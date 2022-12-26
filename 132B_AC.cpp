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
ll max(ll a,ll b) {if (a>=b) return a; else return b;}



int main()
{
    ll N, P[25], ans=0;
    cin >> N;
    rep(i,0,N) cin >> P[i];

    rep(i,1,N-1) {
        if (P[i-1] < P[i] && P[i] < P[i+1]) ans++;
        if (P[i-1] > P[i] && P[i] > P[i+1]) ans++;
    }
    cout << ans << endl;

    return 0;
}     