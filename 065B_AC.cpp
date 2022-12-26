#include <iostream>
#include <cmath>
#include <algorithm>
#include <numeric>
#include <iomanip>
#include <string>
using namespace std;


int main()
{
    long long int N, A[100001], temp=1;
    cin >> N;
    for (int i=1; i<=N; i++)
        cin >> A[i];
    
    bool temp2=1;
    for (int i=1; i<=N; i++) {
        temp=A[temp];
        if (temp==2) {
            cout << i;
            temp2=0;
            break;
        }
    }
    if (temp2)
        cout << -1;


    return 0;
}     