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
    long double A, B;
    cin >> A >> B;
    long double dist = sqrt(A*A+B*B);
    
    cout << setprecision(10) << A/dist << " " << B/dist << endl;

    return 0;
}     
