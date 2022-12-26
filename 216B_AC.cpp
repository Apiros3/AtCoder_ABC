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
    ll N;
    string T[1009], S[1009];
    cin >> N;
    rep(i, 0, N) cin >> S[i] >> T[i];

    rep(i, 0, N) {
        rep(j, 0, N) {
            if (i!=j && S[i]==S[j] && T[i]==T[j]) {
                cout << "Yes" << endl;
                return 0;
            }
        }
    }
    cout << "No" << endl;

    return 0;
}     