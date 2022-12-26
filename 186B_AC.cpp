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
    long long int H, W, A[10000], temp, ans=0;
    cin >> H >> W;
    for (int i=0; i<(H*W); i++)
        cin >> A[i];

    sort(A, A+(H*W));
    temp=A[0];

    for (int i=0; i<H*W; i++) {
        ans+=(A[i]-temp);
    }

    cout << ans << endl;

    return 0;
}     