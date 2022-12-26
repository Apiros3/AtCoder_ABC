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
    ll N, K, P[500000];
    cin >> N >> K;
    rep(i,N) cin >> P[i];

    sort(P, P+K, greater<ll>());
    
    for (int i=K-1; i<N; i++) {
        


        
    }

    
    return 0;
}     
