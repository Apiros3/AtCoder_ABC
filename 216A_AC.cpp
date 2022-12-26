#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;


int main()
{

    double X;
    cin >> X;

    if ((int)(X*10)%10<3)
        cout << (int)X << '-';
    else if ((int)(X*10)%10<7)
        cout << (int)X;
    else   
        cout << (int)X << '+';

    return 0;
}     