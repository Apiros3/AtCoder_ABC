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

vector<ll> A;

int main()
{

    string S;
    ll N; 
    cin >> S >> N;

    vector<string> vec;
    rep(i,0,S.size()) {
        string T = "";
        rep(j,i,min(i+6,(ll)S.size())) {
            T += S[j];
            bool add = 1;
            for(auto u : vec) if (u == T) add = 0;
            if (!add) continue; 
            if (vec.size() < N) vec.push_back(T);
            else {
                if (vec.back() > T) vec.back() = T;
            }
            sort(vec.begin(),vec.end());
        }
    }
    cout << vec.back() << endl;

    return 0;
}
