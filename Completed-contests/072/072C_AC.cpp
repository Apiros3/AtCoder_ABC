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
    long long int N, A[100000], B[100000], max=0;
    cin >> N;
    for (int i=0; i<100000; i++)
        B[i]=0;
    for (int i=0; i<N; i++) {
        cin >> A[i];
        B[A[i]]++;
    }
    for (int i=2; i<100000; i++) {
        if (B[i]+B[i-1]+B[i-2]>max)
            max=B[i]+B[i-1]+B[i-2];
    }
    cout << max;
 
 
    return 0;
}     