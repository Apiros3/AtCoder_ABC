#include <iostream>
#include <cmath>
#include <algorithm>
#include <numeric>
#include <iomanip>
using namespace std;


int main()
{
    long double X, Y, dist;
    long int R;
    cin >> R >> X >> Y;

    dist = sqrt(X*X+Y*Y);

    if (dist == (long int)dist && (long int)dist%R==0)
        cout << dist/R;
    else if (dist<R) 
        cout << 2;
    else  
        cout << floor(dist/R)+1;

    return 0;
}     