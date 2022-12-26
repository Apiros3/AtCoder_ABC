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
    long long int X, Y, A[]={1,3,1,2,1,2,1,1,2,1,2,1};
    cin >> X >> Y;
    if (A[X-1]==A[Y-1])
        cout << "Yes";
    else
        cout << "No";


    return 0;
}     