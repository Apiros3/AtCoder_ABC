#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;


int main()
{
    int N, a[1000], ans=1;
    cin >> N;

    for (int i=0; i<N; i++) 
        cin >> a[i];
    
    sort(a, a+N);

    for (int i=1; i<N; i++) {
        if (a[i]!=a[i-1])
            ans++;
    }

    cout << ans;


    return 0;
}     