#include <iostream>
#include <cmath>
#include <algorithm>
#include <numeric>
#include <iomanip>
#include <string>
#include <cstdio>
using namespace std;


int main()
{
    int A, B;
    cin >> A >> B;
    if (A>B && B!=1)
        cout << "Alice";
    else if (A<B && A!=1) 
        cout << "Bob";
    else if (A==B)
        cout << "Draw";
    else if (A==1)
        cout << "Alice";
    else
        cout << "Bob";

    return 0;
}     