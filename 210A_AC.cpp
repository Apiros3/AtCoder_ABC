#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;


int main()
{
    int N, A, X, Y;
    cin >> N >> A >> X >> Y;

    if (N<=A)
        cout << X*N;
    else
        cout << X*A+Y*(N-A);

    return 0;
}     