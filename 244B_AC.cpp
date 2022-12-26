#include <iostream>
#include <cmath>
#include <algorithm>
#include <numeric>
#include <iomanip>
#include <string>
#include <cstdio>
using namespace std;


int main()
{
    long long int N, R=0, X=0, Y=0;
    string T;
    cin >> N >> T;

    for (long int i=0; i<N; i++) {
        if (T[i]=='R') 
            R=(R+1)%4;
        else {
            if (R==0)
                X++;
            else if (R==1)
                Y--;
            else if (R==2)
                X--;
            else
                Y++;
        }
    }

    cout << X << " " << Y << endl;
    


    return 0;
}     