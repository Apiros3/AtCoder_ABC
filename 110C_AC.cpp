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
    string S, T;
    cin >> S >> T;
    vector<vector<ll>> A(27, vector<ll>(27));

    rep(i, 0, S.length()) {
        ll a, b;
        a = S[i] - 'a';
        b = T[i] - 'a';

        A.at(a).at(b) = 1;        
    }

    for (ll i=0; i<26; i++) {
        ll cnt = 0;
        for (ll j=0; j<26; j++)
            if (A.at(i).at(j)==1) cnt++;
        if (cnt > 1) {
            cout << "No" << endl;
            return 0;
        }
    }
    for (ll i=0; i<26; i++) {
        ll cnt = 0;
        for (ll j=0; j<26; j++)
            if (A.at(j).at(i)==1) cnt++;
        if (cnt > 1) {
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;

    return 0;
}     
