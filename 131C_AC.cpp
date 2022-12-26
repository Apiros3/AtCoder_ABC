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
    ll A, B, C, D;
    cin >> A >> B >> C >> D;
    ll min = A-1, max = B, temp=C/__gcd(C,D)*D;

    min -= (A-1)/C;
    min -= (A-1)/D;
    min += (A-1)/temp; 

    max -= B/C;
    max -= B/D;
    max += B/temp;

    cout << max - min << endl;
    
    return 0;
}     
