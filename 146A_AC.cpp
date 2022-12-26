#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;


int main()
{
    string S, str[7]={"SUN","MON","TUE","WED","THU","FRI","SAT"};
    cin >> S;

    for (int i=0; i<7; i++) {
        if (S==str[i])
            cout << 7-i;
    }

    return 0;
}     