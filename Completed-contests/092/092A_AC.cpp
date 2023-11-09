#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;


int main()
{
    int A, B, C, D, temp=0;
    cin >> A >> B >> C >> D;

    if (A>B)
        temp+=B;
    else
        temp+=A;
    if (C>D)
        temp+=D;
    else   
        temp+=C;
    
    cout << temp;

    return 0;
}     