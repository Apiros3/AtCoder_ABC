#include <iostream>
#include <cmath>
#include <algorithm>
#include <numeric>
#include <iomanip>
using namespace std;


int main()
{
    long long int N, Q;
    string S, S1, S2;
    cin >> N >> S >> Q;
    for (int i=0; i<N; i++)
        S1[i]=S[i];
    for (int i=N; i<2*N; i++) 
        S2[i-N]=S[i];
    
    for (int i=0; i<Q; i++) {
        long long int T, A, B;
        cin >> T >> A >> B;
        if (T==1) {
            if (A<=N) {
                if (B<=N) swap(S1[A-1],S1[B-1]);
                else swap(S1[A-1],S2[B-N-1]);
            }
            else {
                if (B<=N) swap(S2[A-N-1],S1[B-1]);
                else swap(S2[A-N-1],S2[B-N-1]);
            }
        }
        else {
            string temp1=S1, temp2=S2;
            S2=temp1;
            S1=temp2;
        }
    }
    
    for (int i=0; i<N; i++) 
        cout << S1[i];
    for (int i=0; i<N; i++) 
        cout << S2[i];
    
    cout << endl;

    return 0;
}     