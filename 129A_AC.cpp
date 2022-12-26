#include <iostream>
#include <cmath>
#include <algorithm>
#include <numeric>
#include <iomanip>
#include <string>
using namespace std;


int main()
{
    int P, Q, R;
    cin >> P >> Q >> R;

    cout << min(P+Q,min(Q+R,R+P));


    return 0;
}     