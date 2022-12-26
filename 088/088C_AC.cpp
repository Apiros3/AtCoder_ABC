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
    ll C[3][3];
    rep(i,0,3) {
        rep(j,0,3) cin >> C[i][j];
    }

    rep(j,1,3) {
        ll temp = C[0][j]-C[0][j-1];
        rep(i,1,3) {
            if (temp != C[i][j]-C[i][j-1]) {
                cout << "No" << endl;
                return 0;
            }
        }
    }    
    rep(j,1,3) {
        ll temp = C[j][0]-C[j-1][0];
        rep(i,1,3) {
            if (temp != C[j][i]-C[j-1][i]) {
                cout << "No" << endl;
                return 0;
            }
        }
    }    
 

    cout << "Yes" << endl;

    return 0;
}    