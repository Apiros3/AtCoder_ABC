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
    string S;
    cin >> S;
    if (10*(S[5]-48)+S[6]-48<=4)
        cout << "Heisei";
    else    
        cout << "TBD";


    return 0;
}     