#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
 
 
int main()
{
    long long int N, temp=0;

    cin >> N;

    long long int temp1, temp2, temp3, temp4;
    cin >> temp1 >> temp2 >> temp3 >> temp4;

    if (temp1 == temp3 || temp1 == temp4)
        temp2 = temp1;
    else if (temp2 == temp3 || temp2 == temp4)
        temp1 = temp2;
    else
        temp++;

    for (int i=2; i<N-1; i++) {
        cin >> temp3 >> temp4;
        if (temp1 == temp3 || temp1 == temp4 || temp2 == temp3 || temp2 == temp4) 
            temp+=0;
        else   
            temp++;
    }

    if (temp==0) 
        cout << "Yes";
    else  
        cout << "No";
    
    cout << '\n';
}