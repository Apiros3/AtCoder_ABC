#include <iostream>
#include <cmath>
#include <algorithm>
#include <numeric>
#include <iomanip>
#include <string>
using namespace std;


int main()
{
    long long int N, C0=0, C1=0, C2=0, C3=0;
    cin >> N;
    string S[100000];
    for (int i=0; i<N; i++) cin >> S[i];

    for (int i=0; i<N; i++) {
        if (S[i]=="AC") C0++;
        else if (S[i]=="WA") C1++;
        else if (S[i]=="TLE") C2++;
        else C3++;
    }
    cout << "AC x " << C0 << '\n';
    cout << "WA x " << C1 << '\n';
    cout << "TLE x " << C2 << '\n';
    cout << "RE x " << C3 << '\n';

    return 0;
}     