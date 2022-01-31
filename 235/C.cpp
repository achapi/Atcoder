/**
  date : 2022年01月15日20時57分07秒
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
    int n,q;cin>>n>>q;
    map<int,map<int,int>> m;
    for(int i=1;i<=n;i++){
        int a;cin>>a;
        m[a][m[a].size()+1]=i;
    }
    int b,c;
    rep(i, q){
        cin>>b>>c;
        if(m[b][c]==0)cout<<-1<<endl;
        else cout<<m[b][c]<<endl;
    }
    //code end
    return 0;
}