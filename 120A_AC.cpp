#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;


int main()
{
    long long int A, B, C;
    
    cin >> A >> B >> C;

    if (B/A>=C) 
        cout << C;
    else
        cout << B/A;


    return 0;
}     