#include <iostream>
#include <cmath>
#include <algorithm>
#include <numeric>
#include <iomanip>
#include <vector>
using namespace std;


int main()
{
    int N, a[3000], temp, b[3000];
    cin >> N;
    for (int i=0; i<N; i++) 
        cin >> a[i];

    for (int i=0; i<N; i++) {
        temp=0;
        for (int j=0; j<N; j++) {
            temp+=j%a[j];
        }
        b[i]=temp;
    }
    sort(b, b+N);
    
    cout << b[N-1];


    return 0;
}     