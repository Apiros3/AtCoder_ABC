#include <iostream>
#include <cmath>
#include <algorithm>
#include <numeric>
#include <iomanip>
using namespace std;


int main()
{
    string S, T;
    char s[100], t[100];
    cin >> S >> T;

    for (int i=0; i<S.length(); i++)
        s[i]=S[i];
    for (int i=0; i<T.length(); i++)
        t[i]=T[i];

    sort(s, s+S.length());
    sort(t, t+T.length(), greater<int>());
    
    int temp=2;
    for (int i=0; i<min(S.length(),T.length()); i++) {
        if (s[i]>t[i]) {
            temp=0;
            break;
        }
        else if (s[i]<t[i]) {
            temp=1;
            break;
        }
    }
    if (temp==2) {
        if (S.length()<T.length())
            temp=1;
        else
            temp=0;
    }
    if (temp) 
        cout << "Yes";
    else
        cout << "No";

    return 0;
}     