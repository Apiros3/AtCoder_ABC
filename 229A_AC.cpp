#include <iostream>
#include <cmath>
#include <algorithm>
#include <numeric>
#include <iomanip>
#include <string>
using namespace std;


int main()
{
    string S1, S2;
    cin >> S1 >> S2;

    if (S1[0]==S2[0] || S1[0]==S1[1] || S2[0]==S2[1] || S1[1]==S2[1])
        cout << "Yes";
    else
        cout << "No";


    return 0;
}     