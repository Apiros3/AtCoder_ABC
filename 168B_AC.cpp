#include <iostream>
#include <cmath>
#include <algorithm>
#include <numeric>
#include <iomanip>
using namespace std;


int main()
{
    long long int K;
    string S;
    cin >> K >> S;

    if (S.length()<=K)
        cout << S;
    else {
        for (int i=0; i<K; i++) {
            cout << S[i];
        }
        cout << "...";
    }  



    return 0;
}     