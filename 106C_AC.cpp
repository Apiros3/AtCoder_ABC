#include <iostream>
#include <cmath>
#include <algorithm>
#include <numeric>
#include <iomanip>
using namespace std;


int main()
{
    string S;
    long long int K;
    cin >> S >> K;
    
    for (int i=0; i<100; i++) {
        if (S[i]!='1') {
            cout << S[i];
            break;
        }
        if (K==i+1) {
            cout << 1;
            break;
        }
    }

    return 0;
}     