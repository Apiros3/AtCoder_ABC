#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;


int main()
{
    long long int N, ans=0, a[1000];

    cin >> N;
    
    for (int i=0; i<N; i++) {
        cin >> a[i];
        if (a[i]>=10) 
            ans+=a[i]-10;
    }

    cout << ans;

    return 0;
}