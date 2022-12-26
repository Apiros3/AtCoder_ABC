#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;


int main()
{
    long long int N, P, a[100000];

    cin >> N >> P;
    for (int i=0; i<N; i++) 
        cin >> a[i];

    sort(a, a+N);

    for (int i=0; i<N; i++) {
        if (P<=a[i]) {
            cout << i;
            break;
        }
        else if (i==N-1)
            cout << N;
    }

    return 0;
}