#include <iostream>
#include <cmath>
#include <algorithm>
#include <numeric>
#include <iomanip>
#include <string>
#include <cstdio>
using namespace std;


int main()
{
    char c;
    cin >> c;
    if (c=='a' || c=='e' || c=='i' || c=='o' || c=='u')
        cout << "vowel";
    else
        cout << "consonant";

    return 0;
}     