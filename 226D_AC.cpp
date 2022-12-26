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
    ll N, X[509], Y[509];
    cin >> N;
    rep(i,0,N) cin >> X[i] >> Y[i];

    map<string, ll> mp;

    ll ans=0, x=0, y=0;

    rep(i,0,N) {
        rep(j,i+1,N) {
            ll tempX = X[j]-X[i], tempY = Y[j]-Y[i];
            if (tempX==0) {
                x=1; 
                continue;
            }
            if (tempY==0) {
                y=1;
                continue;
            }
            ll G = __gcd(abs(tempX),abs(tempY));
            tempX/=G;
            tempY/=G;
            string S = to_string(abs(tempX)) + "/" + to_string(abs(tempY));
            if (tempX*tempY < 0) {
                if (mp["-"+S] == 0) {
                    mp["-"+S] = 1;
                    ans++;
                }
            }
            else {
                if (mp[S] == 0) {
                    mp[S] = 1;
                    ans++;
                }
            }


            
        }
    }
    cout << 2*(ans + x + y) << endl;

    return 0;
}    