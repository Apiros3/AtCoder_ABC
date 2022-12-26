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
    string X;
    cin >> A >> X >> B;
    if (X=="+")
        cout << A+B;
    else
        cout << A-B;
    

    return 0;
}     