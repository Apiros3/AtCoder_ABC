#include <iostream>
#include <cmath>
#include <algorithm>
#include <numeric>
#include <iomanip>
#include <string>
using namespace std;


int main()
{
    long long int X, temp=0, start=100;
    cin >> X;
    while(start<X) {
        start=start+start/100;
        temp++;
    }
    cout << temp;

    return 0;
}     