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
    ll N;
    string S;
    cin >> N >> S;
    deque<ll> ans = {N};

    for (ll i=N-1; i>=0; i--) {
        if (S[i] == 'R') 
            ans.push_front(i);
        else 
            ans.push_back(i);
    }
    rep(i,0,ans.size())
        cout << ans.at(i) << " ";
    cout << endl;


    return 0;
}    