#include <iostream>
#include <cmath>
#include <algorithm>
#include <numeric>
#include <iomanip>
#include <string>
#include <cstdio>
using namespace std;


int main()
{
    long long int N, K, temp, ans=0;
    cin >> N >> K;
    for (int i=0; i<N; i++) {
        cin >> temp;
        if (temp>=K)
            ans++;
    }
    cout << ans;


    return 0;
}     