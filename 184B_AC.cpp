#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;


int main()
{
    long long int N, X;
    string S;
    cin >> N >> X >> S;

    for (int i=0; i<N; i++) {
        if (S[i]=='o')
            X++;
        else if (S[i]=='x' && X!=0)
            X--;
    }

    cout << X;
    

    return 0;
}     