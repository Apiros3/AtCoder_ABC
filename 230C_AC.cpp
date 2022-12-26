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
    ll N, A, B, P, Q, R, S;
    cin >> N >> A >> B >> P >> Q >> R >> S;

    rep(j, P, Q+1) {
        rep(i, R, S+1) {
            if (j-A == i-B) {
                ll k = j-A;
                if (max(1-A,1-B) <= k && k <= min(N-A,N-B)) {
                    cout << '#';
                    continue;
                }
            }
            if (j-A == B-i) {
                ll k = j-A;
                if (max(1-A,B-N) <= k && k <= min(N-A,B-1)) {
                    cout << '#';
                    continue;
                }
            }
            cout << '.';
        }
        cout << endl;
    }

    return 0;
}    