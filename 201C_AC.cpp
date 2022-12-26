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
    ll a, ans=0;
    string S, T; cin >> S;
    bool b;
    map<int, int> mp;
    for (int i=0; i<10; i++)
        if (S[i] == 'o') mp[i] = 1;

    for (int i=0; i<10000; i++) {
        map<int, int> mp2;
        a = i, b = 1;
        for (int j=0; j<4; j++, a/=10) {
            if (S[a%10] == 'x') b = 0;
            else if (S[a%10] == 'o') {
                mp2[a%10] = 1;
            }
        }
        for (int i=0; i<10; i++) 
            if (mp[i]!=mp2[i]) b = 0;
        if (b) ans++;
    }

    cout << ans << endl;

    return 0;
}     
