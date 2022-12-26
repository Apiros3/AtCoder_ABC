#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;


int main()
{

    long long int A, B, C;
    cin >> A >> B >> C;

    if (C+B-A>=0)
        cout << C+B-A;
    else
        cout << 0;

    return 0;
}     