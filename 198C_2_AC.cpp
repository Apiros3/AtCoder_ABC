#include <iostream>
#include <cmath>
#include <algorithm>
#include <numeric>
#include <iomanip>
using namespace std;

using ll = long long;

ll max(ll a, ll b) {if (a<b) return b; else return a;}

int main()
{
    ll r, x, y;
    cin >> r >> x >> y;
    if (x == 0 && y == 0) {
        cout << 0 << endl;
        return 0;
    }

    ll prod = x*x + y*y;

    if (prod == r*r) {
        cout << 1 << endl;
        return 0;
    }
    ll ans = sqrt(prod)/r + ((ll)sqrt(prod)/r*r!=sqrt(prod));
    
    cout << max(ans,2) << endl;

    return 0;
}     