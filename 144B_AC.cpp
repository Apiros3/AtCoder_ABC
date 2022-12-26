#include <iostream>
#include <cmath>
#include <algorithm>
#include <numeric>
#include <iomanip>
#include <string>
using namespace std;


int main()
{
    long long int N;
    bool temp=0;
    cin >> N;

    for (int i=1; i<=9; i++) {
        for (int j=1; j<=9; j++) {
            if (i*j==N)
                temp=1;
        }
    }
    if (temp)
        cout << "Yes";
    else
        cout << "No";

    return 0;
}     