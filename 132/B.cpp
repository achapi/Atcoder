/**
  date : 2021年12月26日20時57分45秒
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
    int n,ans,a;cin>>n;
    vector<int> p(n);
    rep(i, n)cin>>p[i];
    if(p[0]==1&&p[1]==n)ans=2;
    if(p[0]==n&&p[1]==1)ans=1;
    if(p[0]>p[1])min(ans,p[0])

    cout<<ans;
    //code end
    return 0;
}