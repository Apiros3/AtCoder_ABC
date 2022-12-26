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
    long long int N, K, X, Y;
    cin >> N >> K >> X >> Y;

    if (N<=K)
        cout << N*X;
    else
        cout << K*X + (N-K)*Y;
    

    return 0;
}     