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
    long long int N, S[20], ans=0;
    cin >> N;
    for (int i=0; i<N; i++)
        cin >> S[i];

    
    for (int i=0; i<N; i++) {
        bool temp=0;
        for (int k=1; k<150; k++) {
            for (int j=1; j<150; j++) {
                if (S[i]==4*k*j + 3*k + 3*j) temp=1;
            }
        }
        if (!temp) ans++;
    }
    cout << ans << endl;

    return 0;
}     