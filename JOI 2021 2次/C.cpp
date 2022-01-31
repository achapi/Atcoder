/**
  date : 2022年01月11日21時38分26秒
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
    if(h>6||w>6)return 0;
    vector<int> a(w);
    rep(i, w)cin>>a[i];
    rep(i, pow(2,w)){
        
    }
    //code end
    return 0;
}