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
    int A[3], temp=3;
    cin >> A[0] >> A[1] >> A[2];
    sort(A, A+3);
    if (A[0]==A[1])
        temp--;
    if (A[1]==A[2])
        temp--;

    cout << temp;


    return 0;
}     