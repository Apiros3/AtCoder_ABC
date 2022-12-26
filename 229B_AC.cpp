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
    string A, B;
    cin >> A >> B;

    for (int i = 1; i<=min(A.length(),B.length()); i++) {
        if (A[A.length()-i]-'0' + B[B.length()-i]-'0' >= 10) {
            cout << "Hard" << endl;
            return 0;
        }
    }
    cout << "Easy" << endl;

    return 0;
}     