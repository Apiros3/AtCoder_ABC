#include <iostream>
#include <cmath>
#include <algorithm>
#include <numeric>
#include <iomanip>
#include <string>
using namespace std;


int main()
{
    long long int K, A, B, temp0, temp1;
    cin >> K >> A >> B;

    if (A%K==0) temp0=A/K-1;
    else temp0=A/K;
    temp1=B/K;

    if (temp1-temp0>0) cout << "OK";
    else cout << "NG";
        
    return 0;
}     