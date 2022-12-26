#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N; cin >> N;
    vector<vector<int>> vec(N,vector<int>(N));
    for(int i = 0; i < N; ++i) {
        string K; cin >> K;
        for (int j = 0; j < N; ++j) {
            vec[i][j] = K[j]-'0';
        }
    }
    long long cnt = 0;
    for (int i = 0; i < N; ++i) {
        for (int j = i+1; j < N; ++j) {
            if (!vec[i][j]) continue;
            for (int k = j+1; k < N; ++k) {
                cnt += vec[i][k]*vec[j][k];
            }
        }
    }
    cout << cnt << endl;

    return 0;
}     

