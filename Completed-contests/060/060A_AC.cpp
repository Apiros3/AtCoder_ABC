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
    string A, B, C;
    cin >> A >> B >> C;
    if (A[A.length()-1]==B[0] && B[B.length()-1]==C[0])
        cout << "YES";
    else
        cout << "NO";

    return 0;
}     