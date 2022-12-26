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

void initiate() {
    cout << setprecision(20);

    return;
}


int main()
{
    initiate();

    ll A, B, C; cin >> A >> B >> C;

    cout << 2*(A*B + B*C + C*A) << endl;


    return 0;
}    