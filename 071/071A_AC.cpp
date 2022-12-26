#include <iostream>
#include <cmath>
#include <algorithm>
#include <numeric>
#include <iomanip>
#include <string>
using namespace std;


int main()
{
    long long int X, A, B;
    cin >> X >> A >> B;

    if (abs(X-A)>abs(X-B))
        cout << "B";
    else
        cout << "A";


    return 0;
}     