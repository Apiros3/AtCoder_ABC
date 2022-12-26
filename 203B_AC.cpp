#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;


int main()
{
    long long int N, K;
    cin >> N >> K;

    cout << N*(N+1)*K*50+K*(K+1)*N/2;

    return 0;
}