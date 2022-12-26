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

string lexical_order(string strL, string strR) {rep(i,0,min(strR.length(),strL.length())) {if (strR[i] < strL[i]) return strR; if (strR[i] > strL[i]) return strL;} if (strR.length() > strL.length()) return strL; else return strR;}

ll INF = 1LL << 60;


struct Init {
    Init() {
        cout << setprecision(20);
    }
} init;


int main()
{
    ll N, M, T, temp, mn=INF, A[1009], B[1009]; cin >> N >> M >> T;
    temp = N;

    rep(i,0,M) cin >> A[i] >> B[i];
    
    temp-=A[0];
    mn=temp;
    temp=min(N,temp+B[0]-A[0]);
    rep(i,1,M) {
        temp-=A[i]-B[i-1];
        mn=min(mn,temp);
        temp=min(N,temp+B[i]-A[i]);
    }
    temp-=T-B[M-1];
    mn=min(mn,temp);

    if (mn<=0) cout << "No" << endl;
    else cout << "Yes" << endl; 

    return 0;
}    