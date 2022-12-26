#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;


int main()
{
    long long int N, ans=0, A[100000], B[100000];
    cin >> N;

    for (int i=0; i<N; i++) {
        cin >> A[i];
    }
    for (int i=0; i<N; i++) {
        cin >> B[i];
    }
    for (int i=0; i<N; i++) {
        ans+=A[i]*B[i];
    }


    if (ans==0) 
        cout << "Yes";
    else
        cout << "No";
    



    return 0;
}     