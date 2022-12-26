#include <iostream>
#include <cmath>
#include <algorithm>
#include <numeric>
#include <iomanip>
#include <string>
using namespace std;


int main()
{
    long long int A, B, C, D;
    cin >> A >> B >> C >> D;
    
    long long int max = B*D;
    if (A*D>max) max=A*D;
    if (A*C>max) max=A*C;
    if (B*C>max) max=B*C;

    cout << max;


    return 0;
}     