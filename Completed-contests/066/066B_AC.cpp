#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	string S;
    cin >> S;

    for (int i=(S.length()-1)/2; i>=0; i--) {
        int temp=0;
        for (int j=0; j<i; j++) {
            if (S[j]!=S[j+i]) {
                temp++;
            }
        }
        if (temp==0) {
            cout << 2*i << '\n'; 
            break;
        }
    }

	return 0;
}