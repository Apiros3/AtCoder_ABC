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
ll max(ll maxa,ll maxb) {if (maxa>=maxb) return maxa; else return maxb;}
ll intpow(ll btmn, ll topn, ll modn) {
    ll ret_num = 1;
    for(; topn; topn/=2, btmn=(btmn*btmn)%modn);
        if (topn & 1) ret_num*=btmn%modn;
    return ret_num%modn;
}
ll INF = 1<<60;

void initiate() {
    cout << setprecision(20);

    return;
}


int main()
{
    initiate();

    ll A, B, C; cin >> A >> B >> C;

    if (C%2==0) {
        if (abs(A) < abs(B)) cout << '<';
        else if (abs(A) > abs(B)) cout << '>';
        else cout << '=';
    }
    else {
        if (A<B) cout << '<';
        else if (A>B) cout << '>';
        else cout << '=';
    }

    cout << endl;

    return 0;
}    