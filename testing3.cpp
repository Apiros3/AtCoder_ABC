#include <iostream>
#include <cmath>
#include <algorithm>
#include <numeric>
#include <iomanip>
#include <string>
using namespace std;


int main()
{
    long long int N, A[200000], ans=0;
    cin >> N;
    for (int i=0; i<N; i++)
        cin >> A[i];
    
    sort(A, A+N, greater<long long int>());

    for (int i=1; i<N; i++) {
        ans+=A[i/2];
    }
    cout << ans;

    return 0;
}     