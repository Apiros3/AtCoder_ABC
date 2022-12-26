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
    ll N, D[59], ans=0; cin >> N;
    rep(i, 0, N) cin >> D[i];

    rep(i, 0, N) {
        rep(j, 0, N) {
            if (i!=j) ans+=D[i]*D[j];
        }
    }
    cout << ans/2 << endl;

    return 0;
}     