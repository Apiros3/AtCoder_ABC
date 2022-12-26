#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;


int main()
{
    long long int A, B, C, temp=0;
    cin >> A >> B >> C;

    for (int i=A; i<=B; i++) {
        if (i%C==0) {
            cout << i;
            temp++;
            break;
        }
    }
    if (temp==0)
        cout << -1;


    return 0;
}