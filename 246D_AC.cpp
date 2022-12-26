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
    ll N, ans=1, B=0; cin >> N;
    rep(i,0,18) ans*=10;

    for (ll A=1000000; A>=0; A--) {

        ll prod = (A+B)*(A*A+B*B);
        if (prod >= N) 
            ans = min(prod,ans);
        else {
            B++;
            A+=2;
        }
    }

    cout << ans << endl;

    return 0;
}     
