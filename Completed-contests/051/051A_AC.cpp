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
    string S;
    cin >> S;

    for (int i=0; i<19; i++) {
        if (i==5 || i==13)
            cout << " ";
        else
            cout << S[i];
    }
    

    return 0;
}     