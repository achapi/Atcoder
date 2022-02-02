/**
  date : 2022年01月31日23時34分14秒
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
    int a,b,c,d;cin>>a>>b>>c>>d;
    if(a<=c&&b>=d)cout<<"Yes";
    else cout<<"No";
    //code end
    return 0;
}