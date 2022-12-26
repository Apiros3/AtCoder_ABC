#include <iostream>
#include <cmath>
#include <algorithm>
#include <numeric>
#include <iomanip>
#include <vector>
using namespace std;


int main()
{
    long long int N, A[100000], ans=0, temp=0, B[100000];
    cin >> N;
    for (int i=0; i<N; i++) {
        cin >> A[i];
        B[i]=0;
    }
    
    sort(A, A+N);

    for (int i=0; i<N; i++) {
        B[temp]++;
        if (A[i]!=A[i+1]) 
            temp++;
    }
    for (int i=0; i<=temp; i++) {
        if (B[i]%2==1)
            ans++;
    }

    cout << ans;

    return 0;
}     