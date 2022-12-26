#include <iostream>
#include <cmath>
#include <algorithm>
#include <numeric>
#include <iomanip>
#include <string>
using namespace std;


int main()
{
    long long int N, A[100];
    cin >> N;
    for (int i=0; i<N; i++)
        cin >> A[i];

    bool temp=1;
    for (int i=0; i<N; i++) {
        if (A[i]%2==0 && A[i]%3!=0 && A[i]%5!=0)
            temp=0; 
    }
    if (temp)
        cout << "APPROVED";
    else
        cout << "DENIED";

    return 0;
}     