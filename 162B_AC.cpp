#include <iostream>
#include <cmath>
#include <algorithm>
#include <numeric>
#include <iomanip>
#include <string>
using namespace std;


int main()
{
    long long int N, ans=0;
    cin >> N;
    for (long long int i=0; i<=N; i++) {
        if (i%3!=0 && i%5!=0) 
            ans+=i;
    }
    cout << ans << '\n';

    return 0;
}     