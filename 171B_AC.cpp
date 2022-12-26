#include <iostream>
#include <cmath>
#include <algorithm>
#include <numeric>
#include <iomanip>
using namespace std;


int main()
{
    long long int N, K, p[1000];
    cin >> N >> K;
    for (int i=0; i<N; i++) 
        cin >> p[i];
    
    sort(p, p+N);

    long long int ans=0;
    for (int i=0; i<K; i++) 
        ans+=p[i];

    cout << ans;

    return 0;
}     