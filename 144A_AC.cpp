#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;


int main()
{

    long long int A, B, ans=0;
    cin >> A >> B;

    if (A<10 && B<10)
        cout << A*B;
    else   
        cout << -1;
    
    cout << '\n';

    return 0;
}     