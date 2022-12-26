#include <iostream>
#include <cmath>
#include <algorithm>
#include <numeric>
#include <iomanip>
using namespace std;


int main()
{
    string S, temp;
    long long int A[200000];
    cin >> S;

    for (int i=0; i<S.length(); i++)
        A[i] = S[i];
    
    sort(A, A+S.length());

    for (int i=0; i<S.length(); i++) {
        temp=A[i];
        cout << temp;
    }


    return 0;
}     