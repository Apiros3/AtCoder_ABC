#include <iostream>
#include <cmath>
#include <algorithm>
#include <numeric>
#include <iomanip>
#include <string>
using namespace std;


int main()
{
    long long int K, N, A[200000];
    cin >> K >> N;

    for (int i=0; i<N; i++)
        cin >> A[i];
    
    long long int maxdist=0;
    for (int i=1; i<N; i++) {
        if (A[i]-A[i-1]>maxdist)
            maxdist=A[i]-A[i-1];
    }
    if (K+A[0]-A[N-1]>maxdist)
        maxdist=K+A[0]-A[N-1];
    
    cout << K-maxdist;
    

    return 0;
}     