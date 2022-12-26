#include <iostream>
#include <cmath>
#include <algorithm>
#include <numeric>
#include <iomanip>
#include <vector>
using namespace std;


int main()
{
    long long int A, B, C, D, prime[100], temp=0;
    cin >> A >> B >> C >> D;

    for (int i=2; i<=200; i++) {
        bool test = 1;
        for (int j=2; j<i; j++) {
            if (i%j==0)
                test=0; 
        }
        if (test) {
            prime[temp]=i;
            temp++;
        }
    }

    bool test2=0;
    for (int i=A; i<=B; i++) {
        for (int j=C; j<=D; j++) {
            for (int k=0; k<temp; k++) {
                if (i+j == prime[k]) {
                    test2=1;
                }
            }
        }
    }

    if (test2)
        cout << "Takahashi";
    else
        c



    return 0;
}     