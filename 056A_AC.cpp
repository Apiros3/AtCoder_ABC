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
    string A, B;
    cin >> A >> B;

    if (A=="H" && B=="H")
        cout << "H";
    else if (A=="H")
        cout << "D";
    else if (B=="H")
        cout << "D";
    else
        cout << "H";
    

    return 0;
}     