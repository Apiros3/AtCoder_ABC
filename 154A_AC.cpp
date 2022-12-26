#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;


int main()
{
    string S, T, U;
    long long int A, B;
    
    cin >> S >> T >> A >> B >> U;

    if (S==U) 
        cout << A-1 << " " << B;
    else
        cout << A << " " << B-1;



    return 0;
}     