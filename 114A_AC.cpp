#include <iostream>
#include <cmath>
#include <algorithm>
#include <numeric>
#include <iomanip>
#include <string>
using namespace std;


int main()
{
    long long int X;
    cin >> X;
    if (X==3 || X==5 || X==7)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}     