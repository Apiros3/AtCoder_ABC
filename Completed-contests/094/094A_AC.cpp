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
    int A, B, X;
    cin >> A >> B >> X;

    if (A<=X && X<=A+B)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}     