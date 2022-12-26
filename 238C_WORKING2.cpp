#include <iostream>
#include <cmath>
#include <algorithm>
#include <numeric>
#include <iomanip>
#include <vector>
using namespace std;


int main()
{
    long long int mod=998244353;
    long long int N, ans=0; cin >> N;

    for (int i=1; i<=18; i++) {
        long long int num1=pow(10,i-1)-1;
        long long int num2=min(N , pow(10,i)-1);
        if ((num2-num1)%2==0) 
            ans+=((num2-num1)/2)%mod*(num2-num1+1)%mod;
        else
            ans+=(num2-num1)%mod*((num2-num1+1)/2)%mod;
        ans%=mod;
        if (num2!=pow(10,i)-1)
            break;
    } 
    cout << ans;


    return 0;
}     