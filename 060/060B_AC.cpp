#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main()
{
    int A, B, C, temp=0;
    cin >> A >> B >> C;

    for (int i=1; i<101; i++) {
        if ((i*A)%B==C) {
            temp++;
        }
    }

    if (temp==0) 
        cout << "NO" << '\n';
    else
        cout << "YES" << '\n';

	return 0;
}