#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;



int main()
{
    long long int D, N, temp=0;
    cin >> D >> N;

    if (N!=100) 
        cout << N * (long long int)pow(100,D) << '\n';
    else 
        cout << (N+1) * (long long int)pow(100,D)  << '\n';
        

    return 0;
}