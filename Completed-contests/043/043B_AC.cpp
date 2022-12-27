#include <iostream>
#include <cmath>
#include <algorithm>
#include <numeric>
#include <iomanip>
using namespace std;


int main()
{
    string S, ans="";
    int temp=0;
    cin >> S;
    for (long int i=0; i<S.length(); i++) {
        if (S[i]=='1' || S[i]=='0') {
            ans=ans+S[i];
            temp++;
        }
        else if (temp!=0) {
            ans.pop_back();
            temp--;
        }
    }
    cout << ans;


    return 0;
}     