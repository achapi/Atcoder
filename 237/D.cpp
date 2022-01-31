/**
  date : 2022年01月30日21時27分27秒
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
    vector<int> a(n+1);
    rep(i, n+1){
        a[i]=i+1;
    }
    string s;cin>>s;
    rep(i, n){
        char c=s[i];
        if(c=='R'){
            cout<<i<<" ";
            a[i]=0;
        }
    }
    for(int i=n;i>-1;i--){
        if(a[i]!=0){
            cout<<i<<" ";
        }
    }
    //code end
    return 0;
}