#include <iostream>
#include <cmath>
#include <algorithm>
#include <numeric>
#include <iomanip>
using namespace std;


int main()
{
    string S, T;
    cin >> S >> T;
    long long int ans=0;
    for (int i=0; i<S.length(); i++) {
        if (S[i]!=T[i])
            ans++;
    }
    cout << ans;

    
    return 0;
}     