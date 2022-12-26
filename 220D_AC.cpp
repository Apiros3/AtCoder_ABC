#include <iostream>
#include <cmath>
#include <algorithm>
#include <numeric>
#include <iomanip>
#include <string>
#include <cstdio>
#include <vector>
#include <stdlib.h>
using namespace std;


int main()
{
    long long int N, mod=998244353, A[100000];
    vector<vector<long long int>> dp(100001, vector<long long int>(10));
    cin >> N;
    for (long int i=0; i<N; i++)
        cin >> A[i];
    
    dp.at(0).at(A[0])=1;

    for (int i=0; i<N-1; i++) {
        for (int j=0; j<10; j++) {
            dp.at(i+1).at((j+A[i+1])%10)+=dp.at(i).at(j);
            dp.at(i+1).at((j*A[i+1])%10)+=dp.at(i).at(j);
        }
        for (int j=0; j<10; j++)
            dp.at(i+1).at(j)%=mod;
    }
    for (int i=0; i<10; i++) 
        cout << dp.at(N-1).at(i) << endl;

    return 0;
}     