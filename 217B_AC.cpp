#include <iostream>
#include <cmath>
#include <algorithm>
#include <numeric>
#include <iomanip>
using namespace std;


int main()
{
    string S1, S2, S3, temp;
    cin >> S1 >> S2 >> S3;

    temp = (291-S1[1]-S2[1]-S3[1]);
    cout << 'A' << temp << 'C';

    
    return 0;
}     