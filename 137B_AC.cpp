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
    long long int K, X;
    cin >> K >> X;

    for (int i=(X-K+1); i<X+K; i++)
        cout << i << " ";
    
    cout << endl;

    return 0;
}     