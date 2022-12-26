#include <iostream>
#include <cmath>
#include <algorithm>
#include <numeric>
#include <iomanip>
#include <vector>
using namespace std;


int main()
{
    long long int X1, Y1, X2, Y2, temp=0;
    cin >> X1 >> Y1 >> X2 >> Y2;

    for (long long int i=X1-5; i<=X1+5; i++) {
        for (long long int j=Y1-5; j<=Y1+5; j++) {
            if (pow(X1-i,2)+pow(Y1-j,2)==5 && pow(X2-i,2)+pow(Y2-j,2)==5) {
                temp++;
            }
        }
    }
    if (temp==0)
        cout << "No";
    else
        cout << "Yes";


    return 0;
}     