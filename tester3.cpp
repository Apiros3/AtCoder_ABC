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
#include <deque>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,b,a) for(int i=b;i>a;i--)
#define rbit(i,a) for(int i=0;i<(1<<a);i++)
typedef long long ll;
typedef long double lld;
const ll mod=1e9+7;
using namespace std;
int dx[4]={1,0,-1,0};
int dy[4]={0,1,0,-1};
const string zton="0123456789";
const string atoz="abcdefghijklmnopqrstuvwxyz";
ll gcd(ll a,ll b){
    ll r;
    r=a%b;
    if(r==0){
        return b;
    }
    else{
        return gcd(b,r);
    }
}
typedef pair<int,int> P;
ll inv[2001010];
ll kaijou[2001010];
ll kaijou_inv[2001010];
ll nck(ll n,ll k){
    if(n<k)return 0ll;
    else return (((kaijou[n]*kaijou_inv[k])%mod)*kaijou_inv[n-k])%mod;
}
ll npk(ll n,ll k){
    return (kaijou[n]*kaijou_inv[n-k])%mod;
}
 
 
int main(void){
    inv[0]=1;
    inv[1]=1;
    rep(i,2,2001010) inv[i]=inv[mod%i]*(mod-mod/i)%mod;
    kaijou[0]=1ll;
    rep(i,1,2001010){
        kaijou[i]=kaijou[i-1]*1ll*i;
        kaijou[i]%=mod;
    }
    kaijou_inv[0]=1ll;
    rep(i,1,2001010){
        kaijou_inv[i]=kaijou_inv[i-1]*1ll*(inv[i]);
        kaijou_inv[i]%=mod;
    }
    int n,k;cin >> n >> k;
    cout << nck(n-1+k,k) << endl;
}