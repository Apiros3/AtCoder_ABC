#include <iostream>
#include <cmath>
#include <algorithm>
#include <numeric>
#include <iomanip>
#include <string>
using namespace std;


int main()
{
    long long int N, M, A[100], sum=0, ans=0;
    cin >> N >> M;
    for (int i=0; i<N; i++) {
        cin >> A[i];
        sum+=A[i];
    }
    for (int i=0; i<N; i++) {
        if ((long double)sum/(4*M)<=A[i]) 
            ans++;
    }
    if (ans>=M)
        cout << "Yes";
    else
        cout << "No";
    

    return 0;
}     