#include <iostream>
#include <cmath>
#include <algorithm>
#include <numeric>
#include <iomanip>
#include <string>
using namespace std;


int main()
{
    long long int V, T, S, D;
    cin >> V >> T >> S >> D;

    if (V*T>D || V*S<D)
        cout << "Yes";
    else
        cout << "No";

    return 0;
}     