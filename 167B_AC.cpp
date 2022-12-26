#include <iostream>
#include <cmath>
#include <algorithm>
#include <numeric>
#include <iomanip>
#include <string>
using namespace std;


int main()
{
    long long int A, B, C, K;
    cin >> A >> B >> C >> K;

    if (K<=A) 
        cout << K;
    else if (K<=A+B) 
        cout << A;
    else
        cout << A-(K-A-B);

    return 0;
}     