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
#define rep(i,n) for(ll i=0; i<n; i++)
using namespace std;
using ll = long long;


int main()
{
    string S;
    ll N = S.length(), W[200009], w=0, R[200009], r=0, temp=0, ans = 1<<30;
    cin >> N >> S;

    rep(i,N) {
        if (S[i]=='W') {
            W[w] = i;
            w++;
        }
    }
    for (ll i=N-1; i>=0; i--) {
        if (S[i]=='R') {
            R[r] = i;
            r++;
        }
    }
    for (int i=0; i<min(r,w); i++) {
        if (W[i] > R[i]) {
            ans = i;
            break;
        }
    }
    if (ans == 1<<30) cout << min(r,w) << endl;
    else cout << ans << endl;
 
    return 0;
}     
