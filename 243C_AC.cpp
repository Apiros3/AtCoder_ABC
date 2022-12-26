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
    ll N, X[200009], Y[200009];
    map<ll, ll> mpL, mpR;
    string S;
    cin >> N;

    rep(i,N) cin >> X[i] >> Y[i];
    cin >> S;

    bool ans=0;

    rep(i,N) {
        if (S[i] == 'R') {
            if (mpL[Y[i]]==0) mpL[Y[i]] = (1<<30);
            mpL[Y[i]] = min(X[i]+1, mpL[Y[i]]);
        }
        else {
            mpR[Y[i]] = max(X[i]+1, mpR[Y[i]]);
        }
        if (mpR[Y[i]] > mpL[Y[i]] && mpL[Y[i]] != 0) ans=1;
    }
    if (ans) cout << "Yes" << endl;
    else cout << "No" << endl;
    
    return 0;
}     
