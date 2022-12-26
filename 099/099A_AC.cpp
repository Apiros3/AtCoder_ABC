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

    if (N==1)
        cout << "Hello World";
    else {
        long long int A, B;
        cin >> A >> B;
        cout << A+B;
    }

    return 0;
}     