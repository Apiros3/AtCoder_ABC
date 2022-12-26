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
    long long int A, B, C, D;
    cin >> A >> B >> C >> D;

    if (A*B>C*D)
        cout << A*B;
    else
        cout << C*D;
    

    return 0;
}     