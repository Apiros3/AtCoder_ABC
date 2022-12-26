#include <iostream>
#include <cmath>
#include <algorithm>
#include <numeric>
#include <iomanip>
using namespace std;


int main()
{
    long long int N, a[100], ans=0;
    cin >> N;
    for (int i=0; i<N; i++) 
        cin >> a[i];

    sort(a, a+N, greater<int>());

    for (int i=0; i<N; i++) {
        if (i%2==0) 
            ans+=a[i];
        else
            ans-=a[i];
    }
    cout << ans;

    return 0;
}     