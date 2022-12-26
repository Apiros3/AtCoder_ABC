#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main()
{
    string S;
    cin >> S;

    int temp=0;

    for (int i=0; i<3; i++) {
        if (S[i]=='o') {
            temp++;
        }
    }

    cout << 700+100*temp;
  


	return 0;
}