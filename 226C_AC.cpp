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

int main()
{
   
    ll N, T[200009], K[200009], ans=0; cin >> N;
    vector<vector<ll>> A;
    vector<ll> vec(200009);
    A.resize(N+1);

    rep(i,1,N+1) {
        cin >> T[i] >> K[i];
        A.at(i).resize(K[i]+1);
        rep(j,1,K[i]+1) 
            cin >> A.at(i).at(j);
    } 

    vec.at(N) = 1;

    for (int i=N; i>0; i--) {
        if (vec.at(i) == 1) {
            rep(j,1,K[i]+1) {
                vec.at(A.at(i).at(j)) = 1;
            }
            ans += T[i];
        }
    }
    cout << ans << endl;

    return 0;
}     
