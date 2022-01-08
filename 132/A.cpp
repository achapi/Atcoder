/**
  date : 2021年12月26日20時57分41秒
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
    int n;cin>>n;
    vector<int> r(n);rep(i, n)cin>>r[i];
    vector<int> c(n);rep(i, n)cin>>c[i];
    int q;cin>>q;
    int a,b;
    rep(i, q){
        cin>>a>>b;
        if(r[a-1]+c[b-1] > n)cout<<'#';
        else cout<<'.';
    }
    //code end
    return 0;
}