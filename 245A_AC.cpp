#include <iostream>
#include <cmath>
#include <algorithm>
#include <numeric>
#include <iomanip>
#include <string>
#include <cstdio>
#include <vector>
#include <stdlib.h>
using namespace std;


int main()
{
    int A, B, C, D;
    cin >> A >> B >> C >> D;

    if (A<C)
        cout << "Takahashi";
    else if (A==C && B<=D)
        cout << "Takahashi";
    else
        cout << "Aoki";
    
    cout << endl;

    return 0;
}     