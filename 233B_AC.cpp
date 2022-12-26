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
    long long int L, R;
    string S;
    cin >> L >> R >> S;

    if ((L+R)%2==0) {
        for (int i=L; i<(R+L)/2; i++)
            swap(S[i-1],S[R-(i-L)-1]);
    }
    else {
        for (int i=L; i<=(R+L)/2; i++)
            swap(S[i-1],S[R-(i-L)-1]);
    }
    for (int i=0; i<S.length(); i++)
        cout << S[i];
    


    return 0;
}     