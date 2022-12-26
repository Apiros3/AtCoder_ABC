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
    ll Q; cin >> Q;
    ll arr[2][200009], ans[200009];

    ll pointer=0, coutpointer=0, pointerans=0;

    rep(i,0,Q) {
        ll tempQ, X, C;
        cin >> tempQ;
        if (tempQ == 1) {
            cin >> X >> C;
            arr[0][pointer] = X;
            arr[1][pointer] = C; 
            pointer++;
        }
        else {
            cin >> C; 
            ans[pointerans] = 0;
            
            while(C > 0) {
                if (C >= arr[1][coutpointer]) {
                    ans[pointerans] += arr[0][coutpointer]*arr[1][coutpointer];
                    C -= arr[1][coutpointer];
                    coutpointer++;
                }
                else {
                    ans[pointerans] += arr[0][coutpointer]*C;
                    arr[1][coutpointer] -= C; 
                    break;
                }
            }
            pointerans++;
        }
    }

    rep(i,0,pointerans) 
        cout << ans[i] << endl;
    
    if (pointerans==0)
        cout << endl;
    

    return 0;
}    