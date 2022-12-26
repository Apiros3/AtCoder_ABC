#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;


int main()
{

    int ans=0;
    string A[4];
    cin >> A[0] >> A[1] >> A[2] >> A[3];

    for (int i=0; i<4; i++) {
        if (A[i]=="3B")
            ans++;
        else if (A[i]=="HR")
            ans+=2;
        else if (A[i]=="2B")
            ans+=3;
        else   
            ans+=4;
    }

    if (ans==10) 
        cout << "Yes";
    else
        cout << "No";




    return 0;
}     