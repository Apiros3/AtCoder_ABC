#include <iostream>
#include <cmath>
#include <algorithm>
#include <numeric>
#include <iomanip>
#include <string>
using namespace std;


int main()
{
    long long int N, X[100], min=1000000;
    cin >> N;
    for (int i=0; i<N; i++)
        cin >> X[i];


    for (int i=1; i<=100; i++) {
        long long int temp=0;
        for (int j=0; j<N; j++) {
            temp+=pow(X[j]-i,2);
        }
        if (temp<min)
            min=temp;
    }    
    cout << min;


    return 0;
}     