#include <iostream>
#include <cmath>
#include <algorithm>
#include <numeric>
#include <iomanip>
#include <string>
#include <cstdio>
#include <vector>
#include <stdlib.h>
using namespace std;


int main()
{
    long long int N, A[2000];
    cin >> N;
    for (int i=0; i<N; i++)
        cin >> A[i];
    
    sort(A, A+N);

    bool temp=1;
    if (A[0]!=0) {
        cout << 0;
        temp=0;
    }
    else {
        for (int i=1; i<N; i++) {
            if (A[i-1]+1 < A[i]) {
                cout << A[i-1]+1;
                temp=0;
                break;
            }
        }
    }
    if (temp) {
        cout << A[N-1]+1;
    }
    cout << endl;


    return 0;
}     