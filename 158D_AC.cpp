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
    string S, Sfront[200009], Sback[200009]; 
    ll Q, flip=1, front=0, back=0;
    cin >> S >> Q;
    ll l = S.length();

    rep(i, 0, Q) {
        ll temp;
        cin >> temp;
        if (temp == 1) flip*=-1;
        else {
            ll F; char chr;
            cin >> F >> chr;
            if (F==1 && flip==1) {
                Sfront[front] = chr;
                front++;
            }
            else if (F==1) {
                Sback[back] = chr;
                back++;
            }
            else if (flip==1) {
                Sback[back] = chr;
                back++;
            }
            else {
                Sfront[front] = chr;
                front++;
            }
        }
    }
    if (flip == 1) {
        for (ll i=front-1; i>=0; i--) cout << Sfront[i];
        rep(i, 0, l) cout << S[i];
        rep(i, 0, back) cout << Sback[i];
    }
    else {
        for (ll i=back-1; i>=0; i--) cout << Sback[i];
        for (ll i=l-1; i>=0; i--) cout << S[i];
        rep(i, 0, front) cout << Sfront[i];
    }
    cout << endl;

    return 0;
}     
