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


ll fact(ll N) {
    if(N==1) return 1;
    else return N*fact(N-1);
}


int main()
{
    ll P, ans=0, temp=10; cin >> P;
    while(P>0) {
        while(P>=fact(temp)) {
            P -= fact(temp);
            ans++;
        }
        temp--;
    }
    cout << ans << endl;

    return 0;
}     