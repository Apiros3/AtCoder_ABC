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
    ll A, B, W, mn, mx;
    cin >> A >> B >> W;
    W*=1000;

    mn = ceil((long double)W/B);
    mx = floor((long double)W/A);
    
    if (mn <= mx)
        cout << mn << " " << mx << endl;
    else
        cout << "UNSATISFIABLE" << endl;


    return 0;
}     
