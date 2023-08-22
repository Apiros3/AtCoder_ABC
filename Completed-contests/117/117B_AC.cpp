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
    ll N, L[15], mx=0, sum=0; cin >> N;
    rep(i, 0, N) {
        cin >> L[i];
        sum+=L[i];
        mx = max(mx,L[i]);
    }

    if (mx < sum-mx) cout << "Yes" << endl;
    else cout << "No" << endl;


    return 0;
}     