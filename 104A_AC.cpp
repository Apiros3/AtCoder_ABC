#include <iostream>
#include <cmath>
#include <algorithm>
#include <numeric>
#include <iomanip>
#include <string>
using namespace std;


int main()
{
    long long int R;
    cin >> R;
    if (R<1200)
        cout << "ABC";
    else if (R<2800)
        cout << "ARC";
    else
        cout << "AGC";


    return 0;
}     