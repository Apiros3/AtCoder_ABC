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
    string S; cin >> S;
    rep(i, 0, S.length()) {
        if (i%2 == 0) {
            if (S[i] == 'L') {
                cout << "No" << endl;
                return 0;
            }
        }
        else {
            if (S[i] == 'R') {
                cout << "No" << endl;
                return 0;
            }
        }
    }
    cout << "Yes" << endl;


    return 0;
}     