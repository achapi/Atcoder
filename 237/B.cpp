/**
  date : 2022年01月30日21時09分05秒
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
    int h,w;cin>>h>>w;
    vector<vector<int>> a(h,vector<int>(w));
    rep(i, h){
        rep(j, w){
            cin>>a[i][j];
        }
    }
    rep(i, w){
        rep(j, h){
            cout<<a[j][i]<<" ";
        }
        cout<<endl;
    }
    //code end
    return 0;
}