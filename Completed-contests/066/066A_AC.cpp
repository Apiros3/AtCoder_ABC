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
    int A, B, C;
    cin >> A >> B >> C;

    cout << min(A+B,min(A+C,B+C));


    return 0;
}     