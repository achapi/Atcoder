/**
  date : 2021年12月18日00時06分49秒
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
int main() {
    cin.tie(0);cout.tie(0);
    ios_base::sync_with_stdio(false);
    //code start
    ll a,b,c;
    cin>>a>>b>>c;
    ll g=gcd(gcd(a,b),c);
    cout<<((a/g-1)+(b/g-1)+(c/g-1));
    //code end
    return 0;
}