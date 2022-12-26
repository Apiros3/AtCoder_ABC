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
    long long int N, M, A[101], C[201], B[101];
    cin >> N >> M;
    for (int i=0; i<=N; i++)
        cin >> A[N-i];
    for (int i=0; i<=N+M; i++)
        cin >> C[N+M-i];
    
    long long int temp;
    for (int i=0; i<=M; i++) {
        temp=C[i]/A[0];
        B[i]=temp;
        for (int j=0; j<=N; j++) {
            C[i+j]-=(A[j]*temp);
        }
    }
  
    for (int i=0; i<=M; i++)
        cout << B[M-i] << " ";
    
    cout << endl;



    return 0;
}     