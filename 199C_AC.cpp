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
    ll N, Q, T, A, B;
    string S, S1, S2;
    bool rev = 0;
    cin >> N >> S >> Q;

    for (int i=0; i<Q; i++) {
        cin >> T >> A >> B; 
        if (T==1) {
            if (!rev) 
                swap(S[A-1],S[B-1]);
            else
                swap(S[(A-1+N)%(2*N)], S[(B-1+N)%(2*N)]);
        }
        else {
            if (rev) rev=0;
            else rev = 1;
        }
    }
    if (!rev) rep(i, 2*N) cout << S[i];
    else {
        rep(i,N) cout << S[i+N];
        rep(i,N) cout << S[i];
    }
    cout << endl;

    return 0;
}     
