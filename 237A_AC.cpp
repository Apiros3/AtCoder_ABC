#include <iostream>
#include <cmath>
#include <algorithm>
#include <numeric>
#include <iomanip>
#include <string>
using namespace std;


int main()
{
    long long int N;
    cin >> N;

    if (-pow(2,31)<=N && N<pow(2,31))
        cout << "Yes";
    else
        cout << "No";

    return 0;
}     