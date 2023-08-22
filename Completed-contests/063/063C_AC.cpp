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
#define rep(i,n) for(ll i=0; i<n; i++)
using namespace std;
using ll = long long;


int main()
{
    ll N, S[100], ans=0; cin >> N;
    for (int i=0; i<N; i++) {
        cin >> S[i];
        ans+=S[i];
    }

    sort(S, S+N);

    for (int i=0; i<N; i++) {
        if (ans%10!=0) break;
        if (S[i]%10!=0) {
            ans -= S[i];
            break;
        }
    }

    if (ans%10)
        cout << ans << endl;  
    else    
        cout << 0 << endl;
    
    return 0;
}     
