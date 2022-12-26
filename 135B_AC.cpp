#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;


int main()
{
    long long int N, temp=0, temp2;

    cin >> N;

    for (int i=1; i<=N; i++) {
        cin >> temp2;
        if (temp2!=i)
            temp++;
    }

    if (temp==0 || temp==2) 
        cout << "YES";
    else    
        cout << "NO"; 

    return 0;
}