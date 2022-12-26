#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

long long int B[70000];

int main()
{
    long long int N, M, temp=0;
    cin >> N >> M;

    for (int i=0; i<N*M; i++) {
        cin >> B[i];
    }

    for (int i=0; i<N; i++) {
        for (int j=1; j<M; j++) {
            if (B[M*i+j]-B[M*i+j-1] != 1) 
                temp++;
        }
    }
    for (int i=0; i<M; i++) {
        for (int j=1; j<N; j++) {
            if (B[j*M+i]-B[(j-1)*M+i] != 7)
                temp++;
        }
    }
    if (B[0]%7+M > 8)
        temp++;
    if (B[0]%7==0 && M!=1) 
        temp++;
    
    if (temp==0) 
        cout << "Yes";
    else   
        cout << "No";

    cout << '\n';

    return 0;
}