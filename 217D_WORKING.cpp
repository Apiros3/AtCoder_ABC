#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;


int main()
{
    long long int L, Q, ans=0, c[200000], x[200000], arr[200000], temparr=0;
    cin >> L >> Q;

    long long int startA=0, endA=L;

    for (int i=0; i<Q; i++) {
        cin >> c[i] >> x[i];
    }
    for (int i=0; i<Q; i++) {
        if (c[i]==1) {
            arr[temparr]=x[i];
            temparr++;
        }
        else {
            
        }
    }

    return 0;
}