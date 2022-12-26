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
    string S1, S2;
    cin >> S1 >> S2;

    bool temp=1;
    for (int i=0; i<3; i++) {
        if (S1[i]!=S2[2-i])
            temp=0;
    }
    if (temp)
        cout << "YES";
    else
        cout << "NO";
    


    return 0;
}     