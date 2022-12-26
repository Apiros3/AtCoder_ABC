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
#define rep(i,start,end) for(ll i=start; i<end; i++)
using namespace std;
using ll = long long;
ll max(ll a,ll b) {if (a>=b) return a; else return b;}

int main()
{
    ll H, W; cin >> H >> W;
    vector<vector<ll>> vec;
    vec.resize(H);

    rep(i,0,H) {
        vec.at(i).resize(W);
        rep(j,0,W) {
            cin >> vec.at(i).at(j);
        }
    } 
    rep(i,0,W) {
        rep(j,0,H) {
            cout << vec.at(j).at(i) << " ";
        }
        cout << endl;
    }
    

    return 0;
}     