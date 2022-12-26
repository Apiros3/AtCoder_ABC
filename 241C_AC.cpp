#include <iostream>
#include <cmath>
#include <algorithm>
#include <numeric>
#include <iomanip>
#include <vector>
using namespace std;


int main()
{
    string arr[1000];
    long long int N, temp2=0; cin >> N;
    for (int i=0; i<N; i++) 
        cin >> arr[i];
    
    for (int k=0; k<N; k++) {
        for (int i=0; i<N-5; i++) {
            int temp=0;
            for (int j=0; j<6; j++) {
                if (arr[k][i+j]=='#')
                    temp++;
            }
            if (temp>=4) {
                temp2++;
                break;
            }
        }
    }
    for (int k=0; k<N; k++) {
        for (int i=0; i<N-5; i++) {
            int temp=0;
            for (int j=0; j<6; j++) {
                if (arr[i+j][k]=='#')
                    temp++;
            }
            if (temp>=4) {
                temp2++;
                break;
            }
        }
    }
    for (int k=0; k<N-5; k++) {
        for (int i=0; i<N-5; i++) {
            int temp=0;
            for (int j=0; j<6; j++) {
                if (arr[i+j][k+j]=='#')
                    temp++;
            }
            if (temp>=4) {
                temp2++;
                break;
            }
        }
    }
    for (int k=0; k<N-5; k++) {
        for (int i=0; i<N-5; i++) {
            int temp=0;
            for (int j=0; j<6; j++) {
                if (arr[N-1-i-j][k+j]=='#')
                    temp++;
            }
            if (temp>=4) {
                temp2++;
                break;
            }
        }
    }



    if (temp2)
        cout << "Yes";
    else
        cout << "No";

    return 0;
}     