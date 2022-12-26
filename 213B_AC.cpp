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
    long long int N, A[200000], B[200000], temp;
    cin >> N;
    for (int i=0; i<N; i++) {
        cin >> A[i];
        B[i]=A[i];
    }
    sort(B, B+N, greater<int>());
    temp=B[1];

    for (int i=0; i<N; i++) {
        if (A[i]==temp) {
            cout << i+1 << endl;
            break;
        }
    }    


    return 0;
}     