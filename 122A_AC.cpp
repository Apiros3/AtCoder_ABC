#include <iostream>
#include <cmath>
#include <algorithm>
#include <numeric>
using namespace std;


int main()
{
    string b;
    cin >> b;

    if (b[0]=='A') 
        cout << 'T';
    else if (b[0]=='C')
        cout << 'G';
    else if (b[0]=='G')
        cout << 'C';
    else   
        cout << 'A';


    return 0;
}     