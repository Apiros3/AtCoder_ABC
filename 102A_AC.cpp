#include <iostream>
#include <cmath>
#include <algorithm>
#include <numeric>
#include <iomanip>
#include <string>
using namespace std;


int main()
{
    long long int N;
    cin >> N;

    if (N%2==0)
        cout << N;
    else
        cout << 2*N;

    return 0;
}     