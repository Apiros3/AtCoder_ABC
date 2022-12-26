#include <iostream>
#include <cmath>
#include <algorithm>
#include <numeric>
#include <iomanip>
#include <string>
using namespace std;


int main()
{
    long long int N, temp=0;
    string S[200000];
    cin >> N;
    for (int i=0; i<N; i++)
        cin >> S[i];
    sort(S, S+N);

    for (int i=1; i<N; i++) {
        if (S[i]==S[i-1])
            temp++;
    }
    cout << N-temp;

    return 0;
}     