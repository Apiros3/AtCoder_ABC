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
    if (A+B<10)
        cout << A+B;
    else    
        cout << "error";

    return 0;
}     