#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;


int main()
{
    long long int N, X, A[100000];
    cin >> N >> X;

    for (int i=0; i<N; i++) {
        cin >> A[i];
    }    
    for (int i=0; i<N; i++) {
        if (A[i]!=X)
            cout << A[i] << " ";
    }

    cout << '\n';

    return 0;
}     