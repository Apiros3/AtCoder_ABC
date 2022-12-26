#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;


int main()
{
    long long int N, X, A[100], temp=0;
    cin >> N >> X;
    for (int i=0; i<N; i++) {
        cin >> A[i];
        temp+=A[i];
    }

    if (temp-N/2<=X) 
        cout << "Yes";
    else
        cout << "No";


    return 0;
}