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
    int A, B, C, D, temp=0;
    cin >> A >> B >> C >> D;
    
    if (abs(A-C)<=D || (abs(A-B)<=D && abs(B-C)<=D))
        cout << "Yes";
    else
        cout << "No";


    return 0;
}     