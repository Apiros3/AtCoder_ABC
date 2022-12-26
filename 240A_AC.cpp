#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;


int main()
{
    long long int a, b;
    cin >> a >> b;

    if ((a+1)%10==b%10 || a%10==(b+1)%10)
        cout << "Yes";
    else 
        cout << "No";

    cout << '\n';
  
    return 0;
}