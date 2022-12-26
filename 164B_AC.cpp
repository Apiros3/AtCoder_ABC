#include <iostream>
#include <cmath>
#include <algorithm>
#include <numeric>
#include <iomanip>
#include <string>
using namespace std;


int main()
{
    long long int A, B, C, D;
    cin >> A >> B >> C >> D;

    while (A>0 && C>0) {
        A-=D;
        C-=B;
        if (C<=0) cout << "Yes";
        else if (A<=0) cout << "No";
    }

    return 0;
}     