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
    long long int A[3];
    cin >> A[0] >> A[1] >> A[2];
    sort(A, A+3);

    cout << A[2]-A[0];
    

    return 0;
}     