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
    long long int r, D, X;
    cin >> r >> D >> X;

    for (int i=0; i<10; i++) {
        X=r*X-D;
        cout << X << endl;
    }


    return 0;
}     