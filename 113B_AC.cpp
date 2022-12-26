#include <iostream>
using namespace std;

int main()
{
    double H[1000];
    int N, T, A;
    cin >> N >> T >> A;

    for (int i=0; i<N; i++) {
        cin >> H[i];
        H[i]=T-(double)H[i]*0.006;
    }

    double temp, temp1 = 1000000;

    for (int i=0; i<N; i++) {
        if (abs(H[i]-A) < temp1) {
            temp=i;
            temp1=(double)abs(H[i]-A);
        } 
    }
    
    cout << temp+1 << '\n';


	return 0;
}