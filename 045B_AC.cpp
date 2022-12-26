#include <iostream>
#include <cmath>
#include <algorithm>
#include <numeric>
#include <iomanip>
#include <string>
#include <cstdio>
#include <vector>
#include <stdlib.h>
#include <map>
#include <math.h>
#define rep(i,start,end) for(ll i=start; i<end; i++)
using namespace std;
using ll = long long;

int main()
{
    string A, B, C;
    cin >> A >> B >> C;

    ll tempA = 0, tempB = 0, tempC = 0, pointer = 0;
    ll endA = A.length()+1, endB=B.length()+1, endC=C.length()+1;

    rep(i, 0, 300) {
        if (pointer==0) {
            pointer = A[tempA]-'a';
            tempA++;
        }
        else if (pointer==1) {
            pointer = B[tempB]-'a';
            tempB++;
        }
        else {
            pointer = C[tempC]-'a';
            tempC++;
        }

        if (tempA==endA) {
            cout << 'A' << endl;
            return 0;
        }
        else if (tempB==endB) {
            cout << 'B' << endl;
            return 0;
        }
        else if (tempC==endC) {
            cout << 'C' << endl;
            return 0;
        }
    }      

    return 0;
}     