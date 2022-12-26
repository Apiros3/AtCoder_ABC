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
    long int K, X;
    cin >> K >> X;
    if (500*K>=X)
        cout << "Yes";
    else
        cout << "No";


    return 0;
}     