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
    ll N;
    string S;
    cin >> N >> S;

    if (N%2!=0) {
        cout << "No" << endl;
        return 0;
    }
    else {
        rep(i,0,N/2) {
            if (S[i] != S[N/2+i]) {
                cout << "No" << endl;
                return 0;
            }
        }
    }
    cout << "Yes" << endl;    
    return 0;
}     