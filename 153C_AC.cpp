#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int A[200000];

int main()
{
    long long int N, K, temp=0, total=0;
    cin >> N >> K;

    for (int i=0; i<N; i++) {
        cin >> A[i];
    }

    sort(A, A+N);

    for (int i=0; i<N-K; i++) {
        total+=A[i];
    }

    cout << total << '\n';


    return 0;
}