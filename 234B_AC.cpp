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
    ll N, X[109], Y[109], D=0;
    cin >> N;
    rep(i,0,N) cin >> X[i] >> Y[i];

    rep(i,0,N) {
        rep(j,0,N) {
            D = max(D,(X[i]-X[j])*(X[i]-X[j])+(Y[i]-Y[j])*(Y[i]-Y[j]));
        }
    }
    cout << setprecision(14) << sqrt((long double)D) << endl;


    return 0;
}     