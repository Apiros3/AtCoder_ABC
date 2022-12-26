#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;


int main()
{
    long long int A, B, a=0, b=0;
    cin >> A >> B;

    for (int i=0; i<3; i++) {
        a+=(A%10);
        b+=(B%10);
        A/=10;
        B/=10;
    }

    if (a>=b) 
        cout << a;
    else  
        cout << b;


    return 0;
}