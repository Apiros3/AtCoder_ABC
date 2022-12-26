#include <iostream>
#include <cmath>
#include <algorithm>
#include <numeric>
#include <iomanip>
#include <string>
#include <cstdio>
#include <vector>
#include <stdlib.h>
using namespace std;


int main()
{
    long long int N, K, A[200000], B[200000];
    cin >> N >> K;
    for (long int i=0; i<N; i++)
        cin >> A[i];
    for (long int i=0; i<N; i++)
        cin >> B[i];
    
    bool temp=1, temp2, temp3;

    long long int XA1 = A[0], XB1 = B[0], XA2, XB2;
    for (long int i=1; i<N; i++) {
        XA2 = A[i];
        XB2 = B[i];
    
        temp2=0, temp3=0;
        if (abs(XA2-XA1)<=K || abs(XA2-XB1)<=K) 
            temp2=1;
        if (abs(XB2-XA1)<=K || abs(XB2-XB1)<=K) 
            temp3=1;

        if (temp2) 
            XA1=XA2;
        else
            XA1=XB2;
        if (temp3)
            XB1=XB2;
        else
            XB1=XA2;
        
        if (temp2==0 && temp3==0) {
            temp=0;
            break;
        }
    }
    if (temp)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;


    return 0;
}     