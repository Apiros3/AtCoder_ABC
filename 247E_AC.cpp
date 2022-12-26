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
    ll N, X, Y, A[200009], ans=0;
    cin >> N >> X >> Y;
    rep(i,1,N+1) cin >> A[i];

    ll mx=0, mn=0, counter=0;
    ll lastmin = INF, lastmax = INF;
    rep(i,1,N+1) {
        
        if (A[i] == Y) {
            mn = 1;
            lastmin = i;
        }
        if (A[i] == X) {
            mx = 1;
            lastmax = i;
        }
        if (A[i] < Y || A[i] > X) {
            mn = 0;
            mx = 0;
            counter=i;
        }
        if (mn == 1 && mx == 1) 
            ans += min(lastmin,lastmax)-counter;    
    }
    cout << ans << endl;
    return 0;
}    