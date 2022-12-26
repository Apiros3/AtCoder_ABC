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
    int r, g, b;
    cin >> r >> g >> b;
    if ((10*g+b)%4==0) 
        cout << "YES";
    else 
        cout << "NO";

    return 0;
}     