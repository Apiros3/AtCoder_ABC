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
    int S, T, X;
    cin >> S >> T >> X;
    if (S>T) {
        if (X<T || S<=X)
            cout << "Yes";
        else
            cout << "No";
    }
    else {
    if (S<=X && X<T)
        cout << "Yes";
    else
        cout << "No";
    }



    return 0;
}     