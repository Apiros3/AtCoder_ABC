#include <iostream>
#include <cmath>
#include <algorithm>
#include <numeric>
#include <iomanip>
#include <vector>
#include <cstring>
using namespace std;

long long int F[1000000];

int main()
{
    long long int N, X, temp=0, temp2=0, temp4=0;
    string S;
    cin >> N >> X >> S;

    long long int temp3=X;
    for (int i=0; i<70; i++) {
        if (temp3>1) {
            temp3/=2;
            temp2++;
        }
    }

    for (long int i=0; i<N; i++) {
        if (S[i]=='R' || S[i]=='L') {
            F[temp+temp4]=S[i];
            temp++;
        }
        if (S[i]=='U') {
            if (temp==0 && temp2>0) {
                F[temp+temp4]=S[i];
                temp2-=1;
                temp4++;
            }
            else if (temp!=0) {
                temp--;
            }
        }
    }
    for (long int i=0; i<temp+temp4; i++) {
        if (F[i]==85) 
            X/=2;
        else if (F[i]==82)
            X=2*X+1;
        else
            X=2*X;
    }

    cout << X;
    

    return 0;
}     