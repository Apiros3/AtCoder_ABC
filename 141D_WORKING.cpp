#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;


int main()
{
    long long int N, M, ans=0, A[100000];

    cin >> N >> M;

    for (int i=0; i<N; i++) {
        cin >> A[i];
    }

    sort(A, A+N);

    while (M!=0) {
        for (int i=N-1; i>0; i--) {
            while (A[i] >= A[i-1]) {
                if (M==0) 
                    break;
                A[i]/=2;
                M--;
            }
        }
    }

    for (int i=0; i<N; i++) 
        cout << A[i] << " ";

    cout << ans << '\n';

    return 0;
}