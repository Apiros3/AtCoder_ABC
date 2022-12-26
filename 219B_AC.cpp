#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;


int main()
{
    string S1, S2, S3, T;
    cin >> S1 >> S2 >> S3 >> T;

    for (int i=0; i<T.length(); i++) {
        if (T[i]=='1')
            cout << S1;
        else if (T[i]=='2')
            cout << S2;
        else
            cout << S3;
    }

    return 0;
}     