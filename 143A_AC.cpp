#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;


int main()
{

    long long int A, B, ans=0;
    cin >> A >> B;

    if (A-2*B >= 0) 
        cout << A-2*B;
    else
        cout << 0;

    return 0;
}     