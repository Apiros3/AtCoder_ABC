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
    long long int A, B;
    cin >> A >> B;

    if ((A+B)%2==0)
        cout << (A+B)/2;
    else
        cout << "IMPOSSIBLE";

    return 0;
}     