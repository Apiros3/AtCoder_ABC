#include <iostream>
#include <cmath>
#include <algorithm>
#include <numeric>
#include <iomanip>
using namespace std;


int main()
{
    long long int A, B;
    cin >> A >> B;

    if ((A*B)%2==0)
        cout << "No";
    else   
        cout << "Yes";

    
    return 0;
}     