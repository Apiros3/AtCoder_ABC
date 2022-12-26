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
    string S, T;
    cin >> S >> T;
    ll temp=0, temp2=0;

    rep(i, 1, S.length()) {
        if (S[i] == T[i-1] && S[i-1] == T[i] && S[i] != T[i]) temp++;
    }
    rep(i, 0, S.length()) {
        if (S[i] != T[i]) temp2++;
    }
    if (temp==1 && temp2==2) cout << "Yes";
    else if (temp==0 && temp2==0) cout << "Yes";
    else cout << "No";

    cout << endl;

    return 0;
}     