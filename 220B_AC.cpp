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
    ll K; cin >> K;
    string A, B; cin >> A >> B;
    ll a=0, b=0;

    ll temp=1;

    for (ll i=A.length()-1; i>=0; i--) {
        a+=(A[i]-'0')*temp;
        temp*=K;
    }    
    temp=1;
    for (ll i=B.length()-1; i>=0; i--) {
        b+=(B[i]-'0')*temp;
        temp*=K;
    }
    cout << a*b << endl;

    return 0;
}    