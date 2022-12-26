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
    ll S, T, ans=0; cin >> S >> T;
    rep(i, 0, S+1) {
        rep(j, 0, S+1) {
            rep(k, 0, S+1) {
                if (i+j+k <= S && i*j*k <= T) ans++;
            }
        }
    }
    cout << ans << endl;

    return 0;
}     