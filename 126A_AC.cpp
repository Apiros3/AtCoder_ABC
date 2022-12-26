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
    int N, K;
    string S;
    cin >> N >> K >> S;

    S[K-1]=S[K-1]+32;
    cout << S;

    return 0;
}     