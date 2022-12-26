#include <iostream>
#include <cmath>
#include <algorithm>
#include <numeric>
#include <iomanip>
#include <string>
using namespace std;


int main()
{
    long long int X, Y;
    cin >> X >> Y;

    bool temp=0;
    for (int i=0; i<=X; i++) {
        if (2*i+4*(X-i)==Y)
            temp=1;
    }
    if (temp) cout << "Yes";
    else cout << "No";

    return 0;
}     