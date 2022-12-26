#include <iostream>
#include <cmath>
#include <algorithm>
#include <numeric>
#include <iomanip>
#include <string>
using namespace std;


int main()
{
    string N;
    cin >> N;
    long long int X = 0;

    for (int i=0; i<N.length(); i++) {
        X+=N[i]-48;
    }
    if (X%9==0)
        cout << "Yes";
    else
        cout << "No";

    return 0;
}     