#include <iostream>
#include <cmath>
#include <algorithm>
#include <numeric>
#include <iomanip>
#include <string>
using namespace std;


int main()
{
    long long int X, t;
    cin >> X >> t;

    if (X>=t)
        cout << X-t;
    else    
        cout << 0;

    return 0;
}     