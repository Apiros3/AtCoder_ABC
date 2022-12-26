#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;


int main()
{
    int N, A, B;
    cin >> N >> A >> B;

    if (N*A<B)
        cout << N*A;
    else   
        cout << B;


    return 0;
}     