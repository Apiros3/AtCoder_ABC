#include <iostream>
#include <cmath>
#include <algorithm>
#include <numeric>
#include <iomanip>
#include <string>
using namespace std;


int main()
{
    long long int A, B, socket=1, ans=0;
    cin >> A >> B;

    while (socket<B) {
        socket+=(A-1);
        ans++;
    }
    cout << ans;
    

    return 0;
}     