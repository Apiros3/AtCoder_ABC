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

    ll N, M; cin >> N >> M;

    ll sum = 0;
    sum += 1900 * M;
    sum += 100 * (N-M);

    sum *= (1 << M);

    cout << sum << endl;

    return 0;
}