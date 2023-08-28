#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;


int main()
{
    long long int A, B;
    cin >> A >> B;

    if (B%A==0)
        cout << A+B;
    else   
        cout << B-A;


    return 0;
}     