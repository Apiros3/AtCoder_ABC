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
    string S1, S2, S3;
    cin >> S1 >> S2 >> S3;

    cout << (char)(S1[0]-32) << (char)(S2[0]-32) << (char)(S3[0]-32);

    return 0;
}     