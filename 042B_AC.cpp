#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main()
{
    int N, L;
    cin >> N >> L;
    string a[100], b[100];

    for (int i=0; i<N; i++) {
        cin >> a[i];
    }
    
    sort(a, a+N);

    for (int i=0; i<N; i++) {
        cout << a[i];
    }
    cout << '\n';

	return 0;
}