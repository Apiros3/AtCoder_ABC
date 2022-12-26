#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;


int main()
{
    long long int N, H[100000];
    cin >> N;

    for (int i=0; i<N; i++) {
        cin >> H[i];
    }

    for (int i=1; i<N; i++) {
        if (H[i]<=H[i-1]) {
            
            cout << H[i-1];
            break;
        }
        else if (i==N-1)
            cout << H[i];
    }

    return 0;
}               