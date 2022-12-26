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
    string X, Y;
    cin >> X >> Y;
    if (X>Y) 
        cout << '>';
    else if (Y>X)
        cout << '<';
    else    
        cout << '=';

    return 0;
}     