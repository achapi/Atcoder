/**
  date : 2021年12月25日20時43分23秒
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
    int n,ans=0,a;cin>>n;
    string s;cin>>s;
    a=0;
        rep(i, n-1){
            if(s[0]!=s[i+1]){
                a=n-i-1;
                ans+=a;
                break;
            }
        }
    rep(j, n){
        if(s[j]==s[j+1]){
            ans+=a;
            continue;
        }
        a=0;
        rep(i, n-j){
            if(s[j+1]!=s[i+j+1]){
                a=n-i-1;
                ans+=a;
                break;
            }
        }
    }
    cout<<ans;
    //code end
    return 0;
}