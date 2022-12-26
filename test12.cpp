#include <bits/stdc++.h>
using namespace std;


int64_t div3(int num) {
    return ((num*1431655766LL)>>32);
}


int64_t div100(int num) {
    return ((num*42949673LL)>>32) + (num<0);
}
int main()
{
    int32_t num;
    cin >> num;

    for (int i=-num; i <= num; ++i)
        cout << i << " " << div100(i) << '\n';
    // cout << num/100 << endl;

    return 0;
}     

