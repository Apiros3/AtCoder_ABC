#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;



int main()
{
    string S;
    long long int a, b, temp;
    cin >> S >> a >> b;

    temp = S[a-1];
    S[a-1] = S[b-1];
    S[b-1] = temp;

    cout << S;
  
    return 0;
}