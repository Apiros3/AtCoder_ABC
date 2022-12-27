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
    int a, b, c;
    cin >> a >> b >> c;

    if (b-a==c-b)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}     