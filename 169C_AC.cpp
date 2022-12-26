#include <iostream>
#include <cmath>
#include <algorithm>
#include <numeric>
#include <iomanip>
#include <string>
using namespace std;


int main()
{
    long long int A;
    long double B;
    cin >> A >> B;
    B*=100;
    long long int temp=round(B);

    cout << A*temp/(long long int)100;


    return 0;
}     