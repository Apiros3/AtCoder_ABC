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

bool kaibun(string s) {

    rep(i,0,s.size()) {
        if (s[i] != s[s.size()-1-i]) {
            return false;
        }
    }
    return true;
}

int main()
{

    ll N; cin >> N;
    vector<string> vec(N);
    rep(i,0,N) {
        cin >> vec[i];
    }
    rep(i,0,N) {
        rep(j,0,N) {
            if (i == j) continue;
            if (kaibun(vec[i] + vec[j])) {
                cout << "Yes" << endl;
                return 0;
            }
        }
    }
    cout << "No" << endl;
    


    return 0;
}