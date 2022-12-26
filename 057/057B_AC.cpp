#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;

    long int a[50], b[50], c[50], d[50];

    for (int i=0; i<N; i++) {
        cin >> a[i] >> b[i];
    }
    for (int j=0; j<M; j++) {
        cin >> c[j] >> d[j];
    }

    for (int i=0; i<N; i++) {
        long long int temp=pow(10,10), temp1;
        for (int j=0; j<M; j++) {
            if (abs(a[i]-c[j])+abs(b[i]-d[j])<temp) {
                temp=abs(a[i]-c[j])+abs(b[i]-d[j]);
                temp1=j;
            }
        }
        cout << temp1+1 << '\n';
    }


	return 0;
}