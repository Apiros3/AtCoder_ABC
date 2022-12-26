#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;


int main()
{
    long long int A[3];

    cin >> A[0] >> A[1] >> A[2];

    sort(A, A+3);

    if (A[2]-A[1]==A[1]-A[0])
        cout << "Yes";
    else   
        cout << "No";

    return 0;
}