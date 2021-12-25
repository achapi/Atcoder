/**
  date : 2021年12月19日21時25分37秒
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
    int n,m,a;cin>>n>>m;
    vector<int> ab(n);
    vector<int> cd(n);
    rep(i, m*2){
        cin>>a;
        ab[a-1]++;
    }
    rep(i, m*2){
        cin>>a;
        cd[a-1]++;
    }
    sort(all(ab));
    sort(all(cd));
    if(ab!=cd)cout<<"No"<<endl;
    else cout<<"Yes"<<endl;
    //code end
    return 0;
}