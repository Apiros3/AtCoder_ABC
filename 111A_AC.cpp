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
    for (int i=0; i<3; i++) {
        if (N[i]=='1')
            N[i]='9';
        else if (N[i]=='9')
            N[i]='1';
    }
    cout << N[0] << N[1] << N[2];

    return 0;
}     