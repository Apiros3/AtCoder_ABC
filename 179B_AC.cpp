#include <iostream>
#include <cmath>
#include <algorithm>
#include <numeric>
#include <iomanip>
#include <string>
using namespace std;


int main()
{
    long long int N, D1[100], D2[100];
    cin >> N;
    for (int i=0; i<N; i++)
        cin >> D1[i] >> D2[i];
    
    bool temp=0;
    for (int i=2; i<N; i++) {
        if (D1[i]==D2[i] && D1[i-1]==D2[i-1] && D1[i-2]==D2[i-2])  
            temp=1;
    }
    if (temp)
        cout << "Yes";
    else
        cout << "No";
    


    return 0;
}     