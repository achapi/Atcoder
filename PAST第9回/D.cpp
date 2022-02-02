/**
  date : 2022年01月31日23時52分26秒
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
    vector<pair<int,pair<int,int>>> s(n);
    vector<int> a(n);
    vector<int> b(n);
    rep(i, n)cin>>a[i];
    rep(i, n)cin>>b[i];
    rep(i, n){
        s[i]={-1*(a[i]+b[i]),{-1*a[i],i+1}};
    }
    sort(all(s));
    rep(i, n){
        cout<<s[i].second.second<<" ";
    }
    //code end
    return 0;
}