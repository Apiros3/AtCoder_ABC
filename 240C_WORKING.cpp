#include <iostream>
#include <cmath>
#include <algorithm>
#include <numeric>
#include <iomanip>
#include <vector>
#include <cstring>
using namespace std;


int main()
{
    long long int N, X, a[100], b[100];
    bool dp[110][11000];
    cin >> N >> X;

    for (int i=0; i<N; i++) 
        cin >> a[i] >> b[i];

    memset(dp, 0, sizeof(dp));
    dp[0][0]=1;

    for (int i=0; i<=N; i++) {
        for (int j=0; j<=X; j++) {
            dp[i+1][j+a[i]]=dp[i][j];
            dp[i+1][j+b[i]]=dp[i][j];
        }
    }
    
    if (dp[N][X]>=1)
        cout << "Yes";
    else
        cout << "No";



    return 0;
}     