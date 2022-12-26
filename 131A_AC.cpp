#include <iostream>
#include <cmath>
#include <algorithm>
#include <numeric>
#include <iomanip>
#include <string>
using namespace std;


int main()
{
    string S;
    cin >> S;
    bool temp=1;
    for (int i=1; i<4; i++) {
        if (S[i]==S[i-1])
            temp=0;
    }
    if (temp)
        cout << "Good";
    else
        cout << "Bad";

    return 0;
}     