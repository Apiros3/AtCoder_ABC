#include <iostream>
#include <cmath>
#include <algorithm>
#include <numeric>
#include <iomanip>
using namespace std;


int main()
{
    long double H, temp;
    cin >> H;
    cout << setprecision(9) << sqrt((long double)H*(12800000+H));

    return 0;
}     