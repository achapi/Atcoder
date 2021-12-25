/**
  date : 2021年12月18日00時29分54秒
  author : achapi
*/
#include <bits/stdc++.h>
#pragma GCC target("avx2")
#pragma GCC optimize("O3")
#pragma GCC optimize("unroll-loops")
using namespace std;
typedef long long ll;

#define endl '\n'
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(v) v.begin(), v.end()
ll gcd(ll x, ll y) { return (x % y)? gcd(y, x % y): y; }
ll lcm(ll a, ll b){
    ll g = gcd(a, b);
    return (a / g) * (b / g);
}
int main() {
    cin.tie(0);cout.tie(0);
    ios_base::sync_with_stdio(false);
    //code start
    int a,b;
    cin>>a>>b;
    int l = lcm(a,b);
    if(l==2147450883||l<0){
        cout<<"Large"<<endl;
    }else{
        cout<<l<<endl;
    }
    //code end
    return 0;
}