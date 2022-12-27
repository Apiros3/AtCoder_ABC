#include <iostream>
#include <cmath>
#include <algorithm>
#include <numeric>
#include <iomanip>
#include <string>
using namespace std;


int main()
{
    long long int N, Y;
    cin >> N >> Y;
    bool temp=0;

    for (int i=0; i<=N; i++) {
        for (int j=0; j<=N-i; j++) {
            if (i*10000+j*5000+(N-i-j)*1000==Y) {
                cout << i << " " << j << " " << (N-i-j) << "\n";
                temp=1;
                break;
            }
        }
        if (temp) break;
    }
    if (!temp) cout << -1 << " " << -1 << " " << -1;
    

    return 0;
}     