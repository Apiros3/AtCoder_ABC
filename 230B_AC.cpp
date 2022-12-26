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
    long long int N, A[100], B[100], ans=0;
    cin >> N;
    for (int i=0; i<N; i++)
        cin >> A[i];
    for (int i=0; i<N; i++)
        cin >> B[i];
    
    sort(A, A+N, greater<int>());
    sort(B, B+N);
    
    if (B[0]-A[0]+1 > 0)
        cout << B[0]-A[0]+1 << endl;
    else
        cout << 0 << endl;

    return 0;
}     