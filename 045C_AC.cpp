#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ull = unsigned long long;
using ld = long double;

#define rep(i,start,end) for(ll i=start; i<end; i++)
#define rrep(i,start,end) for(ll i=start; i>=end; i--)


// pow in int, takes mod and returns in O(log(topn))
    ll intpow(ll btmn, ll topn, ll modn) {ll ret_num = 1; btmn%=modn; for(; topn; topn/=2, btmn=(btmn*btmn)%modn) if (topn & 1) ret_num=(ret_num*(btmn%modn))%modn; return ret_num%modn;}

ll INF = 1LL << 60;
ld PI = 3.141592653589793;

struct Init {
    Init() {
        cout << setprecision(15);
    }
}init;

ll strsum(vector<string> s) {
    ll sum = 0;
    for(auto m : s) {
        sum += stoll(m);
    }   
    return sum;
}

int main()
{
    string S; cin >> S;

    ll sum = 0;
    rep(i,0,(1ll<<(S.size()-1))) {
        ll tmp = i;
        vector<string> T(1);
        T.back() += S[0];
        rep(i,1,S.size()) {
            if (tmp&1) T.push_back("");
            T.back() += S[i];
            tmp/=2;
        }
        // for(auto m : T) cout << m << endl;
        sum += strsum(T);
    }
    cout << sum << endl;

    return 0;
}