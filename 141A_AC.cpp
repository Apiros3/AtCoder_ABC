#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;


int main()
{

    string S;
    cin >> S;

    if (S[0]=='S')
        cout << "Cloudy";
    else if (S[0]=='C')
        cout << "Rainy";
    else   
        cout << "Sunny";


    return 0;
}     