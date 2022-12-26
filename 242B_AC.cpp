#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
 
void sortString(string &str)
{
   sort(str.begin(), str.end());
   cout << str;
}
 
int main()
{
    string S;
    cin >> S;

    sortString(S);
    cout << '\n';
    return 0;
}