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
    long long int N, A[400000];
    cin >> N;
    for (int i=0; i<(4*N-1); i++)
        cin >> A[i];
    
    sort(A, A+(4*N-1));

    for (int i=0; i<N; i++) {
        if (A[4*i]!=A[4*i+1] || A[4*i]!=A[4*i+2] || A[4*i]!=A[4*i+3]) {
            cout << A[4*i] << endl;
            break;
        }
    }

    return 0;
}     