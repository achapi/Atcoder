/**
  date : 2022年01月11日01時52分58秒
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
    vector<int> xy(n);rep(i, n)xy[i]=i+1;
    int x,y;
    rep(i, m){
        cin>>x>>y;
        xy[x-1]=y;
    }
    rep(i, n){
        cout<<xy[i]+1<<endl;
    }
    //code end
    return 0;
}