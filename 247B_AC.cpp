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
    ll N;
    string S[109], T[109];

    cin >> N;
    rep(i,0,N) cin >> S[i] >> T[i];

    rep(i,0,N) {
        ll temp1=0, temp2=0;
        rep(j,0,N) {
            if (i!=j) {
                if (S[i] == S[j] || S[i] == T[j]) temp1=1;
                if (T[i] == T[j] || T[i] == S[j]) temp2=1;
            }
        }
        if (temp1 == 1 && temp2 == 1) {
            cout << "No" << endl;
            return 0;
        }        
    }
    cout << "Yes" << endl;




    return 0;
}    