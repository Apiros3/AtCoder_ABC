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
    if (S[0]+S[1]+S[2]==294)
        cout << "Yes";
    else
        cout << "No";


    return 0;
}     