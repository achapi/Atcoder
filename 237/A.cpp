/**
  date : 2022年01月30日20時59分51秒
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

int main() {
    cin.tie(0);cout.tie(0);
    ios_base::sync_with_stdio(false);
    //code start
    ll a;cin>>a;
    ll b=pow(2,31);
    if(-1*b<a&&a<b)cout<<"Yes";
    else cout<<"No";
    //code end
    return 0;
}