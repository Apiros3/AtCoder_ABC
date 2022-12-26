#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;


int main()
{
    long long int N, A[10], temp[10], ans=0;

    cin >> N;

    for (int i=0; i<9; i++) {
        A[i] = 1;
    }

    for (int i=1; i<N; i++) {
        temp[0] = A[0]+A[1];
        temp[8] = A[7]+A[8];
        for (int j=1; j<8; j++) {
            temp[j]=A[j-1]+A[j]+A[j+1];
        }
        for (int j=0; j<9; j++) {
            A[j] = temp[j];
            A[j]=A[j]%998244353;
        }
    }

    for (int i=0; i<9; i++) {
        ans+=A[i];
        ans%=998244353;
    }

    cout << ans << '\n';

}