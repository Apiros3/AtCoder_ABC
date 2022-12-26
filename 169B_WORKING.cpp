#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

long long int A[100000];

int main()
{
    long long int N, total=1, temp=0, temp1=0;
    cin >> N;

    for (int i=0; i<N; i++) {
        cin >> A[i];
        if (A[i] == 0) 
            temp++;
    }

    if (temp==1) 
        cout << 0 << '\n';
    else {
        for (int i=0; i<N; i++) {
            int k=0;
            for (int j=0; j<20; j++) {
                long long int T1=total, T2=A[i];
                T1/=10;
                T2/=10;
                if (T1>0) 
                    k++;
                if (T2>0)
                    k++;
            }
            if (k>20) {
                cout << -1 << '\n' << k;
                temp1++;
                break;
            }

            total*=A[i];
            if (total>(long long int)pow(10,18)) {
                cout << -1 << '\n';
                temp1++;
                break;
            }
        }
        if (temp1==0) {
            cout << total << '\n';
        }
    }


    return 0;
}