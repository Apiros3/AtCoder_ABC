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
    int ans=0;
    for (int i=0; i<4; i++) {
        if (S[i]=='+')
            ans++;
        else
            ans--;
    }
    cout << ans;

    return 0;
}     