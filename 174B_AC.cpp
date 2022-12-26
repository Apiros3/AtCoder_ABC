#include <iostream>
#include <cmath>
#include <algorithm>
#include <numeric>
#include <iomanip>
#include <string>
using namespace std;


int main()
{
    long long int N, D, X[200000], Y[200000], ans=0;
    cin >> N >> D;
    for (int i=0; i<N; i++)
        cin >> X[i] >> Y[i];

    for (int i=0; i<N; i++) {
        if (X[i]*X[i]+Y[i]*Y[i]<=D*D)
            ans++;
    }
    cout << ans;


    return 0;
}     