#include <iostream>
#include <cmath>
#include <algorithm>
#include <numeric>
#include <iomanip>
using namespace std;


int main()
{
    long long int N, A[200];
    cin >> N;
    for (int i=0; i<N; i++) 
        cin >> A[i];

    bool temp=0;
    for (int i=0; i<200; i++) {
        for (int j=0; j<N; j++) {
            if (A[j]%2==0) {
                A[j]/=2;
            }
            else {
                temp=1;
                break;
            }
        }
        if (temp) {
            cout << i;
            break;
        }
    }
    

    return 0;
}     