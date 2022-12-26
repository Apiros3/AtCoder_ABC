#include <iostream>
#include <cmath>
#include <algorithm>
#include <numeric>
#include <iomanip>
#include <string>
using namespace std;


int main()
{
    long long int N, d[100];
    cin >> N;
    for (int i=0; i<N; i++) 
        cin >> d[i];
    
    sort(d, d+N);
    int temp=0;
    for (int i=1; i<N; i++) {
        if (d[i]==d[i-1])
            temp++;
    }
    cout << N-temp;

    return 0;
}     