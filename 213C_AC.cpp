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
    ll H, W, N, A[100009], B[100009], a[100009], b[100009]; 
    cin >> H >> W >> N;

    rep(i,N) {
        cin >> A[i] >> B[i];
        a[i] = A[i];
        b[i] = B[i];
    }
    sort(a, a+N);
    sort(b, b+N);
    
    ll tempX=1, tempY=1;
    map<ll, ll> mpX, mpY;
    rep(i,N) {
        if (mpX[a[i]]==0) {
            mpX[a[i]] = tempX;
            tempX++;            
        }
        if (mpY[b[i]]==0) {
            mpY[b[i]] = tempY;
            tempY++;
        }
    }
    rep(i,N) 
        cout << mpX[A[i]] << " " << mpY[B[i]] << endl;
    
    return 0;
}     
