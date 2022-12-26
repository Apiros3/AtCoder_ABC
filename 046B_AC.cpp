#include <iostream>
#include <cmath>
#include <algorithm>
#include <numeric>
#include <iomanip>
using namespace std;


int main()
{
    long long int N, K, ans=1;
    cin >> N >> K;
    
    cout << (long long int)pow(K-1,N-1)*K;
        


    return 0;
}     