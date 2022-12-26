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
    int A, B;
    cin >> A >> B;

    if (B>=A)
        cout << A;
    else
        cout << A-1;

    return 0;
}     