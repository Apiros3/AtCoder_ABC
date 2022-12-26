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
    for (int i=0; i<S.length(); i++) {
        if (i!=3)
            cout << S[i];
        else
            cout << 8;
    }


    return 0;
}     