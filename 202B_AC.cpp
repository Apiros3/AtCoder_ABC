#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;


int main()
{

    string S;
    cin >> S;

    for (int i=S.length()-1; i>=0; i--) {
        if (S[i]==54) 
            cout << 9;
        else if (S[i]==57)
            cout << 6;
        else
            cout << S[i];
    }
    

    return 0;
}     