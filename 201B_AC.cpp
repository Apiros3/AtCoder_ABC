#include <iostream>
#include <cmath>
#include <algorithm>
#include <numeric>
#include <iomanip>
#include <string>
#include <cstdio>
using namespace std;


int main()
{
    long long int N, T[1000], arr[1000], temp;
    string S[1000];
    cin >> N;
    for (int i=0; i<N; i++) {
        cin >> S[i] >> T[i];
        arr[i] = T[i];
    }
    sort(arr, arr+N, greater<long int>());
    temp=arr[1];

    for (int i=0; i<N; i++) {
        if (temp==T[i]) {
            cout << S[i];
            break;
        }
    }


    return 0;
}     