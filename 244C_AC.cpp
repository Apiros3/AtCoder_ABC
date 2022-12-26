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
    long long int N, S[5000], temp=1;
    cin >> N;
    cout << 1 << endl;
    fflush(stdout);
    S[0]=1;

    for (int i=0; i<N; i++) {
        cin >> S[temp];
        temp++;
        sort(S, S+temp);
        for (int j=0; j<temp; j++) {
            if ((S[j]+1)!=S[j+1]) {
                cout << S[j]+1 << endl;
                fflush(stdout);
                S[temp]=S[j]+1;
                temp++;
                break;
            }
        }
    }
    cin >> temp;

    return 0;
}     