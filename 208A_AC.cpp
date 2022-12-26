#include <iostream>
#include <cmath>
#include <algorithm>
#include <numeric>
#include <iomanip>
#include <string>
using namespace std;


int main()
{
    long double A, B;
    cin >> A >> B;

    if (A<=B && B<=6*A)
        cout << "Yes";
    else
        cout << "No";

    return 0;
}     