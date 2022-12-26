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
#include <deque>

#define rep(i,start,end) for(ll i=start; i<end; i++)

using namespace std;
using ll = long long;

ll max(ll maxa,ll maxb) {if (maxa>=maxb) return maxa; else return maxb;}
ll intpow(ll btmn, ll topn, ll modn) {ll ret_num = 1; for(; topn; topn/=2, btmn=(btmn*btmn)%modn) if (topn & 1) ret_num*=btmn%modn; return ret_num%modn;}

ll INF = 1LL << 60;

ll fact(ll factnum) {
    if (factnum==1) return 1;
    return factnum*fact(factnum-1);
}


struct Init {
    Init() {
        cout << setprecision(20);
    }
} init;




int main()
{
    ll N, A[200009], sum[200009], mx[200009]; cin >> N;   
    rep(i,0,N) cin >> A[i];

    mx[0] = A[0];
    sum[0] = A[0]; 
    rep(i,1,N) {
        sum[i] = sum[i-1] + A[i];   
        mx[i] = max(mx[i-1],sum[i]);
    }
    ll mxans = max(sum[0],0), pos=sum[0];
        
    rep(i,1,N) {
        mxans = max(mxans, pos+mx[i]);
        pos += sum[i];
    }
    cout << mxans << endl;

    return 0;
}    