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
    ll N, A[100009], B[100009], ans=0;
    cin >> N;
    rep(i,0,N) cin >> A[i] >> B[i];

    rep(i,0,N) {
        ans+=(B[i]*(B[i]+1))/2;
        ans-=((A[i]-1)*(A[i]))/2;
    }
    cout << ans << endl;

    return 0;
}     