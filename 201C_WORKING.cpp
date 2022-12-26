#include <iostream>
#include <cmath>
#include <algorithm>
#include <numeric>
#include <iomanip>
#include <vector>
using namespace std;


int main()
{
    string S;
    cin >> S;

    int ans=0;

    for (int i=0; i<10000; i++) {
        int X=i, arr[4];
        for (int j=0; j<4; j++) {
            arr[3-i]=X%10;
            X/10;
        }
        for (int j=0; j<10; j++) {
            int temp=0;
            if (S[j]==arr[0] || S[j]==arr[1] || S[j]==arr[2] || S[j]==arr[3])
                temp=1;
        }


    }


    return 0;
}     