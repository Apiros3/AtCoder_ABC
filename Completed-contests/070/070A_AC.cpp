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

    if (N[0]==N[2])
        cout << "Yes";
    else
        cout << "No";

    return 0;
}     