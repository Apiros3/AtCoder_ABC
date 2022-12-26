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
    long long int V, A, B, C, temp;
    cin >> V >> A >> B >> C;

    temp=V%(A+B+C);
    
    if (temp<A)
        cout << 'F';
    else if (temp<A+B)
        cout << 'M';
    else
        cout << 'T';

    return 0;
}     