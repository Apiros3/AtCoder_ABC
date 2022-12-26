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
    string N; cin >> N;

    ll temp=1;
    if (N[0] == '0') {
        cout << "Yes" << endl;
        return 0;
    }
    while(1) {
        if (N[N.length()-temp]=='0') temp++;
        else break;
    }
    rep(i,0,N.length()-temp) {
        if (N[i] != N[N.length()-temp-i]) {
            cout << "No" << endl;
            return 0;   
        }
    }
    cout << "Yes" << endl;

    return 0;
}    