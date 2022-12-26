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

    bool temp=1;

    for (int i=0; i<S.length(); i++) {
        if (i%2==0 && S[i]<96)
            temp=0;
        if (i%2==1 && S[i]>96)
            temp=0;
    }

    if (temp)
        cout << "Yes" << endl;
    else    
        cout << "No" << endl;

    return 0;
}     