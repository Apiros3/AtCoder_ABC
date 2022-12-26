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
    ll N, A[200009], ans=0;
    cin >> N;
    ll t = N-1;
    rep(i,N) cin >> A[i];

    sort(A, A+N, greater<ll>());

    for (int i=0; t>=1-N; i++, t-=2) 
        ans += t*A[i];
    
    cout << ans << endl;

    return 0;
}     
