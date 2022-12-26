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
    string S; cin >> S;
    
    rep(i, 0, S.length()) {
        if (S[i]=='.') {
            if (i==0) cout << 0;
            cout << endl;
            return 0;
        }
        cout << S[i];
    }
    cout << endl;

    return 0;
}     