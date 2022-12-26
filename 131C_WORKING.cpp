#include <iostream>
#include <cmath>
#include <algorithm>
#include <numeric>
using namespace std;


int main()
{
    long long int A, B, C, D, LCM, temp1, temp2, temp=0;
    cin >> A >> B >> C >> D;
    LCM = lcm(A,B);

    if (A%C==0) 
        temp1=A/C+1;
    else 
        temp1=A/C;
    if (B%C==0)
        temp2=B/C+1;
    else   
        temp2=B/C;
    temp+=(temp2-temp1);

    if (A%D==0) 
        temp1=A/D+1;
    else 
        temp1=A/D;
    if (B%D==0)
        temp2=B/D+1;
    else   
        temp2=B/D;
    temp+=(temp2-temp1);

    if (A%LCM==0) 
        temp1=A/LCM+1;
    else 
        temp1=A/LCM;
    if (B%LCM==0)
        temp2=B/LCM+1;
    else   
        temp2=B/LCM;
    temp+=(temp2-temp1);


    return 0;
}     