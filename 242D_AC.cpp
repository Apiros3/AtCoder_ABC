#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;


int main()
{
    long long int Q, t[100000], k[100000];
    string S;

    cin >> S >> Q;
    long long int length=S.length();

    for (int i=0; i<Q; i++) {
        cin >> t[i] >> k[i];
    }

    

    for (int i=0; i<Q; i++) {
        long long int temp=0, temp2=k[i]-1;

        if (t[i]<60) {
            for (int j=0; j<t[i]; j++) {
                if (temp2%2==0) 
                    temp++;
                else
                    temp+=2;
                temp2/=2;
            }
            if (S[temp2]=='B')
                temp++;
            else if (S[temp2]=='C')
                temp+=2;
        }
        else {
            for (int j=0; j<60; j++) {
                if (temp2%2==0) 
                    temp++;
                else
                    temp+=2;
                temp2/=2;
            }
            temp+=(t[i]-60);
            if (S[0]=='B')
                temp++;
            else if (S[0]=='C')
                temp+=2;
        }

        temp%=3;
        
        if (temp==0)
            cout << 'A' << '\n';
        else if (temp==1)
            cout << 'B' << '\n';
        else   
            cout << 'C' << '\n';
    }
 



    return 0;
}