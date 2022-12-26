#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main()
{
    long long int H, temp=0;
    cin >> H;

    do {
        H/=2;
        temp++;
    } while(H!=0);

    temp = pow(2,temp)-1;

    cout << temp << '\n'; 
   
	return 0;
}