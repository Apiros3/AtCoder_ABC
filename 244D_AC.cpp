#include <iostream>
#include <cmath>
#include <algorithm>
#include <numeric>
#include <iomanip>
#include <string>
#include <cstdio>
using namespace std;


int main()
{
    char S1, S2, S3, T1, T2, T3;
    cin >> S1 >> S2 >> S3 >> T1 >> T2 >> T3;

    if (S1==T1 && S2!=T2)
        cout << "No" << endl;
    else if (S3==T3 && S1!=T1)
        cout << "No" << endl;
    else if (S2==T2 && S1!=T1)
        cout << "No" << endl;
    else
        cout << "Yes" << endl;
    
    return 0;
}     