#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main()
{
    long long int H, N, temp=0, total=0;
    cin >> H >> N;

    for (int i=0; i<N; i++) {
        cin >> temp;
        total+=temp;
    }

    if (total >= H)
        cout << "Yes";
    else
        cout << "No";

    cout << '\n';
   
    return 0;
}