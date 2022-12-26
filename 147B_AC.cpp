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
    string S; cin >> S;
    ll ans=0;

    for (ll i=0; i<S.length()/2; i++) {
        if (S[i]!=S[S.length()-1-i]) ans++;
    }
    cout << ans++;

    return 0;
}     