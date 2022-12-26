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

ll fact(ll factnum) {
    if (factnum==1) return 1;
    return factnum*fact(factnum-1);
}


struct Init {
    Init() {
        cout << setprecision(20);
    }
} init;




int main()
{
    string S; cin >> S;
    ll arr[10], ans[125][10];
    rep(i,0,10) arr[i] = 0;

    rep(i,0,125) {
        string temp = to_string(i*8);
        for (ll j=temp.length()-1; j>=max(0,temp.length()-4); j--) {
            ans[i][temp[j]-'0']++;
        }
    }
    if (S == "8") {
        cout << "Yes" << endl;
        return 0;
    }

    rep(i,0,S.length()) 
        arr[S[i]-'0']++;
    
    rep(i,0,125) {
        if (i < 1 && S.length() == 2) continue;
        if (i < 12 && S.length() >= 3) continue;
        if (1 <= i && S.length() == 1) break;
        if (12 <= i && S.length() == 2) break;
        ll counter = 0;
        rep(j,0,10) {
            if (ans[i][j] > arr[j]) 
                counter = 1;
        }
        if (!counter) {
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;


    return 0;
}    