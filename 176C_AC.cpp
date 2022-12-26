#include <iostream>
#include <cmath>
#include <algorithm>
#include <numeric>
#include <iomanip>
#include <string>
using namespace std;


int main()
{
    long long int N, A[200000], ans=0, max;
    cin >> N;
    for (int i=0; i<N; i++) 
        cin >> A[i];

    max=A[0];
    for (int i=1; i<N; i++) {
        if (A[i]<max) 
            ans+=max-A[i];
        else
            max=A[i];
    }    
    cout << ans;


    return 0;
}     