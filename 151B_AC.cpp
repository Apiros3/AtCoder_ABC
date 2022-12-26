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

ll max(ll a,ll b) {
    if (a>=b) return a;
    else return b;
}

int main()
{
    ll N, K, M, A[109], ans=0;
    cin >> N >> K >> M;
    rep(i, 1, N) {
        cin >> A[i];
        ans += A[i];
    }
    
    if (ans+K < N*M) cout << -1 << endl;
    else cout << max(0, N*M-ans) << endl;


    return 0;
}     