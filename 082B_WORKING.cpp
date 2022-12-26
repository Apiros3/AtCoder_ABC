#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main()
{
    string S, T;
    cin >> S >> T;

    int s[100], t[100];

    for (int i=0; i<S.length(); i++) {
        s[i]=S[i];
    }
    for (int i=0; i<T.length(); i++) {
        t[i]=T[i];
    }
    sort(s,s+S.length());
    sort(t,t+T.length());

    for (int i=0; )
    if (s[0]<t[T.length()-1]) {
        "Yes"
    }
    
    cout << s[0] << t[T.length()-1];

	return 0;
}