#include <iostream>
#include <cmath>
#include <algorithm>
#include <numeric>
#include <iomanip>
#include <string>
using namespace std;


int main()
{
    long long int X, prime[100000], temp2=1;
    cin >> X;
    prime[0]=2;
    if (X==2) {
        cout << 2;
    }
    else {
    for (int i=3; i<100004; i+=2) {
        bool temp=1;
        for (int j=0; j<temp2; j++) {
            if (i%prime[j]==0) 
                temp=0;
        }
        if (temp) {
            prime[temp2]=i;
            if (i>=X) {
                cout << i;
                break;
            }
            temp2++;
        }
    }
    }

    return 0;
}     