#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;


int main()
{

    string S;
    cin >> S;
    if (S[S.length()-1] == 's')
        cout << S << "es";
    else
        cout << S << 's';


    return 0;
}     