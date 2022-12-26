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
        cout << 0.5;
    else 
        cout << (long double)(N/2+1)/N;

    return 0;
}     