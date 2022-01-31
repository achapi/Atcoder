/**
  date : 2022年01月22日21時00分39秒
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
    vector<int> s(n);
    rep(i, n)cin>>s[i];
    int m=*max_element(all(s));
    if(s[0]>s[1]){
        m=s[0];
    }
    if(s[0]<=s[1]){
        rep(i, n-1){
            if(s[i]>s[i+1]){
                m=s[i];
                break;
            }
        }
    }
    rep(i, n){
        if(s[i]!=m)cout<<s[i]<<" ";
    }
    //code end
    return 0;
}