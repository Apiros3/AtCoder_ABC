#include <iostream>
#include <cmath>
#include <algorithm>
#include <numeric>
#include <iomanip>
#include <vector>
#include <cstring>
using namespace std;


int main()
{
    long long int N, A[1000], B[1000], ans1=0, ans2=0;
    cin >> N;
    for (int i=0; i<N; i++)
        cin >> A[i];
    for (int i=0; i<N; i++)
        cin >> B[i];
        
    for (int i=0; i<N; i++) {
        if (A[i]==B[i])
            ans1++;
    }
    
    for (int i=0; i<N; i++) {
        for (int j=0; j<N; j++) {
            if (A[i]==B[j] && i!=j) 
                ans2++;
        }
    }
    cout << ans1 << '\n' << ans2 << '\n';


    return 0;
}     