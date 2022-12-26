#include <iostream>
#include <cmath>
#include <algorithm>
#include <numeric>
#include <iomanip>
#include <string>
using namespace std;


int main()
{
    long long int K, sum=0;
    cin >> K;
    for (int i=1; i<=K; i++) {
        for (int j=1; j<=K; j++) {
            for (int k=1; k<=K; k++) {
                sum+=__gcd(__gcd(i,j),k);
            }
        }
    }
    cout << sum;



    return 0;
}     