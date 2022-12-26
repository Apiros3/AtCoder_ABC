#include <iostream>
#include <cmath>
#include <algorithm>
#include <numeric>
#include <iomanip>
using namespace std;


int main()
{
    long long int N, S, D, X[100], Y[100], temp=0;
    cin >> N >> S >> D;

    for (int i=0; i<N; i++) {
        cin >> X[i] >> Y[i];
    }

    for (int i=0; i<N; i++) {
        if (X[i]<S && Y[i]>D) {
            cout << "Yes";
            temp++;
            break;
        }
    }
    if (temp==0)
        cout << "No";

    return 0;
}     