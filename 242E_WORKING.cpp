#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;


int main()
{
    long long int T, N[100000];
    string S[100000];
    
    cin >> T;
    for (int i=0; i<T; i++) {
        cin >> N[i] >> S[i];
    }
   
    long long int query[50000], temp;
    query[0]=1;
    for (int i=1; i<50000; i++) {
        temp = query[i-1]*26;
        query[i] = temp%998244353;
    } 

    for (int i=0; i<T; i++) {
        int ans=0;
        string tempS=S[i];
        if (N[i]%2==0) {
            for (int j=0; j<N[i]/2; j++) {
                if (tempS[j] < tempS[N[i]-j-1]) 
                    ans+=query[N[i]/2-j-1]*(tempS[j]-64);
                else 
                     ans+=query[N[i]/2-j-1]*(tempS[N[i]/2-j-1]-64);
                ans%=998244353;
            } 
        }
        else {
            for (int j=0; j<N[i]/2; j++) {
                if (tempS[j] < tempS[N[i]-j-1]) 
                    ans+=query[N[i]/2-j-1]*(tempS[j]-64);
                else 
                     ans+=query[N[i]/2-j-1]*(tempS[N[i]/2-j-1]-64);
                ans%=998244353;
            }
        }
     cout << ans << '\n';
    }


    return 0;
}