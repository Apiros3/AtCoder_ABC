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
    int A, B;
    cin >> A >> B;

    if (A%3==0 || B%3==0 || (A+B)%3==0)
        cout << "Possible";
    else
        cout << "Impossible";
    

    return 0;
}     