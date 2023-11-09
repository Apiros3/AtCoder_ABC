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
    int S[3];
    cin >> S[0] >> S[1] >> S[2];
    sort(S, S+3);

    cout << S[2]*10 + S[0] + S[1];

    return 0;
}     