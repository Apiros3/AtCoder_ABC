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
ll intpow(ll btmn, ll topn, ll modn) {ll ret_num = 1; for(; topn; topn/=2, btmn=(btmn*btmn)%modn) if (topn & 1) ret_num*=btmn%modn; return ret_num%modn;}

ll INF = 1LL << 60;


struct Init {
    Init() {
        cout << setprecision(20);
    }
} init;





int main()
{
    ll N, arr[70000];
    arr[0] = 1;

    cin >> N;

    rep(i,2,N+1) {
        arr[intpow(2,i-1,INF)-1] = i;
        rep(j,0,intpow(2,i-1,INF)-1) {
            arr[intpow(2,i-1,INF)+j] = arr[j];
        }
    }
    rep(i,0,intpow(2,N,INF)-1) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}    