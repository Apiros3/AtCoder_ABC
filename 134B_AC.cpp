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
    ll N, D, ans;
    cin >> N >> D;
    D = 2*D + 1;

    ans = N/D;
    if (N%D!=0) ans++;

    cout << ans << endl;


    return 0;
}     