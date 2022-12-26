#include <iostream>
#include <cmath>
#include <algorithm>
#include <numeric>
#include <iomanip>
#include <string>
using namespace std;


int main()
{
    long long int H, W, M, h[300000], w[300000], temph[300000], tempw[300000];
    cin >> H >> W >> M;
    for (int i=0; i<M; i++) {
        cin >> h[i] >> w[i];
        temph[i]=h[i];
        tempw[i]=w[i];
    }
    sort(temph, temph+M);
    sort(tempw, tempw+M);
    
    long long int temp1=0, temp2=0, temp3, temp4;
    for (int i=1; i<M; i++) {
        if (temph[i]==temph[i-1]) {

        }
    }
    

    return 0;
}     