#include <iostream>
#include <cmath>
#include <algorithm>
#include <numeric>
#include <iomanip>
#include <vector>
using namespace std;


int main()
{
    long long int A, B, C, X, Y, max, arr[200000];
    cin >> A >> B >> C >> X >> Y;
    if (X<Y)
        max = Y;
    else
        max = X;

    for (long long int i=0; i<=2*max; i++) {
        if (i%2==0) {
            arr[i] = i*C+(X-i/2)*A+(Y-i/2)*B;
            if (2*X<i)
                arr[i]-=(X-i/2)*A;
            if (2*Y<i)
                arr[i]-=(Y-i/2)*B;            
        }
        else {
            arr[i] = i*C+(X-i/2+1)*A+(Y-i/2+1)*B;
            if (X-i/2+1<0)
                arr[i]-=(X-i/2+1)*A;
            if (Y-i/2+1<0)
                arr[i]-=(Y-i/2+1)*B;
        }
    }
    
    sort(arr, arr+(2*max+1));

    cout << arr[0];


    return 0;
}     