#include <iostream>
#include <cmath>
#include <algorithm>
#include <numeric>
#include <iomanip>
#include <vector>
using namespace std;


int main()
{
    long long int X;
    cin >> X;

    if (X>=0 || X%10 == 0)
        cout << X/10;
    else 
        cout << X/10 - 1;




    return 0;
}     