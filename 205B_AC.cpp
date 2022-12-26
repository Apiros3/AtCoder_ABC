#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;


int main()
{

    long long int N, A[1000], ans=0;

    cin >> N;
    for (int i=0; i<N; i++) 
        cin >> A[i];
    
    sort(A, A+N);
    for (int i=0; i<N; i++) {
        if (A[i]!=i+1) 
            ans++;
    }
    if (ans==0) 
        cout << "Yes";
    else   
        cout << "No";


    return 0;
}     