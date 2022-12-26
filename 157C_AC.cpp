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
    ll N, M, S[10], C[10], ans = -1;    

    cin >> N >> M;

    rep(i,M) cin >> S[i] >> C[i];

    ll counter = 1;
    rep(i,N-1) counter*=10;

    string temp;
    bool pass;

    for (int i=counter; i<counter*10; i++) {
        pass = 1;
        temp = to_string(i);
        rep(j,M) 
            if (temp[S[j]-1] - '0' != C[j]) pass = 0;

        if (pass) {
            cout << i << endl;
            return;
        }
    }
    rep(i,M) 
        if (S[i]==1 && C[i] == 0) ans = -1;
    if (N == 1) {
        pass = 1;
        rep(i,M) if (C[i] != 0) pass = 0;
        if (pass) ans = 0;
    }

    if (M == 0) {
        ans = counter;
        if (N == 1) ans--;
    }
    
    cout << ans << endl;

    return 0;
}     
