#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int f(int x) {
    return x*x+2*x+3;
}

int main()
{
    long long int t;
    cin >> t;

    cout << f(f(f(t)+t)+f(f(t)));


    return 0;
}