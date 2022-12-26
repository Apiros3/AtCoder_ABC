#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;


int main()
{

    long long int A, B, ans=0;
    cin >> A >> B;

    if (A>=13)
        cout << B;
    else if (A>=6)
        cout << B/2;
    else  
        cout << 0;

    return 0;
}     