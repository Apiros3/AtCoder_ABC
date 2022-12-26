#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main()
{
    int W, H, N;
    cin >> W >> H >> N;
    int x[100], y[100], a[100];
    int a1 = 0, a2 = W, a3 = 0, a4 = H;

    for (int i=0; i<N; i++) {
        cin >> x[i] >> y[i] >> a[i];
    }

    for (int i=0; i<N; i++) {
        if (a[i]==1 && x[i]>a1) 
            a1=x[i]; 
        if (a[i]==2 && x[i]<a2)
            a2=x[i];
        if (a[i]==3 && y[i]>a3)
            a3=y[i];
        if (a[i]==4 && y[i]<a4)
            a4=y[i];
    }

    if (a4-a3>0 && a2-a1>0) 
        cout << (a4-a3)*(a2-a1);
    else
        cout << 0;

    cout << '\n';

	return 0;
}