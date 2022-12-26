#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;


int main()
{
    long double A, B, C, X, temp=0;
    cin >> A >> B >> C >> X;

    if (X <= A) 
        cout << 1;
    else if (X <= B)
        cout << C/(B-A);
    else  
        cout << 0;
    
    cout << '\n';

    return 0;
}