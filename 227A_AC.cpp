#include <iostream>
#include <cmath>
#include <algorithm>
#include <numeric>
#include <iomanip>
using namespace std;


int main()
{
    long long int N, K, A;
    cin >> N >> K >> A;

    if ((A+K-1)%N==0) 
        cout << N;
    else 
        cout << (A+K-1)%N;


    return 0;
}     