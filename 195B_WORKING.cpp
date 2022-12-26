#include <iostream>
#include <cmath>
#include <algorithm>
#include <numeric>
#include <iomanip>
using namespace std;


int main()
{
    long double A, B, W;
    long int temp1=0, temp2=0;
    cin >> A >> B >> W;


    temp1=floor(W*1000/A);
    temp2=ceil(W*1000/B);

    if (temp1!=0 && temp2<temp1) 
        cout << temp2 << " " << temp1 << endl;
    else
        cout << "UNSATISFIABLE";

    return 0;
}     