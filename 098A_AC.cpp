#include <iostream>
#include <cmath>
#include <algorithm>
#include <numeric>
#include <iomanip>
#include <string>
using namespace std;


int main()
{
    long long int A, B;
    cin >> A >> B;

    cout << max(A+B,max(A-B,A*B));

    return 0;
}     