#include <iostream>
#include <cmath>
#include <algorithm>
#include <numeric>
#include <iomanip>
#include <string>
using namespace std;


int main()
{
    long long int A, B, C;
    cin >> A >> B >> C;

    if (A+B>=C)
        cout << "Yes";
    else
        cout << "No";


    return 0;
}     