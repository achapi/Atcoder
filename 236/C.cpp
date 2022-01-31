/**
  date : 2022年01月23日21時12分42秒
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
    vector<string> a(n);
    rep(i, n){
        cin>>a[i];
    }
    map<string,int> b;
    rep(i, m){
        string s;cin>>s;
        b[s]=1;
    }
    rep(i, n){
        if(b[a[i]]==1){
            cout<<"Yes"<<endl;
        }else{
            cout<<"No"<<endl;
        }
    }
    //code end
    return 0;
}