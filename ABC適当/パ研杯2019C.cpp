/**
  date : 2022年01月21日18時13分03秒
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
    int n,m;cin>>n>>m;
    ll ans=0;
    vector<vector<int>> s(n,vector<int>(m));
    rep(i,n)rep(j,m)cin>>s[i][j];
    rep(i,m){
        rep(j,m-1){
            ll a=0;
            rep(k, n){
                a+=max(s[k][i],s[k][j+1]);
            }
            ans=max(ans,a);
        }
    }
    cout<<ans;
    //code end
    return 0;
}