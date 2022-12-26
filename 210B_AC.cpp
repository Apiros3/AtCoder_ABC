#include <iostream>
#include <cmath>
#include <algorithm>
#include <numeric>
#include <iomanip>
using namespace std;


int main()
{
    long long int N;
    string S;
    cin >> N >> S;

    for (int i=0; i<N; i++) {
        if (S[i]=='1') {
            if (i%2==0) 
                cout << "Takahashi";
            else
                cout << "Aoki";
            break;
        }
    }

    return 0;
}     