#include <iostream>
#include <cmath>
#include <algorithm>
#include <numeric>
#include <iomanip>
#include <string>
using namespace std;


int main()
{
    long long int a, b, c, d, e, k;
    cin >> a >> b >> c >> d >> e >> k;
    if (e-a<=k)
        cout << "Yay!";
    else
        cout << ":(";

    return 0;
}     