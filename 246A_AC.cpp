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
    ll X[3], Y[3];
    rep(i,0,3) cin >> X[i] >> Y[i];

    cout << (X[0]^X[1]^X[2]) << " " << (Y[0]^Y[1]^Y[2]) << endl;

    return 0;
}     
