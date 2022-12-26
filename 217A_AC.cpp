#include <iostream>
#include <cmath>
#include <algorithm>
#include <numeric>
#include <iomanip>
using namespace std;


int main()
{
    string S[2], temp;
    cin >> S[0] >> S[1];
    temp=S[0];

    sort(S, S+2);
    
    if (S[0]==temp)
        cout << "Yes";
    else
        cout << "No";


    return 0;
}     