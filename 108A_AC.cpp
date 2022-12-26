#include <iostream>
#include <cmath>
#include <algorithm>
#include <numeric>
#include <iomanip>
#include <string>
using namespace std;


int main()
{
    long long int K;
    cin >> K;

    if (K%2==0)
        cout << K*K/4;
    else
        cout << (K/2)*(K/2+1);


    return 0;
}     