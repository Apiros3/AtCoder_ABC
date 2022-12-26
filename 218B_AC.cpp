#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;


int main()
{
    long long int A[26];
    string temp;

    for (int i=0; i<26; i++) {
        cin >> A[i];
    }
    for (int i=0; i<26; i++) {
        temp=A[i]+96;
        cout << temp;
    }


    return 0;
}