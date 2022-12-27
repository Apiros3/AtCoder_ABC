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
    string N;
    cin >> N;
    if (N[0]=='9' || N[1]=='9')
        cout << "Yes";
    else
        cout << "No";

    return 0;
}     