#include <iostream>
#include <cmath>
#include <algorithm>
#include <numeric>
#include <iomanip>
#include <vector>
using namespace std;


int main()
{
    int H, W, temp=0;
    vector<string> arr(51);
    cin >> H >> W;
    for (int i=0; i<H; i++) 
        cin >> arr[i];
    
    for (int i=1; i<H; i++) {
        for (int j=1; j<W; j++) {
            if (arr[i][j] == '#') {
                int temp1=0;
                if (arr[i][j-1] == '#')
                    temp1++;
                else if (arr[i-1][j] == '#')
                    temp1++;
                else if (arr[i][j+1] == '#')
                    temp1++;
                else if (arr[i+1][j] == '#')
                    temp1++;

                if (temp1==0)
                    temp++;
            }
        }
    }
    if (temp==0)
        cout << "Yes";
    else
        cout << "No";

    return 0;
}     