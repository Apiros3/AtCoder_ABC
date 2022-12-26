#include <iostream>
#include <cmath>
#include <algorithm>
#include <numeric>
#include <iomanip>
#include <string>
using namespace std;


int main()
{
    long long int N, K, A[10000], temp2=0, ans=1;
    cin >> N >> K;
    for (int i=0; i<K; i++) {
        int temp;
        cin >> temp;
        for (int j=0; j<temp; j++) {
            cin >> A[temp2+j];
        }
        temp2+=temp;
    }
    sort(A, A+temp2, greater<long long int>());
    for (int i=1; i<temp2; i++) {
        if (A[i]!=A[i-1])
            ans++;
    }    
    cout << N-ans;


    return 0;
}     