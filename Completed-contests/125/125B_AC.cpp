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

void initiate() {
    cout << setprecision(20);

    return;
}


int main()
{
    initiate();

    ll N, V[1000], C[1000], ans = 0;

    cin >> N;
    rep(i,0,N) cin >> V[i];
    rep(i,0,N) cin >> C[i];

    rep(i,0,N) {
        if (V[i]>C[i])
            ans += V[i] - C[i];
    }
    cout << ans << endl;

    return 0;
}    