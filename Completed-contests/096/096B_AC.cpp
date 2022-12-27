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
    ll A, B, C, K;
    cin >> A >> B >> C >> K;
    ll ans = A+B+C;
    ll temp = max(max(A,B),C);
    ans-=temp;
    
    ans+= temp*intpow(2,K,INF);

    cout << ans << endl;

    return 0;
}    