#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ull = unsigned long long;
using ld = long double;

#define rep(i,start,end) for(ll i=start; i<end; i++)
#define rrep(i,start,end) for(ll i=start; i>=end; i--)

ll INF = 1LL << 60;
ld PI = 3.141592653589793;

struct Init {
    Init() {
        cout << setprecision(15);
    }
}init;

int main()
{

    ll N; cin >> N;
    string S;

    while(N) {
        if (N%2 == 0) {
            S += '0';
        }
        else {
            S += '2';
        }
        N /= 2;
    }
    reverse(S.begin(),S.end());
    cout << S << endl;
    

    return 0;
}