#include <iostream>
#include <cmath>
#include <algorithm>
#include <numeric>
#include <iomanip>
using namespace std;


int main()
{
    string N;
    cin >> N;
    int temp=0;

    for (int i=0; i<3; i++) {
        if (N[i]=='7') {
            cout << "Yes";
            temp++;
            break;
        }
    }
    if (temp==0)
        cout << "No";

    
    return 0;
}     