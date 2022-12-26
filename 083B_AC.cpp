#include <iostream>
#include <cmath>
#include <algorithm>
#include <numeric>
#include <iomanip>
#include <string>
using namespace std;


int main()
{
    long long int N, A, B, ans=0;
    cin >> N >> A >> B;

    for (int j=1; j<=N; j++) {
        int temp=0, X=j;
        for (int i=0; i<10; i++) {
            temp+=X%10;
            X/=10;
        }
        bool temp2=0;
        if (temp>=A && temp<=B) temp2=1;
        if (temp2) ans+=j;
    }
    cout << ans;

    return 0;
}     