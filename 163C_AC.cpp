#include <iostream>
#include <cmath>
#include <algorithm>
#include <numeric>
#include <iomanip>
#include <string>
using namespace std;


int main()
{
    long long int N, A[200000], B[200000];
    cin >> N;
    for (long long int i=0; i<N-1; i++) 
        cin >> A[i];
    for (long long int i=0; i<N; i++) 
        B[i]=0;

        
    for (long long int i=0; i<N-1; i++) 
        B[A[i]-1]++;
    for (long long int i=0; i<N; i++) 
        cout << B[i] << '\n';


    return 0;
}     