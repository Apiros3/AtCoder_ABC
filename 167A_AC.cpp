#include <iostream>
#include <cmath>
#include <algorithm>
#include <numeric>
#include <iomanip>
using namespace std;


int main()
{
    bool temp=0;
    string S, T;
    cin >> S >> T;

    for (int i=0; i<S.length(); i++) {
        if (S[i]!=T[i]) {
            cout << "No";
            temp=1;
            break;
        }
    }
    if (temp==0) 
        cout << "Yes";


    return 0;
}     