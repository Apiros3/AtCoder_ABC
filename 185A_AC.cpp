#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;


int main()
{
    long long int A[4];
    cin >> A[0] >> A[1] >> A[2] >> A[3];

    sort(A, A+4);
    
    cout << A[0];

    return 0;
}