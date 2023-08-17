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
    vector<ll> vec;
    rep(i,0,N) {
        ll tmp; cin >> tmp;
        vec.push_back(tmp);
    }

    map<ll, vector<ll>> mp;    
    mp[vec[0]%200].push_back(0);
    if (vec[0]%200 == 0) {
        cout << "Yes\n1 2\n2 1 2";
        return 0;
    }
    rep(i,1,N) {
        rep(j,0,200) {
            if (mp[(j+vec[i])%200].size() != 0 && (mp[j].size() != 0 || j == 0)) {
                cout << "Yes" << endl;
                cout << mp[(j+vec[i])%200].size() << " ";
                for(auto m : mp[(j+vec[i])%200]) cout << m+1 << " ";
                cout << endl;

                cout << mp[j].size()+1 << " ";
                for(auto m : mp[j]) cout << m+1 << " ";
                cout << i+1 << endl;  
                return 0;
            }
        }

        rep(j,0,200) {
            if (mp[j].size() != 0 && mp[j].back() != i) {
                mp[(j+vec[i])%200] = mp[j];
                mp[(j+vec[i])%200].push_back(i);
            }
        }
        if (mp[vec[i]%200].size() == 0 || mp[vec[i]%200].back() != i) {
            mp[vec[i]%200].push_back(i);
        }
    
    }
    
    cout << "No" << endl; 



    return 0;
}