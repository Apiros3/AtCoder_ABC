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


struct Init {
    Init() {
        cout << setprecision(20);
    }
} init;




int main()
{
    ll N, A[200009], ans[200009], pos = 0, cans = 0;
    cin >> N;
    rep(i,0,N) {
        cin >> A[pos];

        if (A[pos] != A[cans]) 
            cans = pos;
        if (pos-cans+1 == A[pos]) {
            pos = cans-1;
            cans--;
            while(cans>0) {
                if (A[cans] == A[cans-1])
                    cans--;
                else break;
            }
        }
        pos++;
        ans[i] = pos;
    }
    rep(i,0,N) cout << ans[i] << endl;

    return 0;
}    